#ifndef RAPPORTMESURES_H
#define RAPPORTMESURES_H
#include <QPdfWriter>
#include <QtCharts>
#include "experience.h"
#include <QPainter>
#include <QChartView>


class RapportMesures : public QPdfWriter
{
public:
    RapportMesures(Experience &_experience,QChartView &_graphique,QString const &_nomDuFichier);
    void ConstruireRapport();
    void FabriquerEntete();
    void FabriquerResultats();
    void FabriquerGraphique();
    void FabriquerCommentaire();



private:
    int largeurPdf;
    int hauteurPdf;
    int margeGauche;
    int margeHaut;
    int largeurUtile;
    int padding;
    QFont fontTitre;
    QFont fontTexte;
    Experience &experience;
    QPainter painter;
    QChartView &graphique;


};

#endif // RAPPORTMESURES_H
