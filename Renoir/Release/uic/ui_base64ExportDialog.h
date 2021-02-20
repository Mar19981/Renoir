/********************************************************************************
** Form generated from reading UI file 'base64ExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE64EXPORTDIALOG_H
#define UI_BASE64EXPORTDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_base64Dialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *formatLabel;
    QComboBox *formatBox;
    QCheckBox *clipboardCheck;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *base64Dialog)
    {
        if (base64Dialog->objectName().isEmpty())
            base64Dialog->setObjectName(QString::fromUtf8("base64Dialog"));
        base64Dialog->resize(222, 78);
        gridLayout = new QGridLayout(base64Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formatLabel = new QLabel(base64Dialog);
        formatLabel->setObjectName(QString::fromUtf8("formatLabel"));

        horizontalLayout->addWidget(formatLabel);

        formatBox = new QComboBox(base64Dialog);
        formatBox->addItem(QString());
        formatBox->addItem(QString());
        formatBox->addItem(QString());
        formatBox->setObjectName(QString::fromUtf8("formatBox"));

        horizontalLayout->addWidget(formatBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        clipboardCheck = new QCheckBox(base64Dialog);
        clipboardCheck->setObjectName(QString::fromUtf8("clipboardCheck"));

        gridLayout->addWidget(clipboardCheck, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(base64Dialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(base64Dialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);


        retranslateUi(base64Dialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), base64Dialog, SLOT(reject()));
        QObject::connect(okButton, SIGNAL(clicked()), base64Dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(base64Dialog);
    } // setupUi

    void retranslateUi(QDialog *base64Dialog)
    {
        base64Dialog->setWindowTitle(QCoreApplication::translate("base64Dialog", "Export as base64", nullptr));
        formatLabel->setText(QCoreApplication::translate("base64Dialog", "Format:", nullptr));
        formatBox->setItemText(0, QCoreApplication::translate("base64Dialog", "BMP", nullptr));
        formatBox->setItemText(1, QCoreApplication::translate("base64Dialog", "JPG", nullptr));
        formatBox->setItemText(2, QCoreApplication::translate("base64Dialog", "PNG", nullptr));

        clipboardCheck->setText(QCoreApplication::translate("base64Dialog", "Copy to clipboard", nullptr));
        okButton->setText(QCoreApplication::translate("base64Dialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("base64Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class base64Dialog: public Ui_base64Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE64EXPORTDIALOG_H
