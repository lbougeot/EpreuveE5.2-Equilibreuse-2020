#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include <QMainWindow>
#include "mcculdaq.h"
#include "capot.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();
    void onCapot_EtatCapotChange(bool etatCapot);

private:
    Ui::Equilibreuse *ui;
    MccUldaq laCarte;
    Capot *leCapot;




};
#endif // EQUILIBREUSE_H
