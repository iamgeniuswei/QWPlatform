/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: lenovo
 *
 * Created on June 30, 2017, 4:53 PM
 */

#include <QApplication>
#include <QFile>
#include <QTranslator>
#include "ATCCSMainTitle.h"
#include "ATCCSMainWindow.h"
#include "ATCCSDevicePanel.h"
int main(int argc, char *argv[])
{
    // initialize resources, if needed
//     Q_INIT_RESOURCE(resource);

    QApplication app(argc, argv);
    QFile qss(":/qss/version1");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();

    //load translator
    const QString langPath = ":/lang/lang_zh";
    QTranslator translator;
    translator.load(langPath);
    app.installTranslator(&translator);

    // create and show your widgets here
//    ATCCSMainTitle w;
//    w.show();
    
    ATCCSMainWindow w;
    w.show();
    
//    ATCCSDevicePanel w;
//    w.setLogoObjectName("atccs_dp_gimbal");
//    w.setDeviceName("GIMBAL");
//    w.setObjectName("atccs_dp");
//    w.show();

    return app.exec();
}
