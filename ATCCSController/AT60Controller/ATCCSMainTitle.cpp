/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATCCSMainTitle.cpp
 * Author: lenovo
 * 
 * Created on June 30, 2017, 4:54 PM
 */

#include "ATCCSMainTitle.h"
#include <QGridLayout>
#include <QToolButton>
#include <QLabel>
#include <iostream>
ATCCSMainTitle::ATCCSMainTitle(QWidget *parent)
:QWidget(parent)
{
    setObjectName("atccs_mt");
    setAttribute(Qt::WA_StyledBackground);
    initializeUI();
    initializeSignal();
}

ATCCSMainTitle::~ATCCSMainTitle()
{
}

void ATCCSMainTitle::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _logoLabel = new QLabel(this);
        _mainHeadLabel = new QLabel(this);
        _subHeadLabel = new QLabel(this);
        _closeBtn = new QToolButton(this);
        _settingBtn = new QToolButton(this);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    _logoLabel->setObjectName("atccs_mt_logo");
    _mainHeadLabel->setObjectName("atccs_mt_mhead");
    _subHeadLabel->setObjectName("atccs_mt_shead");
    _closeBtn->setObjectName("atccs_mt_close");
    _settingBtn->setObjectName("atccs_mt_setting");
    _settingBtn->setToolTip(tr("Setting"));
    _mainLayout->setContentsMargins(5, 5, 5, 5);
    _mainLayout->addWidget(_logoLabel, 0, 0, 5, 1, Qt::AlignVCenter);
    _mainLayout->addWidget(_mainHeadLabel, 1, 1, 2, 1, Qt::AlignBottom|Qt::AlignLeft);
    _mainLayout->addWidget(_subHeadLabel, 3, 1, 1, 1, Qt::AlignTop|Qt::AlignLeft);
    _mainLayout->setColumnStretch(2, 1);
    _mainLayout->addWidget(_settingBtn, 0, 6, Qt::AlignRight);
    _mainLayout->addWidget(_closeBtn, 0, 7, Qt::AlignRight);

    setLayout(_mainLayout);
}

void ATCCSMainTitle::initializeSignal()
{
    if(_settingBtn)
        connect(_settingBtn, &QToolButton::clicked, this, &ATCCSMainTitle::settingBtnClicked);
    if(_closeBtn)
        connect(_closeBtn, &QToolButton::clicked, this, &ATCCSMainTitle::closeBtnClicked);
}



