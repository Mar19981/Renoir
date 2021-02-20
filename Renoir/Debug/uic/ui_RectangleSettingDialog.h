/********************************************************************************
** Form generated from reading UI file 'RectangleSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGLESETTINGDIALOG_H
#define UI_RECTANGLESETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RectangleSettings
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *widthSpin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *heightSpin;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpinBox *xSpin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpinBox *ySpin;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *color;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QPushButton *outline;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *outlineSpin;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RectangleSettings)
    {
        if (RectangleSettings->objectName().isEmpty())
            RectangleSettings->setObjectName(QString::fromUtf8("RectangleSettings"));
        RectangleSettings->resize(263, 161);
        gridLayout = new QGridLayout(RectangleSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(RectangleSettings);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        widthSpin = new QSpinBox(RectangleSettings);
        widthSpin->setObjectName(QString::fromUtf8("widthSpin"));
        widthSpin->setMinimum(1);
        widthSpin->setMaximum(99999);
        widthSpin->setValue(100);

        horizontalLayout_3->addWidget(widthSpin);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(RectangleSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        heightSpin = new QSpinBox(RectangleSettings);
        heightSpin->setObjectName(QString::fromUtf8("heightSpin"));
        heightSpin->setMinimum(1);
        heightSpin->setMaximum(99999);
        heightSpin->setValue(100);

        horizontalLayout_4->addWidget(heightSpin);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(RectangleSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        xSpin = new QSpinBox(RectangleSettings);
        xSpin->setObjectName(QString::fromUtf8("xSpin"));

        horizontalLayout_6->addWidget(xSpin);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(RectangleSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        ySpin = new QSpinBox(RectangleSettings);
        ySpin->setObjectName(QString::fromUtf8("ySpin"));

        horizontalLayout_7->addWidget(ySpin);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(RectangleSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        color = new QPushButton(RectangleSettings);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout->addWidget(color);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(RectangleSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        outline = new QPushButton(RectangleSettings);
        outline->setObjectName(QString::fromUtf8("outline"));

        horizontalLayout_2->addWidget(outline);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(RectangleSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        outlineSpin = new QSpinBox(RectangleSettings);
        outlineSpin->setObjectName(QString::fromUtf8("outlineSpin"));
        outlineSpin->setMaximum(99999);

        horizontalLayout_5->addWidget(outlineSpin);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(RectangleSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(RectangleSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);


        retranslateUi(RectangleSettings);
        QObject::connect(okButton, SIGNAL(clicked()), RectangleSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RectangleSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(RectangleSettings);
    } // setupUi

    void retranslateUi(QDialog *RectangleSettings)
    {
        RectangleSettings->setWindowTitle(QCoreApplication::translate("RectangleSettings", "Rectangle settings", nullptr));
        label->setText(QCoreApplication::translate("RectangleSettings", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("RectangleSettings", "Height:", nullptr));
        label_3->setText(QCoreApplication::translate("RectangleSettings", "X:", nullptr));
        label_4->setText(QCoreApplication::translate("RectangleSettings", "Y:", nullptr));
        label_6->setText(QCoreApplication::translate("RectangleSettings", "Fill:", nullptr));
        color->setText(QString());
        label_7->setText(QCoreApplication::translate("RectangleSettings", "Outline:", nullptr));
        outline->setText(QString());
        label_5->setText(QCoreApplication::translate("RectangleSettings", "Outline width:", nullptr));
        okButton->setText(QCoreApplication::translate("RectangleSettings", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("RectangleSettings", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RectangleSettings: public Ui_RectangleSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGLESETTINGDIALOG_H
