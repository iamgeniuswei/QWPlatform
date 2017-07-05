#ifndef QWTIMELINE_H
#define QWTIMELINE_H

#include <QListWidget>

class QWTimeLine : public QListWidget
{
    Q_OBJECT
public:
    explicit QWTimeLine(QWidget *parent = nullptr);
    void initializeUI();
    void addEndPoint(const QString& text);
    void addIntermediatePoint(const QString& text);

signals:

public slots:
};

#endif // QWTIMELINE_H
