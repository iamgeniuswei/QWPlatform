/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ATCCSMainTitle.h
 * Author: lenovo
 *
 * Created on June 30, 2017, 4:54 PM
 */

#ifndef ATCCSMAINTITLE_H
#define ATCCSMAINTITLE_H
#include <QWidget>
class QLabel;
class QToolButton;
class QGridLayout;
class ATCCSMainTitle : public QWidget
{
    Q_OBJECT
public:
    ATCCSMainTitle(QWidget *parent = 0);
    ATCCSMainTitle(const ATCCSMainTitle& orig) = delete;
    ATCCSMainTitle(const ATCCSMainTitle&& orig) = delete;
    ATCCSMainTitle& operator=(const ATCCSMainTitle& orig) = delete;
    ATCCSMainTitle& operator=(const ATCCSMainTitle&& orig) = delete;
    virtual ~ATCCSMainTitle();
    void initializeUI();
    void initializeSignal();

signals:
    void settingBtnClicked();
    void closeBtnClicked();

public slots:

protected:

private:
    QLabel *_logoLabel;
    QLabel *_mainHeadLabel;
    QLabel *_subHeadLabel;
    QToolButton *_closeBtn;
    QToolButton *_settingBtn;
    QGridLayout *_mainLayout;
};

#endif /* ATCCSMAINTITLE_H */

