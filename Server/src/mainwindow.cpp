#include "mainwindow.h"

#include "clientmodel.h"
#include "clientview.h"
#include "clientcontroller.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    init();
    start();
    show();
}

MainWindow::~MainWindow()
{

}

void MainWindow::init()
{
    setWindowTitle("Server");
    setMinimumSize(100, 100);

    auto centralWidget = new QWidget(this);
    auto centralLayout = new QHBoxLayout(centralWidget);

    centralWidget->setLayout(centralLayout);
    setCentralWidget(centralWidget);

    auto clientView = new ClientView(centralWidget);

    auto clientModel = new ClientModel(clientView);
    clientView->setModel(clientModel);

    auto clientController = new ClientController(this);

    centralLayout->addWidget(clientView, 0, Qt::AlignLeft);

    auto buttonLayout = new QVBoxLayout(centralWidget);
    buttonLayout->setAlignment(Qt::AlignTop);
    centralLayout->addLayout(buttonLayout);

    auto startButton = new QPushButton(centralWidget);
    startButton->setText("Start");
    connect(startButton, &QPushButton::clicked, clientController, &ClientController::StartListener);
    buttonLayout->addWidget(startButton);

    auto stopButton = new QPushButton(centralWidget);
    stopButton->setText("Stop");
    connect(stopButton, &QPushButton::clicked, clientController, &ClientController::StopListener);
    buttonLayout->addWidget(stopButton);
}

void MainWindow::start()
{

}
