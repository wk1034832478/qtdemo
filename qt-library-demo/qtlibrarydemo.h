#ifndef QTLIBRARYDEMO_H
#define QTLIBRARYDEMO_H

#include "qt-library-demo_global.h"

class QTLIBRARYDEMO_EXPORT QtLibraryDemo
{
public:
    QtLibraryDemo();
    virtual void test();
    virtual int test2();
};

extern "C" {
    QTLIBRARYDEMO_EXPORT QtLibraryDemo* GetDemo();
}

#endif // QTLIBRARYDEMO_H
