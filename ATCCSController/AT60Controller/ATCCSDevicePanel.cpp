/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATCCSDevicePanel.cpp
 * Author: lenovo
 * 
 * Created on June 30, 2017, 11:13 PM
 */

#include "ATCCSDevicePanel.h"
#include <QGridLayout>
#include <QLabel>
ATCCSDevicePanel::ATCCSDevicePanel(QWidget *parent)
:QWidget(parent)
{
    setObjectName("atccs_dp");
    initializeUI();
    setAttribute(Qt::WA_StyledBackground);
//    setMinimumSize(300,200);
}

ATCCSDevicePanel::~ATCCSDevicePanel()
{
}

void ATCCSDevicePanel::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _deviceLogo = new QLabel(this);
        _deviceName = new QLabel(this);
        _curStatusLabel = new QLabel(this);
        _curStatusValue = new QLabel(this);
        _lastStatusLabel = new QLabel(this);
        _lastStatusValue = new QLabel(this);
        _warningLabel = new QLabel(this);
        _warningValue = new QLabel(this);
        _errorLabel = new QLabel(this);
        _errorValue = new QLabel(this);
    }
    catch(std::exception &e)
    {
        return;
    }
    
    _deviceName->setObjectName("atccs_dp_devicename");
    _mainLayout->addWidget(_deviceLogo, 0, 0, 1, 1, Qt::AlignRight);
    _mainLayout->addWidget(_deviceName, 0, 1, 1, 1, Qt::AlignLeft);
    
    _curStatusLabel->setObjectName("atccs_dp_label");
    _curStatusValue->setObjectName("atccs_dp_value");
    _lastStatusLabel->setObjectName("atccs_dp_label");
    _lastStatusValue->setObjectName("atccs_dp_value");
    _errorLabel->setObjectName("atccs_dp_label");
    _errorValue->setObjectName("atccs_dp_value");
    _warningLabel->setObjectName("atccs_dp_label");
    _warningValue->setObjectName("atccs_dp_value");
    _curStatusLabel->setText(tr("CurrentStatus:"));
    _lastStatusLabel->setText(tr("LastStatus:"));
    _errorLabel->setText(tr("Error:"));
    _warningLabel->setText(tr("Warning:"));
    _mainLayout->addWidget(_curStatusLabel, 1, 0, 1, 1, Qt::AlignRight);
    _mainLayout->addWidget(_lastStatusLabel, 2, 0, 1, 1, Qt::AlignRight);
    _mainLayout->addWidget(_errorLabel, 3, 0, 1, 1, Qt::AlignRight);
    _mainLayout->addWidget(_warningLabel, 4, 0, 1, 1, Qt::AlignRight);
    
    setLayout(_mainLayout);
    
}

void ATCCSDevicePanel::setLogoObjectName(const QString& objectName)
{
    if(_deviceLogo)
        _deviceLogo->setObjectName(objectName);
}

void ATCCSDevicePanel::setDeviceName(const QString& name)
{
    if(_deviceName)
        _deviceName->setText(name);
}

