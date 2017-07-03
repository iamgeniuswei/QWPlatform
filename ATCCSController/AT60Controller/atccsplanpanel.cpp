#include "atccsplanpanel.h"
#include <QGridLayout>
#include <QLabel>
#include <iostream>
ATCCSPlanPanel::ATCCSPlanPanel(QWidget *parent) : QWidget(parent)
{
    setObjectName("atccs_pp");
    setAttribute(Qt::WA_StyledBackground);
    initializeUI();

}

void ATCCSPlanPanel::initializeUI()
{
    try
    {
        _mainLayout = new QGridLayout(this);
        _planLabel = new QLabel(this);
        _planLogo = new QLabel(this);
        _curPlanLb = new QLabel(this);
        _prevPlanLb = new QLabel(this);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _mainLayout->setContentsMargins(5, 5, 5, 5);
    _planLabel->setText(tr("Plan"));
    _planLabel->setObjectName("atccs_pp_label");
    _planLogo->setObjectName("atccs_pp_logo");
    _curPlanLb->setText(tr("CurPlan:"));
    _prevPlanLb->setText(tr("PrevPlan:"));
    _mainLayout->addWidget(_planLogo, 0, 0, 1, 1, Qt::AlignRight);
    _mainLayout->addWidget(_planLabel, 0, 1, 1, 1, Qt::AlignLeft);
    _mainLayout->addWidget(_curPlanLb, 1, 0, 1, 1, Qt::AlignLeft);
    _mainLayout->addWidget(_prevPlanLb, 2, 0, 1, 1, Qt::AlignLeft);
    setLayout(_mainLayout);

}
