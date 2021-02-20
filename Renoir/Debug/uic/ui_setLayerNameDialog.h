/********************************************************************************
** Form generated from reading UI file 'setLayerNameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETLAYERNAMEDIALOG_H
#define UI_SETLAYERNAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_setLayerNameDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *setLayerNameDialog)
    {
        if (setLayerNameDialog->objectName().isEmpty())
            setLayerNameDialog->setObjectName(QString::fromUtf8("setLayerNameDialog"));
        setLayerNameDialog->resize(182, 78);
        gridLayout = new QGridLayout(setLayerNameDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(setLayerNameDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        name = new QLineEdit(setLayerNameDialog);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(setLayerNameDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(setLayerNameDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(setLayerNameDialog);
        QObject::connect(okButton, SIGNAL(clicked()), setLayerNameDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), setLayerNameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(setLayerNameDialog);
    } // setupUi

    void retranslateUi(QDialog *setLayerNameDialog)
    {
        setLayerNameDialog->setWindowTitle(QCoreApplication::translate("setLayerNameDialog", "Set layer name", nullptr));
        label->setText(QCoreApplication::translate("setLayerNameDialog", "Name:", nullptr));
        okButton->setText(QCoreApplication::translate("setLayerNameDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("setLayerNameDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setLayerNameDialog: public Ui_setLayerNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETLAYERNAMEDIALOG_H
