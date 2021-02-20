/********************************************************************************
** Form generated from reading UI file 'newFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_newFileDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *widthLabel;
    QSpinBox *widthValue;
    QCheckBox *transparentCheck;
    QHBoxLayout *horizontalLayout_2;
    QLabel *heightLabel;
    QSpinBox *heightValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *bgLabel;
    QPushButton *bgButton;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLabel;
    QLineEdit *nameValue;

    void setupUi(QDialog *newFileDialog)
    {
        if (newFileDialog->objectName().isEmpty())
            newFileDialog->setObjectName(QString::fromUtf8("newFileDialog"));
        newFileDialog->resize(264, 136);
        gridLayout = new QGridLayout(newFileDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widthLabel = new QLabel(newFileDialog);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        horizontalLayout_3->addWidget(widthLabel);

        widthValue = new QSpinBox(newFileDialog);
        widthValue->setObjectName(QString::fromUtf8("widthValue"));
        widthValue->setMinimum(1);
        widthValue->setMaximum(99999);
        widthValue->setValue(100);

        horizontalLayout_3->addWidget(widthValue);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        transparentCheck = new QCheckBox(newFileDialog);
        transparentCheck->setObjectName(QString::fromUtf8("transparentCheck"));
        transparentCheck->setChecked(true);

        gridLayout->addWidget(transparentCheck, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        heightLabel = new QLabel(newFileDialog);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        horizontalLayout_2->addWidget(heightLabel);

        heightValue = new QSpinBox(newFileDialog);
        heightValue->setObjectName(QString::fromUtf8("heightValue"));
        heightValue->setMinimum(1);
        heightValue->setMaximum(99999);
        heightValue->setSingleStep(1);
        heightValue->setValue(100);

        horizontalLayout_2->addWidget(heightValue);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bgLabel = new QLabel(newFileDialog);
        bgLabel->setObjectName(QString::fromUtf8("bgLabel"));

        horizontalLayout_4->addWidget(bgLabel);

        bgButton = new QPushButton(newFileDialog);
        bgButton->setObjectName(QString::fromUtf8("bgButton"));

        horizontalLayout_4->addWidget(bgButton);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(newFileDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(newFileDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameLabel = new QLabel(newFileDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        nameValue = new QLineEdit(newFileDialog);
        nameValue->setObjectName(QString::fromUtf8("nameValue"));

        horizontalLayout->addWidget(nameValue);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);


        retranslateUi(newFileDialog);
        QObject::connect(okButton, SIGNAL(clicked()), newFileDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), newFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(newFileDialog);
    } // setupUi

    void retranslateUi(QDialog *newFileDialog)
    {
        newFileDialog->setWindowTitle(QCoreApplication::translate("newFileDialog", "New file", nullptr));
        widthLabel->setText(QCoreApplication::translate("newFileDialog", "Width:", nullptr));
        transparentCheck->setText(QCoreApplication::translate("newFileDialog", "Transparent background", nullptr));
        heightLabel->setText(QCoreApplication::translate("newFileDialog", "Height:", nullptr));
        bgLabel->setText(QCoreApplication::translate("newFileDialog", "Background:", nullptr));
        bgButton->setText(QString());
        okButton->setText(QCoreApplication::translate("newFileDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("newFileDialog", "Cancel", nullptr));
        nameLabel->setText(QCoreApplication::translate("newFileDialog", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFileDialog: public Ui_newFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
