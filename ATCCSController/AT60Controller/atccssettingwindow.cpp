#include "atccssettingwindow.h"
#include <QScrollArea>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QFrame>
#include "atccspopuptitle.h"
#include <iostream>
#include <array>
#include "atccsaboutpanel.h"
#include "atccsdbsettingpanel.h"
#include "atccsaddresssettingpanel.h"
ATCCSSettingWindow::ATCCSSettingWindow(QWidget *parent) : QWFramelessWindow(parent)
{
    setObjectName("atccs_setting_window");
    setAttribute(Qt::WA_StyledBackground);
    setMinimumSize(800,600);
    initializeUI();
}

void ATCCSSettingWindow::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _title = new ATCCSPopupTitle(this);
        _contentArea = new QScrollArea(this);
        _contentArea->setAttribute(Qt::WA_StyledBackground);
        _scrollAreaWidget = new QWidget(_contentArea);
        _scrollAreaWidget->setStyleSheet("background-color:white;");
        _scrollAreaLayout = new QGridLayout(_scrollAreaWidget);
        _aboutPanel = new ATCCSAboutPanel(this);
        _dbSettingPanel = new ATCCSDBSettingPanel(this);
        for(int i=0; i<6; i++)
        {
            _seperator[i] = new QFrame(this);
            _seperator[i]->setFrameShape(QFrame::HLine);
            _seperator[i]->setFrameShadow(QFrame::Sunken);
            _addrSettingPanel[i] = new ATCCSAddressSettingPanel(this);
        }

    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _scrollAreaLayout->setMargin(10);
    _scrollAreaLayout->addWidget(_aboutPanel, 0, 0, 1, 1, Qt::AlignTop);
//    _scrollAreaLayout->addWidget(_seperator[0], 1, 0, 1, 1, Qt::AlignTop);
    _scrollAreaLayout->addWidget(_dbSettingPanel, 2, 0, 1, 1, Qt::AlignTop);
//    _scrollAreaLayout->addWidget(_seperator[1], 3, 0, 1, 1, Qt::AlignTop);

    std::array<QString, 6> deviceName= {tr("HOST"),
                              tr("Gimbal"),
                              tr("CCD"),
                              tr("Filter"),
                              tr("Focus"),
                              tr("Dome")};
    for(int i=0; i<6; i++)
    {
        _addrSettingPanel[i]->setDeviceName(deviceName[i]);
        _scrollAreaLayout->addWidget(_addrSettingPanel[i], 4+i*2, 0, 1, 1, Qt::AlignTop );
        _scrollAreaLayout->addWidget(_seperator[i], 5+i*2, 0, 1, 1, Qt::AlignTop);
    }


    _contentArea->setWidgetResizable(true);
    _scrollAreaWidget->setLayout(_scrollAreaLayout);
    _contentArea->setWidget(_scrollAreaWidget);





    _mainLayout->setContentsMargins(0, 0, 0, 0);
    _title->setLogo("atccs_setting_logo");
    _title->setTitleText(tr("Setting"));
    _mainLayout->addWidget(_title, 0, 0, 1, 3, Qt::AlignTop);
    _mainLayout->addWidget(_contentArea, 1, 1, 1, 1);
    setLayout(_mainLayout);
}
