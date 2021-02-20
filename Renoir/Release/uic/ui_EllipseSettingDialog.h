/********************************************************************************
** Form generated from reading UI file 'EllipseSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLIPSESETTINGDIALOG_H
#define UI_ELLIPSESETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ellipseSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpinBox *widthSpin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSpinBox *heightSpin;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *xSpin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *ySpin;
    QVBoxLayout *verticalLayout;
    QCheckBox *circleCheck;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpinBox *radiousSpin;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QPushButton *color;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QPushButton *outline;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpinBox *outlineSpin;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ellipseSettingsDialog)
    {
        if (ellipseSettingsDialog->objectName().isEmpty())
            ellipseSettingsDialog->setObjectName(QString::fromUtf8("ellipseSettingsDialog"));
        ellipseSettingsDialog->resize(383, 165);
        gridLayout = new QGridLayout(ellipseSettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(ellipseSettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        widthSpin = new QSpinBox(ellipseSettingsDialog);
        widthSpin->setObjectName(QString::fromUtf8("widthSpin"));
        widthSpin->setEnabled(false);
        widthSpin->setMinimum(1);
        widthSpin->setMaximum(99999);
        widthSpin->setValue(100);

        horizontalLayout_7->addWidget(widthSpin);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(ellipseSettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        heightSpin = new QSpinBox(ellipseSettingsDialog);
        heightSpin->setObjectName(QString::fromUtf8("heightSpin"));
        heightSpin->setEnabled(false);
        heightSpin->setMinimum(1);
        heightSpin->setMaximum(99999);
        heightSpin->setValue(100);

        horizontalLayout_8->addWidget(heightSpin);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(ellipseSettingsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        xSpin = new QSpinBox(ellipseSettingsDialog);
        xSpin->setObjectName(QString::fromUtf8("xSpin"));
        xSpin->setMaximum(99999);

        horizontalLayout_5->addWidget(xSpin);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(ellipseSettingsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        ySpin = new QSpinBox(ellipseSettingsDialog);
        ySpin->setObjectName(QString::fromUtf8("ySpin"));
        ySpin->setMaximum(99999);

        horizontalLayout_4->addWidget(ySpin);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_9->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        circleCheck = new QCheckBox(ellipseSettingsDialog);
        circleCheck->setObjectName(QString::fromUtf8("circleCheck"));
        circleCheck->setChecked(true);

        verticalLayout->addWidget(circleCheck);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(ellipseSettingsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        radiousSpin = new QSpinBox(ellipseSettingsDialog);
        radiousSpin->setObjectName(QString::fromUtf8("radiousSpin"));
        radiousSpin->setMinimum(1);
        radiousSpin->setMaximum(99999);
        radiousSpin->setValue(100);

        horizontalLayout_6->addWidget(radiousSpin);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(ellipseSettingsDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        color = new QPushButton(ellipseSettingsDialog);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout->addWidget(color);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(ellipseSettingsDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        outline = new QPushButton(ellipseSettingsDialog);
        outline->setObjectName(QString::fromUtf8("outline"));

        horizontalLayout_2->addWidget(outline);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(ellipseSettingsDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        outlineSpin = new QSpinBox(ellipseSettingsDialog);
        outlineSpin->setObjectName(QString::fromUtf8("outlineSpin"));
        outlineSpin->setMaximum(99999);

        horizontalLayout_3->addWidget(outlineSpin);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_10->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(ellipseSettingsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ellipseSettingsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(ellipseSettingsDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ellipseSettingsDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ellipseSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ellipseSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ellipseSettingsDialog)
    {
        ellipseSettingsDialog->setWindowTitle(QCoreApplication::translate("ellipseSettingsDialog", "Set ellipse settings", nullptr));
        label->setText(QCoreApplication::translate("ellipseSettingsDialog", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("ellipseSettingsDialog", "Height:", nullptr));
        label_3->setText(QCoreApplication::translate("ellipseSettingsDialog", "X:", nullptr));
        label_4->setText(QCoreApplication::translate("ellipseSettingsDialog", "Y:", nullptr));
        circleCheck->setText(QCoreApplication::translate("ellipseSettingsDialog", "Circle", nullptr));
        label_5->setText(QCoreApplication::translate("ellipseSettingsDialog", "Radious:", nullptr));
        label_8->setText(QCoreApplication::translate("ellipseSettingsDialog", "Fill:", nullptr));
        color->setText(QString());
        label_7->setText(QCoreApplication::translate("ellipseSettingsDialog", "Outline:", nullptr));
        outline->setText(QString());
        label_6->setText(QCoreApplication::translate("ellipseSettingsDialog", "Outline width:", nullptr));
        okButton->setText(QCoreApplication::translate("ellipseSettingsDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("ellipseSettingsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ellipseSettingsDialog: public Ui_ellipseSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLIPSESETTINGDIALOG_H
