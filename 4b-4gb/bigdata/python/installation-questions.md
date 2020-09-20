# pip镜像源

# 安装配置
## 所需依赖包
```shell
sudo apt-get install libatlas-base-dev
sudo apt-get install libsqlite3-dev
```

## ./configure参数
--prefix=/usr/local/python-3.7.6    : 安装目录
--enable-optimizations              : 优化
--enable-loadable-sqlite-extensions : 为安装jupyter准备

