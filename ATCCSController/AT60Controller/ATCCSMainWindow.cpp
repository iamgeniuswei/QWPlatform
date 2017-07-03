/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATCCSMainWindow.cpp
 * Author: lenovo
 * 
 * Created on June 30, 2017, 10:56 PM
 */

#include "ATCCSMainWindow.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QDesktopWidget>
#include <QApplication>
#include "ATCCSMainTitle.h"
#include "ATCCSDevicePanel.h"
#include "atccsplanpanel.h"
ATCCSMainWindow::ATCCSMainWindow(QWidget *parent)
:QWFramelessWindow(parent)
{
//    setObjectName("atccs_mw");
    initializeUI();
//    setMinimumSize(QSize(1024, 768));
//    setWindowState(Qt::WindowFullScreen);
    QDesktopWidget *desktop = QApplication::desktop();
    if(desktop)
        move((desktop->width() - width())/2, (desktop->height() - height())/2);  
}

ATCCSMainWindow::~ATCCSMainWindow()
{
}

void ATCCSMainWindow::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _mainTitle = new ATCCSMainTitle(this);
        _planPanel = new ATCCSPlanPanel(this);
        _gimbalPanel = new ATCCSDevicePanel(this);
        _ccdPanel = new ATCCSDevicePanel(this);
        _filterPanel = new ATCCSDevicePanel(this);
        _focusPanel = new ATCCSDevicePanel(this);
        _domePanel = new ATCCSDevicePanel(this);
    }
    catch(std::exception &e)
    {
        return;
    }


    _gimbalPanel->setLogoObjectName("atccs_dp_gimbal");
    _gimbalPanel->setDeviceName(tr("GIMBAL"));
    _ccdPanel->setLogoObjectName("atccs_dp_ccd");
    _ccdPanel->setDeviceName(tr("CCD"));
    _filterPanel->setDeviceName(tr("Filter"));
    _filterPanel->setLogoObjectName("atccs_dp_filter");
    _focusPanel->setDeviceName(tr("Focus"));
    _focusPanel->setLogoObjectName("atccs_dp_focus");
    _domePanel->setLogoObjectName("atccs_dp_dome");
    _domePanel->setDeviceName(tr("Dome"));

    _mainLayout->setContentsMargins(0, 0, 0, 0);
    _mainLayout->setColumnStretch(1,1);
    _mainLayout->setColumnStretch(2,1);
    _mainLayout->setColumnStretch(3,1);
    _mainLayout->addWidget(_mainTitle, 0, 0, 1, 5, Qt::AlignTop);
    _mainLayout->addWidget(_planPanel, 1, 1, 1, 3);
    _mainLayout->addWidget(_gimbalPanel, 2, 1, 1, 1/*, Qt::AlignTop*/);
    _mainLayout->addWidget(_ccdPanel, 2, 2, 1, 1/*, Qt::AlignTop*/);
    _mainLayout->addWidget(_filterPanel, 2, 3, 1, 1, Qt::AlignTop);
    _mainLayout->addWidget(_focusPanel, 3, 1, 1, 1, Qt::AlignTop);
    _mainLayout->addWidget(_domePanel, 3, 2, 1, 1, Qt::AlignTop);
//    _deviceLayout->setMargin(5);
//    _deviceLayout->addWidget(_gimbalPanel);
//    _deviceLayout->addWidget(_ccdPanel);
//    _deviceLayout->addWidget(_filterPanel);
//    _mainLayout->addLayout(_deviceLayout, 2, 0, 1, 1);
    _mainLayout->setRowStretch(4, 1);
    setLayout(_mainLayout);
}
