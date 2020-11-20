#ifndef CAPOT_H
#define CAPOT_H

#include <QObject>
#include <QWidget>
#include <QTimer>
#include "mcculdaq.h"
#define TEMPO_CAPOT

class Capot : public QObject
{
    Q_OBJECT
public:
    Capot(MccUldaq &_laCarte, const int _numDio, const QObject *parent = nullptr);
    void onTimerCapot_timeout();
    QTimer timerCapot;



private:
    bool etatCapot;
    bool etatCourant;
    int numDio;
    MccUldaq & laCarte; // relation d'agrégation

signals:

void EtatCapotChange(bool _etat);

};

#endif // CAPOT_H
