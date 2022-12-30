#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QColor>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_colorPushButton_clicked();


    void on_wordPushButton_clicked();

private:
    Ui::Widget *ui;

    QColor color;
    int isBolded=0;
};
#endif // WIDGET_H
