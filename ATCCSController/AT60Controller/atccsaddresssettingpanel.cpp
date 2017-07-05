#include "atccsaddresssettingpanel.h"
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <iostream>
ATCCSAddressSettingPanel::ATCCSAddressSettingPanel(QWidget *parent) : QWidget(parent)
{
    initializeUI();
}

void ATCCSAddressSettingPanel::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _mainLayout->setMargin(10);
        _deviceTag = new QLabel(this);
        _ipTag = new QLineEdit(this);
        _portTag = new QLineEdit(this);
        _affirmBtn = new QPushButton(this);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    _affirmBtn->setObjectName("affirm_btn");
    _affirmBtn->setText(tr("Affirm"));
    _mainLayout->addWidget(_deviceTag, 0, 0, 1, 2, Qt::AlignLeft);
    _mainLayout->addWidget(_ipTag, 1, 0, 1, 2);
    _mainLayout->addWidget(_portTag, 2, 0, 1, 2);
    _mainLayout->addWidget(_affirmBtn, 3, 1, 1, 1, Qt::AlignHCenter);
    setLayout(_mainLayout);
}

void ATCCSAddressSettingPanel::setDeviceName(const QString &name)
{
    if(_deviceTag)
        _deviceTag->setText(name);
}
