#include "atccspopuptitle.h"
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <iostream>
ATCCSPopupTitle::ATCCSPopupTitle(QWidget *parent) : QWidget(parent)
{
    setObjectName("atccs_pt");
    setAttribute(Qt::WA_StyledBackground);
    initializeUI();
}

void ATCCSPopupTitle::initializeUI()
{
    try
    {
        _logo = new QLabel(this);
        _titleText = new QLabel(this);
        _closeBtn = new QToolButton(this);
        _mainLayout = new QHBoxLayout(this);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _titleText->setObjectName("atccs_pt_head");
    _closeBtn->setObjectName("atccs_pt_close");
    _mainLayout->setMargin(5);
    _mainLayout->addWidget(_logo,0, Qt::AlignLeft);
    _mainLayout->addWidget(_titleText, 0, Qt::AlignLeft);
    _mainLayout->addStretch();
    _mainLayout->addWidget(_closeBtn, 0, Qt::AlignRight);
    setLayout(_mainLayout);
}

void ATCCSPopupTitle::setLogo(const QString &objectName)
{
    if(_logo)
        _logo->setObjectName(objectName);
}

void ATCCSPopupTitle::setLogo(const QPixmap &pixmap)
{
    if(_logo)
    {
        _logo->setPixmap(pixmap);
    }
}

void ATCCSPopupTitle::setTitleText(const QString &title)
{
    if(_titleText)
        _titleText->setText(title);
}
