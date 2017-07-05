#ifndef ATCCSABOUTPANEL_H
#define ATCCSABOUTPANEL_H

#include <QWidget>
class QLabel;
class QGridLayout;
class ATCCSAboutPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ATCCSAboutPanel(QWidget *parent = nullptr);
    void initializeUI();
signals:

public slots:
private:
    QLabel *_logoTag;
    QLabel *_titleTag;
    QLabel *_versionTag;
    QGridLayout *_mainLayout;
};

#endif // ATCCSABOUTPANEL_H
