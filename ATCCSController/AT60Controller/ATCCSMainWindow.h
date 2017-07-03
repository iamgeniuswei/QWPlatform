/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATCCSMainWindow.h
 * Author: lenovo
 *
 * Created on June 30, 2017, 10:56 PM
 */

#ifndef ATCCSMAINWINDOW_H
#define ATCCSMAINWINDOW_H
#include "QWFramelessWindow.h"
#include "ATCCSDevicePanel.h"
class QGridLayout;
class QHBoxLayout;
class ATCCSMainTitle;
class ATCCSDevicePanel;
class ATCCSPlanPanel;
class ATCCSMainWindow : public QWFramelessWindow
{
    Q_OBJECT
public:
    ATCCSMainWindow(QWidget *parent = 0);
    ATCCSMainWindow(const ATCCSMainWindow& orig) = delete;
    ATCCSMainWindow(const ATCCSMainWindow&& orig) = delete;
    ATCCSMainWindow& operator=(const ATCCSMainWindow& orig) = delete;
    ATCCSMainWindow& operator=(const ATCCSMainWindow&& orig) = delete;
    virtual ~ATCCSMainWindow();
    void initializeUI();

protected:

private:
    QGridLayout *_mainLayout;
    ATCCSMainTitle *_mainTitle;
    ATCCSPlanPanel *_planPanel;
    ATCCSDevicePanel *_gimbalPanel;
    ATCCSDevicePanel *_ccdPanel;
    ATCCSDevicePanel *_filterPanel;
    ATCCSDevicePanel *_focusPanel;
    ATCCSDevicePanel *_domePanel;


};

#endif /* ATCCSMAINWINDOW_H */

