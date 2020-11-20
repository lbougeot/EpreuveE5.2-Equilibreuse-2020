#include "capot.h"

/*
Capot::Capot(QObject *parent) : QObject(parent)
{

}
*/

Capot::Capot(MccUldaq &_laCarte, const int _numDio, const QObject *parent) :
    laCarte(_laCarte), // initialisation de la relation d'agrégation
    numDio(_numDio)
{
    laCarte.ulDConfigBit(numDio,DD_INPUT);
    laCarte.ulDBitIn(numDio,etatCapot);
    connect(&timerCapot,&QTimer::timeout,this,&Capot::onTimerCapot_timeout);
    timerCapot.start(TEMPO_CAPOT);
    laCarte.ulDBitIn(numDio,etatCourant);
}

void Capot::onTimerCapot_timeout()
{
    laCarte.ulDBitIn(numDio,etatCapot);
    if (etatCapot != etatCourant)
    {
        emit EtatCapotChange(etatCourant);
    }

}
