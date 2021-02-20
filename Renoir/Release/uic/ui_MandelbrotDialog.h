/********************************************************************************
** Form generated from reading UI file 'MandelbrotDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANDELBROTDIALOG_H
#define UI_MANDELBROTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MandelbrotDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *iterationsLabel;
    QSpinBox *iterationsSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *scale;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *MandelbrotDialog)
    {
        if (MandelbrotDialog->objectName().isEmpty())
            MandelbrotDialog->setObjectName(QString::fromUtf8("MandelbrotDialog"));
        MandelbrotDialog->resize(279, 109);
        gridLayout = new QGridLayout(MandelbrotDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iterationsLabel = new QLabel(MandelbrotDialog);
        iterationsLabel->setObjectName(QString::fromUtf8("iterationsLabel"));

        horizontalLayout->addWidget(iterationsLabel);

        iterationsSpin = new QSpinBox(MandelbrotDialog);
        iterationsSpin->setObjectName(QString::fromUtf8("iterationsSpin"));
        iterationsSpin->setMinimum(1);
        iterationsSpin->setMaximum(1000);

        horizontalLayout->addWidget(iterationsSpin);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(MandelbrotDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        scale = new QDoubleSpinBox(MandelbrotDialog);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMinimum(0.010000000000000);
        scale->setSingleStep(0.010000000000000);

        horizontalLayout_3->addWidget(scale);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_3);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(MandelbrotDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(MandelbrotDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(MandelbrotDialog);
        QObject::connect(okButton, SIGNAL(clicked()), MandelbrotDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), MandelbrotDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MandelbrotDialog);
    } // setupUi

    void retranslateUi(QDialog *MandelbrotDialog)
    {
        MandelbrotDialog->setWindowTitle(QCoreApplication::translate("MandelbrotDialog", "Generate Mandelbrot set", nullptr));
        iterationsLabel->setText(QCoreApplication::translate("MandelbrotDialog", "Iterations:", nullptr));
        label->setText(QCoreApplication::translate("MandelbrotDialog", "Scale:", nullptr));
        okButton->setText(QCoreApplication::translate("MandelbrotDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("MandelbrotDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MandelbrotDialog: public Ui_MandelbrotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANDELBROTDIALOG_H
