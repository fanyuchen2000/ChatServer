# ChatServer
可以工作在nginx tcp负载均衡环境中的集群聊天服务器和客户端源码，基于muduo库实现

编译方式
cd bulid
rm -rf *
cmake ..
make

需要配置nginx tcp的负载均衡
