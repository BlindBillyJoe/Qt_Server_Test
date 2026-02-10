#include "clientcontroller.h"
#include "listener.h"

ClientController::ClientController(QObject* parent)
    : QObject(parent)
    , listener(new Listener)
{
    listener->moveToThread(&listenerThread);
    Connect();
}

void ClientController::Connect()
{
    connect(&listenerThread, &QThread::finished, listener, &Listener::deleteLater);
    connect(this, &ClientController::Start, listener, &Listener::Start);
    connect(this, &ClientController::Stop, listener, &Listener::Stop);
}

ClientController::~ClientController()
{

}

void ClientController::StartListener()
{
    emit Start();
}

void ClientController::StopListener()
{
    emit Stop();
}
