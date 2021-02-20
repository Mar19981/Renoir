/********************************************************************************
** Form generated from reading UI file 'JuliaDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JULIADIALOG_H
#define UI_JULIADIALOG_H

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

class Ui_JuliaDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *iterationsLabel;
    QSpinBox *iterationsSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *scale;
    QHBoxLayout *horizontalLayout_4;
    QLabel *complexLabel;
    QDoubleSpinBox *realSpin;
    QLabel *plus;
    QDoubleSpinBox *complexSpin;
    QLabel *i;

    void setupUi(QDialog *JuliaDialog)
    {
        if (JuliaDialog->objectName().isEmpty())
            JuliaDialog->setObjectName(QString::fromUtf8("JuliaDialog"));
        JuliaDialog->resize(306, 134);
        gridLayout = new QGridLayout(JuliaDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(JuliaDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(JuliaDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iterationsLabel = new QLabel(JuliaDialog);
        iterationsLabel->setObjectName(QString::fromUtf8("iterationsLabel"));

        horizontalLayout->addWidget(iterationsLabel);

        iterationsSpin = new QSpinBox(JuliaDialog);
        iterationsSpin->setObjectName(QString::fromUtf8("iterationsSpin"));
        iterationsSpin->setMinimum(1);
        iterationsSpin->setMaximum(1000);

        horizontalLayout->addWidget(iterationsSpin);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(JuliaDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        scale = new QDoubleSpinBox(JuliaDialog);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMinimum(0.010000000000000);
        scale->setSingleStep(0.010000000000000);

        horizontalLayout_3->addWidget(scale);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        complexLabel = new QLabel(JuliaDialog);
        complexLabel->setObjectName(QString::fromUtf8("complexLabel"));

        horizontalLayout_4->addWidget(complexLabel);

        realSpin = new QDoubleSpinBox(JuliaDialog);
        realSpin->setObjectName(QString::fromUtf8("realSpin"));
        realSpin->setDecimals(4);
        realSpin->setMinimum(-999.990000000000009);
        realSpin->setMaximum(999.990000000000009);
        realSpin->setSingleStep(0.100000000000000);

        horizontalLayout_4->addWidget(realSpin);

        plus = new QLabel(JuliaDialog);
        plus->setObjectName(QString::fromUtf8("plus"));

        horizontalLayout_4->addWidget(plus);

        complexSpin = new QDoubleSpinBox(JuliaDialog);
        complexSpin->setObjectName(QString::fromUtf8("complexSpin"));
        complexSpin->setDecimals(4);
        complexSpin->setMinimum(-999.990000000000009);
        complexSpin->setMaximum(999.990000000000009);
        complexSpin->setSingleStep(0.100000000000000);

        horizontalLayout_4->addWidget(complexSpin);

        i = new QLabel(JuliaDialog);
        i->setObjectName(QString::fromUtf8("i"));

        horizontalLayout_4->addWidget(i);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_4);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(JuliaDialog);
        QObject::connect(okButton, SIGNAL(clicked()), JuliaDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), JuliaDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(JuliaDialog);
    } // setupUi

    void retranslateUi(QDialog *JuliaDialog)
    {
        JuliaDialog->setWindowTitle(QCoreApplication::translate("JuliaDialog", "Generate Julia set", nullptr));
        okButton->setText(QCoreApplication::translate("JuliaDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("JuliaDialog", "Cancel", nullptr));
        iterationsLabel->setText(QCoreApplication::translate("JuliaDialog", "Iterations:", nullptr));
        label->setText(QCoreApplication::translate("JuliaDialog", "Scale:", nullptr));
        complexLabel->setText(QCoreApplication::translate("JuliaDialog", "Complex parameter:", nullptr));
        plus->setText(QCoreApplication::translate("JuliaDialog", "+", nullptr));
        i->setText(QCoreApplication::translate("JuliaDialog", "i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JuliaDialog: public Ui_JuliaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JULIADIALOG_H
