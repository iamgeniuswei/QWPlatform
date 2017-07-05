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
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<14; j++)
            {
                _valueLabel[i][j] = new QLabel(this);
            }
        }
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    _mainLayout->setContentsMargins(5, 5, 5, 5);
    _planLabel->setText(tr("Plan"));
    _planLabel->setObjectName("atccs_pp_label");
    _planLogo->setObjectName("atccs_pp_logo");
    std::array<QString, 14> _valueTag{tr("User"),
                                     tr("Project"),
                                     tr("Target"),
                                     tr("Type"),
                                     tr("RightAscension"),
                                     tr("Declination"),
                                     tr("Epoch"),
                                     tr("ExposureTime"),
                                     tr("DelayTime"),
                                     tr("ExposureCount"),
                                     tr("Filter"),
                                     tr("Gain"),
                                     tr("BIN"),
                                     tr("ReadMode")};
    _curPlanLb->setText(tr("CurPlan:"));
    _curPlanLb->setObjectName("atccs_pp_value");
    _prevPlanLb->setText(tr("PrevPlan:"));
    _prevPlanLb->setObjectName("atccs_pp_value");
    _mainLayout->addWidget(_planLogo, 0, 0, 1, 8, Qt::AlignRight);
    _mainLayout->addWidget(_planLabel, 0, 8, 1, 8, Qt::AlignLeft);
    for(int j=0; j<14; j++)
    {
        _valueLabel[0][j]->setText(_valueTag[j]);
        _valueLabel[0][j]->setObjectName("atccs_pp_value");
        _mainLayout->addWidget(_valueLabel[0][j],1,1+j,1,1,Qt::AlignHCenter);
    }




    _mainLayout->addWidget(_curPlanLb, 2, 0, 1, 1, Qt::AlignLeft);
    _mainLayout->addWidget(_prevPlanLb, 3, 0, 1, 1, Qt::AlignLeft);
    setLayout(_mainLayout);

}
