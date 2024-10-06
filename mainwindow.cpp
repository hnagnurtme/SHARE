#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // Tạo widget chính
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    // Tạo layout
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // Tạo nút
    button = new QPushButton("Nhấn tôi", this);
    layout->addWidget(button);

    // Tạo ô văn bản
    lineEdit = new QLineEdit(this);
    layout->addWidget(lineEdit);

    // Kết nối tín hiệu với slot
    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClick);
}

MainWindow::~MainWindow() {}

void MainWindow::onButtonClick() {
    lineEdit->setText("Xin chào từ Qt!");
}
