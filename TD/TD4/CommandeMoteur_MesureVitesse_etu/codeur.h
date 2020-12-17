#ifndef CODEUR_H
#define CODEUR_H
#include <QTimer>
#include <QObject>
#include "mcculdaq.h"

class Codeur : public QObject
{
    Q_OBJECT
public:
    int vitesse;
    explicit Codeur(MccUldaq &_laCarte,const QObject *parent);
    ~Codeur();
    void onTimerVitesse_timeout();
    void LancerMesureVitesse();
    void ArreterMesureVitesse();

signals:
    void VitesseChange(int _vitesse);

private:
    QTimer *timerVitesse; // relation de composition
    MccUldaq &laCarte; // relation d'agrégation

};

#endif // CODEUR_H
