/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QWMessageBox.cpp
 * Author: lenovo
 * 
 * Created on June 30, 2017, 11:19 AM
 */

#include "QWMessageBox.h"
#include <QLabel>
#include <QDialogButtonBox>
#include <QSpacerItem>
#include <QGridLayout>

QWMessageBox::QWMessageBox()
{
}

QWMessageBox::~QWMessageBox()
{
}

void QWMessageBox::init(const QString &title, const QString &text)
{
    label = new QLabel;
    label->setObjectName(QLatin1String("qt_msgbox_label"));
//    label->setTextInteractionFlags(Qt::TextInteractionFlags(q->style()->styleHint(QStyle::SH_MessageBox_TextInteractionFlags, 0, q)));
    label->setAlignment(Qt::AlignVCenter | Qt::AlignLeft);
    label->setOpenExternalLinks(true);
    iconLabel = new QLabel(this);
    iconLabel->setObjectName(QLatin1String("qt_msgboxex_icon_label"));
    iconLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    buttonBox = new QDialogButtonBox;
    buttonBox->setObjectName(QLatin1String("qt_msgbox_buttonbox"));
//    buttonBox->setCenterButtons(q->style()->styleHint(QStyle::SH_MessageBox_CenterButtons, 0, q));
//    QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)),
//                     this, SLOT(_q_buttonClicked(QAbstractButton*)));
    setupLayout();
//    if (!title.isEmpty() || !text.isEmpty()) {
//        setWindowTitle(title);
//        setText(text);
//    }
//    q->setModal(true);
#ifdef Q_OS_MAC
    QFont f = q->font();
    f.setBold(true);
    label->setFont(f);
#endif
    icon = NoIcon;
}

void QWMessageBox::setupLayout()
{
    delete layout();
    QGridLayout *grid = new QGridLayout;
    bool hasIcon = iconLabel->pixmap() && !iconLabel->pixmap()->isNull();
    
    if (hasIcon)
        grid->addWidget(iconLabel, 0, 0, 2, 1, Qt::AlignTop);
        iconLabel->setVisible(hasIcon);
#ifdef Q_OS_MAC
    QSpacerItem *indentSpacer = new QSpacerItem(14, 1, QSizePolicy::Fixed, QSizePolicy::Fixed);
#else
    QSpacerItem *indentSpacer = new QSpacerItem(hasIcon ? 7 : 15, 1, QSizePolicy::Fixed, QSizePolicy::Fixed);
#endif
}
