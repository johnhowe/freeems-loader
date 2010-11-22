#ifndef FREEEMS_LOADER_H
#define FREEEMS_LOADER_H

#include <QtGui/QWidget>
//#include <QtGui>
#include "ui_freeems_loader.h"
#include "FreeEMS_LoaderComms.h"
#include "qdebug.h"
#include "stdio.h"
#include <iostream>

#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>


class FreeEMS_Loader : public QWidget
{
    Q_OBJECT

public:
    FreeEMS_Loader(QWidget *parent = 0);
    ~FreeEMS_Loader();

protected:
    void fillBaud();
    void fillStopBits();
    void fillDataBits();
    void fillParity();
    void redirectCLI();
    static void outCallBack( const char* ptr, std::streamsize count, void* pTextBox );
    void initGUI();
    int fillDevice();

private:
    Ui::FreeEMS_LoaderClass ui;
    FreeEMS_LoaderComms *connection;
 //   int connected;

public slots:
	void connect();
};

#endif // FREEEMS_LOADER_H
