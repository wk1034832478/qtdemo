#include "qtlibrarydemo.h"
#include <QDebug>


QtLibraryDemo::QtLibraryDemo()
{
}

void QtLibraryDemo::test(){
    qDebug() << "测试library调用";
}

int QtLibraryDemo::test2(){
    return 520;
}

// 导出demo对象
QtLibraryDemo* GetDemo(){
    return new QtLibraryDemo;
}
