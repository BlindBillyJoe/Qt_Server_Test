#ifndef LISTENER_H
#define LISTENER_H

#include <QTcpServer>

class Listener : public QObject {
    Q_OBJECT
public:
    Listener(QObject* parent = nullptr);
    ~Listener();

public slots:
    void Start();
    void Stop();

private:
    QTcpServer server;
};


#endif // LISTENER_H
