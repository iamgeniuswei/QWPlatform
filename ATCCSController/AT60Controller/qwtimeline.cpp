#include "qwtimeline.h"
#include "qwtimelinewidget.h"
QWTimeLine::QWTimeLine(QWidget *parent) : QListWidget(parent)
{

}

void QWTimeLine::initializeUI()
{

}

void QWTimeLine::addEndPoint(const QString &text)
{
    QWTimeLineWidget *w = nullptr;
    QListWidgetItem *item = nullptr;
    try
    {
        w = new QWTimeLineWidget(this);
        item = new QListWidgetItem(this);
    }
    catch(std::exception &e)
    {
        return;
    }
    item->setSizeHint(QSize(200, 48));
    w->setText(text);
    w->setIcon("atccs_timeline_dot_normal");
    setItemWidget(item, w);

}

void QWTimeLine::addIntermediatePoint(const QString &text)
{

}
