#ifndef ATCCSSETTINGWINDOW_H
#define ATCCSSETTINGWINDOW_H

#include "QWFramelessWindow.h"
class ATCCSPopupTitle;
class QScrollArea;
class QGridLayout;
class QLabel;
class QLineEdit;
class QFrame;
class ATCCSAboutPanel;
class ATCCSDBSettingPanel;
class ATCCSAddressSettingPanel;
class ATCCSSettingWindow : public QWFramelessWindow
{
    Q_OBJECT
public:
    explicit ATCCSSettingWindow(QWidget *parent = nullptr);
    void initializeUI();

signals:

public slots:

private:
    ATCCSPopupTitle *_title;
    QScrollArea *_contentArea;
    QWidget *_scrollAreaWidget;
    QGridLayout *_scrollAreaLayout;
    ATCCSAboutPanel *_aboutPanel;
    ATCCSDBSettingPanel *_dbSettingPanel;
    ATCCSAddressSettingPanel *_addrSettingPanel[6];
    QFrame *_seperator[6];
    QGridLayout *_mainLayout;

};

#endif // ATCCSSETTINGWINDOW_H
