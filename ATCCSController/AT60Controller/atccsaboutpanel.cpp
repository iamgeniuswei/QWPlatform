#include "atccsaboutpanel.h"
#include <QLabel>
#include <QGridLayout>
#include <iostream>
ATCCSAboutPanel::ATCCSAboutPanel(QWidget *parent) : QWidget(parent)
{
    initializeUI();
    setWindowOpacity(0.9);
//    setStyleSheet("background-color:white;");
}

void ATCCSAboutPanel::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _mainLayout->setMargin(10);
        _logoTag = new QLabel(this);
        _titleTag = new QLabel(this);
        _versionTag = new QLabel(this);

    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _logoTag->setObjectName("atccs_about_logo");
    _titleTag->setObjectName("atccs_about_title");
    _versionTag->setObjectName("atccs_about_version");
    _mainLayout->addWidget(_logoTag, 0, 0, 1, 1, Qt::AlignLeft);
    _mainLayout->addWidget(_titleTag, 0, 1, 1, 1, Qt::AlignLeft);
    _mainLayout->addWidget(_versionTag, 1, 0, 1, 2, Qt::AlignLeft);
    setLayout(_mainLayout);
}
