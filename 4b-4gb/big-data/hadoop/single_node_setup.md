# Single Node Setup
## 写在前面
官方参考链接：[Hadoop: Setting up a Single Node Cluster](https://hadoop.apache.org/docs/r2.7.7/hadoop-project-dist/hadoop-common/SingleCluster.html)

## 预备
```text
Java
ssh
```

## 伪分布式

* etc/hadoop/core-site.xml

```xml
<configuration>
    <property>
        <name>fs.defaultFS</name>
        <value>hdfs://localhost:9000</value>
    </property>
    <property>
        <name>hadoop.tmp.dir</name>
        <value>/tmp/hadoop</value>
        <description>Temporary directories.</description>
    </property>
</configuration>
```

* etc/hadoop/hdfs-site.xml

```xml
<configuration>
    <property>
        <name>dfs.replication</name>
        <value>1</value>
    </property>
</configuration>
```

* ssh无密码登录本地主机

首先尝试`ssh localhost；如果需要密码，则进行下文配置；如果登录成功，跳过下文配置。

```shell
ssh-keygen -t rsa -P '' -f ~/.ssh/id_rsa
cat ~/.ssh/id_rsa.pub >> ~/.ssh/authorized_keys
chmod 0600 ~/.ssh/authorized_keys
```

* 配置环境

```shell
export HADOOP_HOME=/user/local/hadoop-2.7.7
```

* 运行

```shell
cd $HADOOP_HOME
bin/hdfs namenode -format
sbin/start-dfs.sh
jps
```

