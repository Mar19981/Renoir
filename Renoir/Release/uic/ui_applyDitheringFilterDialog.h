/********************************************************************************
** Form generated from reading UI file 'applyDitheringFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYDITHERINGFILTERDIALOG_H
#define UI_APPLYDITHERINGFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ditheringDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *resolutionLabel;
    QSpinBox *resolutionSpin;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *colorLabel;
    QCheckBox *redCheck;
    QCheckBox *greenCheck;
    QCheckBox *blueCheck;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ditheringDialog)
    {
        if (ditheringDialog->objectName().isEmpty())
            ditheringDialog->setObjectName(QString::fromUtf8("ditheringDialog"));
        ditheringDialog->resize(313, 133);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ditheringDialog->sizePolicy().hasHeightForWidth());
        ditheringDialog->setSizePolicy(sizePolicy);
        ditheringDialog->setContextMenuPolicy(Qt::NoContextMenu);
        ditheringDialog->setAutoFillBackground(false);
        ditheringDialog->setSizeGripEnabled(false);
        ditheringDialog->setModal(false);
        gridLayout = new QGridLayout(ditheringDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        resolutionLabel = new QLabel(ditheringDialog);
        resolutionLabel->setObjectName(QString::fromUtf8("resolutionLabel"));

        horizontalLayout_2->addWidget(resolutionLabel);

        resolutionSpin = new QSpinBox(ditheringDialog);
        resolutionSpin->setObjectName(QString::fromUtf8("resolutionSpin"));
        resolutionSpin->setMinimum(1);
        resolutionSpin->setMaximum(15);

        horizontalLayout_2->addWidget(resolutionSpin);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ditheringDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(ditheringDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        colorLabel = new QLabel(ditheringDialog);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

        horizontalLayout_3->addWidget(colorLabel);

        redCheck = new QCheckBox(ditheringDialog);
        redCheck->setObjectName(QString::fromUtf8("redCheck"));
        redCheck->setEnabled(false);
        redCheck->setChecked(true);

        horizontalLayout_3->addWidget(redCheck);

        greenCheck = new QCheckBox(ditheringDialog);
        greenCheck->setObjectName(QString::fromUtf8("greenCheck"));
        greenCheck->setEnabled(false);
        greenCheck->setChecked(true);

        horizontalLayout_3->addWidget(greenCheck);

        blueCheck = new QCheckBox(ditheringDialog);
        blueCheck->setObjectName(QString::fromUtf8("blueCheck"));
        blueCheck->setEnabled(false);
        blueCheck->setChecked(true);

        horizontalLayout_3->addWidget(blueCheck);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(ditheringDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ditheringDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);


        retranslateUi(ditheringDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ditheringDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ditheringDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ditheringDialog);
    } // setupUi

    void retranslateUi(QDialog *ditheringDialog)
    {
        ditheringDialog->setWindowTitle(QCoreApplication::translate("ditheringDialog", "Apply dithering", nullptr));
        resolutionLabel->setText(QCoreApplication::translate("ditheringDialog", "Resolution:", nullptr));
        label->setText(QCoreApplication::translate("ditheringDialog", "Mode:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ditheringDialog", "RGB", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ditheringDialog", "Grayscale", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ditheringDialog", "Color channels", nullptr));

        colorLabel->setText(QCoreApplication::translate("ditheringDialog", "Color channels:", nullptr));
        redCheck->setText(QCoreApplication::translate("ditheringDialog", "Red", nullptr));
        greenCheck->setText(QCoreApplication::translate("ditheringDialog", "Green", nullptr));
        blueCheck->setText(QCoreApplication::translate("ditheringDialog", "Blue", nullptr));
        okButton->setText(QCoreApplication::translate("ditheringDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("ditheringDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ditheringDialog: public Ui_ditheringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYDITHERINGFILTERDIALOG_H
