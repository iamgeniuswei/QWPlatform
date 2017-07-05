#ifndef ATCCSDBSETTINGPANEL_H
#define ATCCSDBSETTINGPANEL_H

#include <QWidget>
class QLabel;
class QComboBox;
class QLineEdit;
class QGridLayout;
class QPushButton;
class ATCCSDBSettingPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ATCCSDBSettingPanel(QWidget *parent = nullptr);
    void initializeUI();

signals:

public slots:
private:
    QLabel *_settingTag;
    QComboBox *_dbTypeTag;
    QLineEdit *_dbIPTag;
    QLineEdit *_dbPortTag;
    QLineEdit *_dbNameTag;
    QLineEdit *_dbUserTag;
    QLineEdit *_dbPWDTag;
    QPushButton *_testBtn;
    QPushButton *_affirmBtn;
    QGridLayout *_mainLayout;
};

#endif // ATCCSDBSETTINGPANEL_H
