/********************************************************************************
** Form generated from reading UI file 'applyEdgeDetectionFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYEDGEDETECTIONFILTERDIALOG_H
#define UI_APPLYEDGEDETECTIONFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_edgeDetectionDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *axisLabel;
    QComboBox *axisBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *edgeDetectionDialog)
    {
        if (edgeDetectionDialog->objectName().isEmpty())
            edgeDetectionDialog->setObjectName(QString::fromUtf8("edgeDetectionDialog"));
        edgeDetectionDialog->resize(182, 80);
        gridLayout = new QGridLayout(edgeDetectionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        axisLabel = new QLabel(edgeDetectionDialog);
        axisLabel->setObjectName(QString::fromUtf8("axisLabel"));

        horizontalLayout_2->addWidget(axisLabel);

        axisBox = new QComboBox(edgeDetectionDialog);
        axisBox->addItem(QString());
        axisBox->addItem(QString());
        axisBox->addItem(QString());
        axisBox->setObjectName(QString::fromUtf8("axisBox"));

        horizontalLayout_2->addWidget(axisBox);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(edgeDetectionDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(edgeDetectionDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(edgeDetectionDialog);
        QObject::connect(okButton, SIGNAL(clicked()), edgeDetectionDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), edgeDetectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(edgeDetectionDialog);
    } // setupUi

    void retranslateUi(QDialog *edgeDetectionDialog)
    {
        edgeDetectionDialog->setWindowTitle(QCoreApplication::translate("edgeDetectionDialog", "Apply edge detection", nullptr));
        axisLabel->setText(QCoreApplication::translate("edgeDetectionDialog", "Axis:", nullptr));
        axisBox->setItemText(0, QCoreApplication::translate("edgeDetectionDialog", "X & Y", nullptr));
        axisBox->setItemText(1, QCoreApplication::translate("edgeDetectionDialog", "X", nullptr));
        axisBox->setItemText(2, QCoreApplication::translate("edgeDetectionDialog", "Y", nullptr));

        okButton->setText(QCoreApplication::translate("edgeDetectionDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("edgeDetectionDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edgeDetectionDialog: public Ui_edgeDetectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYEDGEDETECTIONFILTERDIALOG_H
