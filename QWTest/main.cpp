/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: lenovo
 *
 * Created on June 29, 2017, 10:46 AM
 */

#include <QApplication>
#include "QWTitleBar.h"
#include <QLabel>
#include <QFile>
#include <QPushButton>
#include "QWPopupWindowTitleBar.h"
#include "QWFramelessWindow.h"
#include <QMessageBox>
int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    QFile qss(":/qss/version1");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
    
    
    
    // create and show your widgets here
    
//    QWFramelessWindow w;
//    w.show();

    
    
    
    QWPopupWindowTitleBar w;
    QPixmap pix(":/img/logo");
    w.setLogo(pix);
    w.setTitleObjectName("MTtext");
    w.setCloseBtnObjectName("close");
    w.show();
    
    
    
    
//    QWTitleBar w;
//    QLabel *label = new QLabel;
//    label->setPixmap(QPixmap(":/img/logo"));
//    w.addTitleLogo(label);
//    QLabel *head = new QLabel(QObject::tr("dfdsfsfas"));
//    w.addTitleMainHead(head);
//        QLabel *head1 = new QLabel(QObject::tr("dfdsfsfas"));
//    w.addTitleSubHead(head1);
//    
//    QPushButton *btn = new QPushButton("dfd");
//    
//    w.addSystemButton(btn);
//    w.setWindowOpacity(0.6);
//    w.show();


    return app.exec();
}
