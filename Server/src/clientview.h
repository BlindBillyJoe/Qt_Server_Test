#ifndef CLIENTVIEW_H
#define CLIENTVIEW_H

#include <QTableView>

class ClientView : public QTableView {
    Q_OBJECT
public:
    explicit ClientView(QWidget* parent = nullptr);
    ~ClientView();
};

#endif // CLIENTVIEW_H
