# 一、ssh原理
暂时没有内容补充(因为了解得也不是很透彻，现在处于使用度逐渐熟练的阶段)

# 二、常用命令
## ssh-keygen

## ssh-add

# 三、配置文件
## 参考资料
* 查看文档
```wiki
man ssh
man 5 ssh_config
```

* 参考默认全局配置文件`/etc/ssh/ssh_config`

## 自定义内容

适用于使用**多个秘钥**并对应不同的应用程序

```shell
cd ~/.ssh
touch config
vim config
```

```wiki
# 注意，你所访问的主机名一定要和config文件中的Host之一相匹配
# 否则，config文件并不能实现该有的作用(代替ssh-add)
Host github.com
    User Juderer
    Hostname github.com
    IdentityFile ~/.ssh/id_rsa_github
    Port 22
```

