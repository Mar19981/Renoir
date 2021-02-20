/********************************************************************************
** Form generated from reading UI file 'noiseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOISEDIALOG_H
#define UI_NOISEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_noiseDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *noiseDialog)
    {
        if (noiseDialog->objectName().isEmpty())
            noiseDialog->setObjectName(QString::fromUtf8("noiseDialog"));
        noiseDialog->resize(182, 84);
        gridLayout = new QGridLayout(noiseDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(noiseDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(noiseDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(noiseDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(noiseDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(noiseDialog);
        QObject::connect(okButton, SIGNAL(clicked()), noiseDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), noiseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(noiseDialog);
    } // setupUi

    void retranslateUi(QDialog *noiseDialog)
    {
        noiseDialog->setWindowTitle(QCoreApplication::translate("noiseDialog", "Generate noise", nullptr));
        label->setText(QCoreApplication::translate("noiseDialog", "Noise type:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("noiseDialog", "Monochromatic", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("noiseDialog", "Color", nullptr));

        okButton->setText(QCoreApplication::translate("noiseDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("noiseDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class noiseDialog: public Ui_noiseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOISEDIALOG_H
