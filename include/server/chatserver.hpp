#ifndef CHATSERVER_H
#define CHATSERVER_H
#include <muduo/net/EventLoop.h>
#include <muduo/net/TcpServer.h>
using namespace muduo;
using namespace muduo::net;

class ChatServer
{
public:
    // 初始化类
    ChatServer(EventLoop *loop,
               const InetAddress &listenAddr,
               const string &nameArg);
    // 启动
    void start();

private:
    //上报链接相关信息的回调函数 
    void onConnection(const TcpConnectionPtr &);
    // 上报读写事件相关信息的回调函数
    void onMessage(const TcpConnectionPtr &,
                   Buffer *,
                   Timestamp);
    TcpServer _server;
    EventLoop *_loop;
};

#endif
