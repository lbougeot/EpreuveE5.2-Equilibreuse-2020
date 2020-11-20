#ifndef WIDGETUSB202_H
#define WIDGETUSB202_H

#include <QWidget>
#include "mcculdaq.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetUSB202; }
QT_END_NAMESPACE

class WidgetUSB202 : public QWidget
{
    Q_OBJECT

public:
    WidgetUSB202(QWidget *parent = nullptr);
    ~WidgetUSB202();

private slots:

    void on_checkBox_DIO0_stateChanged(int arg1);

    void on_checkBox_DIO1_stateChanged(int arg1);

    void on_checkBox_DIO2_stateChanged(int arg1);

    void on_checkBox_DIO3_stateChanged(int arg1);

    void on_checkBox_DIO4_stateChanged(int arg1);

    void on_checkBox_DIO5_stateChanged(int arg1);

    void on_checkBox_DIO6_stateChanged(int arg1);

    void on_checkBox_DIO7_stateChanged(int arg1);

private:
    Ui::WidgetUSB202 *ui;
    MccUldaq laCarte;

};
#endif // WIDGETUSB202_H
