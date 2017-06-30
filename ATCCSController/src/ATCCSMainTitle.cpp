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
ATCCSMainTitle::ATCCSMainTitle()
{
    initializeUI();
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
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    _mainLayout->setContentsMargins(5, 5, 5, 5);
    _mainLayout->addWidget(_logoLabel, 0, 0, 5, 1, Qt::AlignVCenter);
    _mainLayout->addWidget(_mainHeadLabel, 1, 1, 2, 1, Qt::AlignBottom);
    _mainLayout->addWidget(_subHeadLabel, 3, 1, 1, 1, Qt::AlignTop);
    _mainLayout->addWidget(_closeBtn, 0, 7, Qt::AlignRight);
    setLayout(_mainLayout);
            
}

