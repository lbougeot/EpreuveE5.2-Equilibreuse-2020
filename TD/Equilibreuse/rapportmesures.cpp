#include "rapportmesures.h"
#include "experience.h"


RapportMesures::RapportMesures(Experience &_experience, QChartView &_graphique, QString const &_nomDuFichier) :
QPdfWriter(_nomDuFichier),
experience(_experience),
graphique(_graphique)
{
  setPageSize(QPageSize(QPageSize::A4));
  setPageOrientation(QPageLayout::Portrait);
  setPageMargins(QMargins(10, 10, 10, 10));
  setResolution(150);

  largeurPdf = width();
  hauteurPdf = height();
  padding = resolution()/10;
  margeGauche = largeurPdf / 5;
  margeHaut = margeHaut / 2.5;

  qDebug() << largeurPdf;
  qDebug() << hauteurPdf;
  //setFont(fontTitre);
}

void RapportMesures::ConstruireRapport()
{

}

void RapportMesures::FabriquerEntete()
{

}

void RapportMesures::FabriquerResultats()
{
    /*
    QString texteVitesse("Vitesse de l'expérience : ");
        texteVitesse += QString::number(experience.ObtenirVitesse()) + " trs/min";
        painter.setFont(fontTitre);
        painter.drawText(margeGauche,position,texteVitesse);
        int hauteurResultats = hauteurPdf * 0.15;
        QRect cellule(margeGauche,margeHaut,largeurUtile/5,hauteurResultats/3);
        cellule.moveTop(position+padding);
        int largeurCellule = cellule.width();
        int hauteurCellule = cellule.height();
        QStringList enteteTableau;
        enteteTableau << QString(" ") << QString("Effort Maxi") << QString("Déphasage");
        enteteTableau << QString("Effort à 0°") << QString("Effort à 90°");
        double resultats[2][4];
        resultats[0][0] = experience.RechercherEffortMax('A').y();
        resultats[0][1] = experience.RechercherEffortMax('A').x();
        resultats[0][2] = experience.RechercherEffortAzero('A');
        resultats[0][3] = experience.RechercherEffortAquatreVingtDix('A');
        resultats[1][0] = experience.RechercherEffortMax('O').y();
        resultats[1][1] = experience.RechercherEffortMax('O').x();
        resultats[1][2] = experience.RechercherEffortAzero('O');
        resultats[1][3] = experience.RechercherEffortAquatreVingtDix('O');
        for(int ligne = 0; ligne < 3 ; ligne++)
        {
            for(int colonne = 0 ; colonne < 5; colonne++)
            {
                painter.setPen(QPen(Qt::black));
                painter.drawRect(cellule);
                if(ligne==0)
                {
                   // Titre du tableau
                }
                else
                {
                    painter.setFont(fontTexte);
                    if(colonne != 0)
                    {
                        // contenu des cellules
                    }
                    else
                    {
                        painter.setFont(fontTitre);
                        if(ligne==1)
                        {
                            painter.setPen(QPen(COULEUR_PALIER_A));
                            // Titre pour le Palier A
                        }
                        else
                        {
                           painter.setPen(QPen(COULEUR_PALIER_O));
                           // Titre pour le Palier O
                        }
                    }

                }
                cellule.translate(largeurCellule,0);
            }
            cellule.translate(-5*largeurCellule,hauteurCellule);
        }
        */
}

void RapportMesures::FabriquerGraphique()
{

}

void RapportMesures::FabriquerCommentaire()
{
    int hauteurCommentaire = hauteurPdf * 0.15;

        // à compléter
}
