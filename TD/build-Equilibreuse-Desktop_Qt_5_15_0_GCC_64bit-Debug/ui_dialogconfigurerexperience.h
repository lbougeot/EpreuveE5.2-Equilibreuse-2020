/********************************************************************************
** Form generated from reading UI file 'dialogconfigurerexperience.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONFIGUREREXPERIENCE_H
#define UI_DIALOGCONFIGUREREXPERIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogConfigurerExperience
{
public:
    QLabel *label;
    QTextEdit *textEditCommentaire;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditLieu;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonValider;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditClasse;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditNometudiant;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditPrenomEtudiant;

    void setupUi(QDialog *DialogConfigurerExperience)
    {
        if (DialogConfigurerExperience->objectName().isEmpty())
            DialogConfigurerExperience->setObjectName(QString::fromUtf8("DialogConfigurerExperience"));
        DialogConfigurerExperience->resize(900, 445);
        label = new QLabel(DialogConfigurerExperience);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 170, 121, 16));
        textEditCommentaire = new QTextEdit(DialogConfigurerExperience);
        textEditCommentaire->setObjectName(QString::fromUtf8("textEditCommentaire"));
        textEditCommentaire->setGeometry(QRect(20, 200, 841, 130));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEditCommentaire->sizePolicy().hasHeightForWidth());
        textEditCommentaire->setSizePolicy(sizePolicy);
        textEditCommentaire->setMaximumSize(QSize(16777215, 130));
        textEditCommentaire->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditCommentaire->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEditCommentaire->setLineWrapMode(QTextEdit::NoWrap);
        layoutWidget_3 = new QWidget(DialogConfigurerExperience);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 100, 391, 30));
        gridLayout_2 = new QGridLayout(layoutWidget_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        dateEdit = new QDateEdit(layoutWidget_3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout_2->addWidget(dateEdit, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(DialogConfigurerExperience);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(420, 150, 441, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEditLieu = new QLineEdit(layoutWidget_4);
        lineEditLieu->setObjectName(QString::fromUtf8("lineEditLieu"));

        horizontalLayout_2->addWidget(lineEditLieu);

        layoutWidget = new QWidget(DialogConfigurerExperience);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(640, 360, 221, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        horizontalLayout->addWidget(pushButtonAnnuler);

        pushButtonValider = new QPushButton(layoutWidget);
        pushButtonValider->setObjectName(QString::fromUtf8("pushButtonValider"));

        horizontalLayout->addWidget(pushButtonValider);

        layoutWidget1 = new QWidget(DialogConfigurerExperience);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(680, 100, 182, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEditClasse = new QLineEdit(layoutWidget1);
        lineEditClasse->setObjectName(QString::fromUtf8("lineEditClasse"));

        horizontalLayout_3->addWidget(lineEditClasse);

        layoutWidget2 = new QWidget(DialogConfigurerExperience);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 30, 831, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEditNometudiant = new QLineEdit(layoutWidget2);
        lineEditNometudiant->setObjectName(QString::fromUtf8("lineEditNometudiant"));

        horizontalLayout_4->addWidget(lineEditNometudiant);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditPrenomEtudiant = new QLineEdit(layoutWidget2);
        lineEditPrenomEtudiant->setObjectName(QString::fromUtf8("lineEditPrenomEtudiant"));

        horizontalLayout_5->addWidget(lineEditPrenomEtudiant);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        retranslateUi(DialogConfigurerExperience);

        QMetaObject::connectSlotsByName(DialogConfigurerExperience);
    } // setupUi

    void retranslateUi(QDialog *DialogConfigurerExperience)
    {
        DialogConfigurerExperience->setWindowTitle(QCoreApplication::translate("DialogConfigurerExperience", "Configuration de l'exp\303\251rience", nullptr));
        label->setText(QCoreApplication::translate("DialogConfigurerExperience", "Commentaire :", nullptr));
        textEditCommentaire->setHtml(QCoreApplication::translate("DialogConfigurerExperience", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Compl\303\251ter le commentaire de l'exp\303\251rience</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogConfigurerExperience", "Date de l'exp\303\251rience :", nullptr));
        label_6->setText(QCoreApplication::translate("DialogConfigurerExperience", "Lieu de l'exp\303\251rience :", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("DialogConfigurerExperience", "Annuler", nullptr));
        pushButtonValider->setText(QCoreApplication::translate("DialogConfigurerExperience", "Valider", nullptr));
        label_5->setText(QCoreApplication::translate("DialogConfigurerExperience", "Classe :", nullptr));
        lineEditClasse->setText(QCoreApplication::translate("DialogConfigurerExperience", "Classe", nullptr));
        label_3->setText(QCoreApplication::translate("DialogConfigurerExperience", "Nom de l'\303\251dutiant :", nullptr));
        lineEditNometudiant->setText(QCoreApplication::translate("DialogConfigurerExperience", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("DialogConfigurerExperience", "Pr\303\251nom de l'\303\251dutiant :", nullptr));
        lineEditPrenomEtudiant->setText(QCoreApplication::translate("DialogConfigurerExperience", "Pr\303\251nom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogConfigurerExperience: public Ui_DialogConfigurerExperience {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONFIGUREREXPERIENCE_H
