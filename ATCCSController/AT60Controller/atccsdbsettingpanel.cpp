#include "atccsdbsettingpanel.h"
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>
#include <iostream>
ATCCSDBSettingPanel::ATCCSDBSettingPanel(QWidget *parent) : QWidget(parent)
{
    initializeUI();
}

void ATCCSDBSettingPanel::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _mainLayout->setMargin(10);
        _settingTag = new QLabel(this);
        _dbTypeTag = new QComboBox(this);
        _dbIPTag = new QLineEdit(this);
        _dbPortTag = new QLineEdit(this);
        _dbNameTag = new QLineEdit(this);
        _dbUserTag = new QLineEdit(this);
        _dbPWDTag = new QLineEdit(this);
        _testBtn = new QPushButton(this);
        _affirmBtn = new QPushButton(this);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _settingTag->setText(tr("Database Setting"));
    _dbTypeTag->addItem("pgsql");
    _dbIPTag->setPlaceholderText(tr("IP"));
    _dbIPTag->setInputMask("000.000.000.000");
    _dbPortTag->setPlaceholderText(tr("Port"));
    _dbNameTag->setPlaceholderText(tr("DB"));
    _dbUserTag->setPlaceholderText(tr("User"));
    _dbPWDTag->setPlaceholderText(tr("Password"));
    _dbPWDTag->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    _testBtn->setText(tr("Test"));
    _testBtn->setObjectName("test_btn");
    _affirmBtn->setText(tr("Affirm"));
    _affirmBtn->setObjectName("affirm_btn");

    _mainLayout->addWidget(_settingTag, 0, 0, 1, 2, Qt::AlignLeft);
    _mainLayout->addWidget(_dbTypeTag, 1, 0, 1, 2);
    _mainLayout->addWidget(_dbIPTag, 2, 0, 1, 2);
    _mainLayout->addWidget(_dbPortTag, 3, 0, 1, 2);
    _mainLayout->addWidget(_dbNameTag, 4, 0, 1, 2);
    _mainLayout->addWidget(_dbUserTag, 5, 0, 1, 2);
    _mainLayout->addWidget(_dbPWDTag, 6, 0, 1, 2);
    _mainLayout->addWidget(_testBtn, 7, 0, 1, 1, Qt::AlignHCenter);
    _mainLayout->addWidget(_affirmBtn, 7, 1, 1, 1, Qt::AlignHCenter);



    setLayout(_mainLayout);


}
