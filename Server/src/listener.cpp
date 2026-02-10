#include "listener.h"

Listener::Listener(QObject* parent)
    : QObject(parent)
{

}

Listener::~Listener()
{

}

void Listener::Start()
{
    if(!server.isListening()) {
        auto result{server.listen(QHostAddress::Any, 12345)};
        if(!result)
            qDebug() << "Listener: Can't start TCP server";
    }
}

void Listener::Stop()
{
    if(server.isListening()) {
        server.close();
    }
}
