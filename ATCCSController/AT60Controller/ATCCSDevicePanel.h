/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATCCSDevicePanel.h
 * Author: lenovo
 *
 * Created on June 30, 2017, 11:13 PM
 */

#ifndef ATCCSDEVICEPANEL_H
#define ATCCSDEVICEPANEL_H
#include <QWidget>
class QLabel;
class QGridLayout;
class ATCCSDevicePanel : public QWidget
{
    Q_OBJECT
public:
    ATCCSDevicePanel(QWidget *parent = 0);
    ATCCSDevicePanel(const ATCCSDevicePanel& orig) = delete;
    ATCCSDevicePanel(const ATCCSDevicePanel&& orig) = delete;
    ATCCSDevicePanel& operator=(const ATCCSDevicePanel& orig) = delete;
    ATCCSDevicePanel& operator=(const ATCCSDevicePanel&& orig) = delete;
    virtual ~ATCCSDevicePanel();
    void initializeUI();
    void setLogoObjectName(const QString& objectName);
    void setDeviceName(const QString& name);

protected:

private:
    QGridLayout *_mainLayout;
    QLabel *_deviceLogo;
    QLabel *_deviceName;
    QLabel *_curStatusLabel;
    QLabel *_curStatusValue;
    QLabel *_lastStatusLabel;
    QLabel *_lastStatusValue;
    QLabel *_errorLabel;
    QLabel *_errorValue;
    QLabel *_warningLabel;
    QLabel *_warningValue;

};

#endif /* ATCCSDEVICEPANEL_H */

