#include "qwtimelinewidget.h"
#include <QLabel>
#include <QHBoxLayout>
#include <iostream>
QWTimeLineWidget::QWTimeLineWidget(QWidget *parent) : QWidget(parent)
{
    initializeUI();
}

void QWTimeLineWidget::initializeUI()
{
    try
    {
        _mainLayout = new QHBoxLayout(this);
        _mainLayout->setMargin(0);
        _textTag = new QLabel(this);
        _iconTag = new QLabel(this);

    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _mainLayout->addStretch(1);
    _mainLayout->addWidget(_textTag, 0, Qt::AlignRight);
    _mainLayout->addWidget(_iconTag, 0, Qt::AlignRight);
    _mainLayout->addSpacing(48);
    setLayout(_mainLayout);

}

void QWTimeLineWidget::setText(const QString &text)
{
    if(_textTag)
        _textTag->setText(text);
}

void QWTimeLineWidget::setIcon(const QString &objectName)
{
    if(_iconTag)
        _iconTag->setObjectName(objectName);
}
