#include <QCoreApplication>
#include "qtlibrarydemo.h"
#include <QLibrary>
#include <QDebug>

// 定义库函数
typedef QtLibraryDemo* (*GetDemo)();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 加载库函数
    QLibrary* demoDll = new QLibrary("qt-library-demo.dll");

    if (demoDll->load()) {
        GetDemo obj = (GetDemo)demoDll->resolve("GetDemo");
        QtLibraryDemo* ld = obj();
        // ld->test();
        if (ld) {
            qDebug() << "aa获取成功";
        } else {
            qDebug() << "bb获取失败";
        }
        ld->test();
        qDebug() << "lib结果:" << ld->test2();
    } else {
        qDebug() << "加载失败";
        qDebug() << demoDll->errorString();
    }

    return a.exec();
}
