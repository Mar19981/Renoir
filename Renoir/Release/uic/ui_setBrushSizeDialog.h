/********************************************************************************
** Form generated from reading UI file 'setBrushSizeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETBRUSHSIZEDIALOG_H
#define UI_SETBRUSHSIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_brushSizeDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *sizeLabel;
    QSpinBox *sizeSpin;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *brushSizeDialog)
    {
        if (brushSizeDialog->objectName().isEmpty())
            brushSizeDialog->setObjectName(QString::fromUtf8("brushSizeDialog"));
        brushSizeDialog->resize(182, 78);
        gridLayout = new QGridLayout(brushSizeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sizeLabel = new QLabel(brushSizeDialog);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        horizontalLayout->addWidget(sizeLabel);

        sizeSpin = new QSpinBox(brushSizeDialog);
        sizeSpin->setObjectName(QString::fromUtf8("sizeSpin"));
        sizeSpin->setMinimum(1);
        sizeSpin->setMaximum(9999);

        horizontalLayout->addWidget(sizeSpin);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(brushSizeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(brushSizeDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(brushSizeDialog);
        QObject::connect(okButton, SIGNAL(clicked()), brushSizeDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), brushSizeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(brushSizeDialog);
    } // setupUi

    void retranslateUi(QDialog *brushSizeDialog)
    {
        brushSizeDialog->setWindowTitle(QCoreApplication::translate("brushSizeDialog", "Set brush size", nullptr));
        sizeLabel->setText(QCoreApplication::translate("brushSizeDialog", "Brush size:", nullptr));
        okButton->setText(QCoreApplication::translate("brushSizeDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("brushSizeDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class brushSizeDialog: public Ui_brushSizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETBRUSHSIZEDIALOG_H
