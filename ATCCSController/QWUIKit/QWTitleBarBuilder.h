/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QWTitleBarBuilder.h
 * Author: lenovo
 *
 * Created on June 29, 2017, 11:39 AM
 */

#ifndef QWTITLEBARBUILDER_H
#define QWTITLEBARBUILDER_H

#include "QWTitleBar.h"


class QWTitleBarBuilder
{
public:
    QWTitleBarBuilder();
    QWTitleBarBuilder(const QWTitleBarBuilder& orig) = delete;
    QWTitleBarBuilder(const QWTitleBarBuilder&& orig) = delete;
    QWTitleBarBuilder& operator=(const QWTitleBarBuilder& orig) = delete;
    QWTitleBarBuilder& operator=(const QWTitleBarBuilder&& orig) = delete;
    virtual ~QWTitleBarBuilder();
    virtual QWTitleBar* titleBar()
    {
        return nullptr;
    }
    
protected:
    virtual void buildLogo(){}
    virtual void buildMainHead(){}
    virtual void buildSubHead(){}
    virtual void buiidSystemButton(){}
    virtual void buildCustomField(){}
    

};

#endif /* QWTITLEBARBUILDER_H */

