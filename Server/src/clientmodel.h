#ifndef CLIENTMODEL_H
#define CLIENTMODEL_H

#include <QStandardItemModel>

class ClientModel : public QStandardItemModel {
    Q_OBJECT
public:
    explicit ClientModel(QObject* parent = nullptr);
    ~ClientModel();
};

#endif // CLIENTMODEL_H
