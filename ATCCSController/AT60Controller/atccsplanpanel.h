#ifndef ATCCSPLANPANEL_H
#define ATCCSPLANPANEL_H

#include <QWidget>
class QLabel;
class QGridLayout;
class ATCCSPlanPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ATCCSPlanPanel(QWidget *parent = nullptr);
    void initializeUI();

signals:

public slots:

private:
    QLabel *_planLabel;
    QLabel *_planLogo;
    QLabel *_curPlanLb;
    QLabel *_prevPlanLb;
    QLabel *_valueLabel[3][13];
    QGridLayout *_mainLayout;

};

#endif // ATCCSPLANPANEL_H
