/********************************************************************************
** Form generated from reading UI file 'base64OutputDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE64OUTPUTDIALOG_H
#define UI_BASE64OUTPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *base64Text;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *copyButton;
    QPushButton *closeButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(428, 307);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        base64Text = new QTextBrowser(Dialog);
        base64Text->setObjectName(QString::fromUtf8("base64Text"));
        base64Text->setOpenLinks(false);

        gridLayout->addWidget(base64Text, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        copyButton = new QPushButton(Dialog);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));

        hboxLayout->addWidget(copyButton);

        closeButton = new QPushButton(Dialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(closeButton, SIGNAL(clicked()), Dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Output", nullptr));
        copyButton->setText(QCoreApplication::translate("Dialog", "Copy", nullptr));
        closeButton->setText(QCoreApplication::translate("Dialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE64OUTPUTDIALOG_H
