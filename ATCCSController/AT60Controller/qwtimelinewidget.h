#ifndef QWTIMELINEWIDGET_H
#define QWTIMELINEWIDGET_H

#include <QWidget>
class QLabel;
class QHBoxLayout;
class QWTimeLineWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QWTimeLineWidget(QWidget *parent = nullptr);
    void initializeUI();
    void setText(const QString& text);
    void setIcon(const QString& objectName);

signals:

public slots:

private:
    QLabel *_textTag;
    QLabel *_iconTag;
    QHBoxLayout *_mainLayout;
};

#endif // QWTIMELINEWIDGET_H
