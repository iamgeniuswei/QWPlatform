/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QWMessageBox.h
 * Author: lenovo
 *
 * Created on June 30, 2017, 11:19 AM
 */

#ifndef QWMESSAGEBOX_H
#define QWMESSAGEBOX_H
#include <QDialog>

#include "QWPopupWindowTitleBar.h"
class QWPopupWindowTitleBar;
class QLabel;
class QDialogButtonBox;
class QCheckBox;
class QAbstractButton;
class QWMessageBox : public QDialog
{
public:
        enum Icon {
        // keep this in sync with QMessageDialogOptions::Icon
        NoIcon = 0,
        Information = 1,
        Warning = 2,
        Critical = 3,
        Question = 4
    };
public:
    QWMessageBox();
    QWMessageBox(const QWMessageBox& orig) = delete;
    QWMessageBox(const QWMessageBox&& orig) = delete;
    QWMessageBox& operator=(const QWMessageBox& orig) = delete;
    QWMessageBox& operator=(const QWMessageBox&& orig) = delete;
    virtual ~QWMessageBox();
    void initializeUI();
    void init(const QString &title, const QString &text);
    void setupLayout();
protected:

private:
    QWPopupWindowTitleBar *_titleBar;
    QLabel *label;
    Icon icon;
    QLabel *iconLabel;
    QDialogButtonBox *buttonBox;
    QList<QAbstractButton *> customButtonList;
    QAbstractButton *escapeButton;
    QPushButton *defaultButton;
    QCheckBox *checkbox;
    QAbstractButton *clickedButton;
//    DetailButton *detailsButton;
#ifndef QT_NO_TEXTEDIT
//    QMessageBoxDetailsText *detailsText;
#endif
    bool compatMode;
    bool autoAddOkButton;
    QAbstractButton *detectedEscapeButton;
    QLabel *informativeLabel;
    QPointer<QObject> receiverToDisconnectOnClose;
    QByteArray memberToDisconnectOnClose;
    QByteArray signalToDisconnectOnClose;
    
    

};

#endif /* QWMESSAGEBOX_H */

