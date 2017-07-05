#ifndef ATCCSADDRESSSETTINGPANEL_H
#define ATCCSADDRESSSETTINGPANEL_H

#include <QWidget>
class QLabel;
class QLineEdit;
class QGridLayout;
class QPushButton;
class ATCCSAddressSettingPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ATCCSAddressSettingPanel(QWidget *parent = nullptr);
    void initializeUI();
    void setDeviceName(const QString& name);
signals:

public slots:

private:
    QLabel *_deviceTag;
    QLineEdit *_ipTag;
    QLineEdit *_portTag;
    QPushButton *_affirmBtn;
    QGridLayout *_mainLayout;

};

#endif // ATCCSADDRESSSETTINGPANEL_H
