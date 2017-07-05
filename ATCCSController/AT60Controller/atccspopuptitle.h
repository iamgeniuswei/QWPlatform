#ifndef ATCCSPOPUPTITLE_H
#define ATCCSPOPUPTITLE_H

#include <QWidget>
class QLabel;
class QToolButton;
class QHBoxLayout;
class ATCCSPopupTitle : public QWidget
{
    Q_OBJECT
public:
    explicit ATCCSPopupTitle(QWidget *parent = nullptr);
    void initializeUI();
    void setLogo(const QString& objectName);
    void setLogo(const QPixmap& pixmap);
    void setTitleText(const QString& title);


signals:

public slots:
private:
    QLabel *_logo;
    QLabel *_titleText;
    QToolButton *_closeBtn;
    QHBoxLayout *_mainLayout;
};

#endif // ATCCSPOPUPTITLE_H
