# MyQtApp.pro
TEMPLATE = app
TARGET = MyQtApp
CONFIG += c++11

# Thêm các thư mục con vào project
SOURCES += main.cpp \
         mainwindow.cpp
HEADERS += mainwindow.h
# Thêm thư viện cần thiết
QT += widgets