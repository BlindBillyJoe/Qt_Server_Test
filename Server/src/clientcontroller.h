#ifndef CLIENTCONTROLLER_H
#define CLIENTCONTROLLER_H

#include <QThread>
#include "listener.h"

class ClientController : public QObject {
    Q_OBJECT
public:
    explicit ClientController(QObject* parent = nullptr);
    ~ClientController();

public slots:
    void StartListener();
    void StopListener();

signals:
    void Start();
    void Stop();

private:
    void Connect();

    Listener *listener;
    QThread listenerThread;
};

#endif // CLIENTCONTROLLER_H
