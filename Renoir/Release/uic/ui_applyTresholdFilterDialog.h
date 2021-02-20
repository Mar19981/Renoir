/********************************************************************************
** Form generated from reading UI file 'applyTresholdFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYTRESHOLDFILTERDIALOG_H
#define UI_APPLYTRESHOLDFILTERDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_applyTresholdFilter
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *modeLabel;
    QComboBox *comboBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fgLabel;
    QPushButton *frontButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *channelLabel;
    QCheckBox *redBox;
    QCheckBox *greenBox;
    QCheckBox *blueBox;
    QHBoxLayout *horizontalLayout;
    QLabel *tresholdLabel;
    QSpinBox *treshholdValue;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bgLabel;
    QPushButton *backButton;

    void setupUi(QDialog *applyTresholdFilter)
    {
        if (applyTresholdFilter->objectName().isEmpty())
            applyTresholdFilter->setObjectName(QString::fromUtf8("applyTresholdFilter"));
        applyTresholdFilter->resize(351, 154);
        gridLayout = new QGridLayout(applyTresholdFilter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        modeLabel = new QLabel(applyTresholdFilter);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        horizontalLayout_4->addWidget(modeLabel);

        comboBox = new QComboBox(applyTresholdFilter);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 15);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(applyTresholdFilter);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(applyTresholdFilter);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fgLabel = new QLabel(applyTresholdFilter);
        fgLabel->setObjectName(QString::fromUtf8("fgLabel"));

        horizontalLayout_2->addWidget(fgLabel);

        frontButton = new QPushButton(applyTresholdFilter);
        frontButton->setObjectName(QString::fromUtf8("frontButton"));

        horizontalLayout_2->addWidget(frontButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        channelLabel = new QLabel(applyTresholdFilter);
        channelLabel->setObjectName(QString::fromUtf8("channelLabel"));

        horizontalLayout_5->addWidget(channelLabel);

        redBox = new QCheckBox(applyTresholdFilter);
        redBox->setObjectName(QString::fromUtf8("redBox"));
        redBox->setEnabled(false);
        redBox->setCheckable(true);
        redBox->setChecked(true);

        horizontalLayout_5->addWidget(redBox);

        greenBox = new QCheckBox(applyTresholdFilter);
        greenBox->setObjectName(QString::fromUtf8("greenBox"));
        greenBox->setEnabled(false);
        greenBox->setCheckable(true);
        greenBox->setChecked(true);

        horizontalLayout_5->addWidget(greenBox);

        blueBox = new QCheckBox(applyTresholdFilter);
        blueBox->setObjectName(QString::fromUtf8("blueBox"));
        blueBox->setEnabled(false);
        blueBox->setCheckable(true);
        blueBox->setChecked(true);

        horizontalLayout_5->addWidget(blueBox);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tresholdLabel = new QLabel(applyTresholdFilter);
        tresholdLabel->setObjectName(QString::fromUtf8("tresholdLabel"));

        horizontalLayout->addWidget(tresholdLabel);

        treshholdValue = new QSpinBox(applyTresholdFilter);
        treshholdValue->setObjectName(QString::fromUtf8("treshholdValue"));
        treshholdValue->setMaximum(255);

        horizontalLayout->addWidget(treshholdValue);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, -1);
        bgLabel = new QLabel(applyTresholdFilter);
        bgLabel->setObjectName(QString::fromUtf8("bgLabel"));

        horizontalLayout_3->addWidget(bgLabel);

        backButton = new QPushButton(applyTresholdFilter);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout_3->addWidget(backButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(applyTresholdFilter);
        QObject::connect(okButton, SIGNAL(clicked()), applyTresholdFilter, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), applyTresholdFilter, SLOT(reject()));

        QMetaObject::connectSlotsByName(applyTresholdFilter);
    } // setupUi

    void retranslateUi(QDialog *applyTresholdFilter)
    {
        applyTresholdFilter->setWindowTitle(QCoreApplication::translate("applyTresholdFilter", "Treshold", nullptr));
        modeLabel->setText(QCoreApplication::translate("applyTresholdFilter", "Mode:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("applyTresholdFilter", "Luminocity", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("applyTresholdFilter", "Color channels", nullptr));

        okButton->setText(QCoreApplication::translate("applyTresholdFilter", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("applyTresholdFilter", "Cancel", nullptr));
        fgLabel->setText(QCoreApplication::translate("applyTresholdFilter", "Foreground color:", nullptr));
        frontButton->setText(QString());
        channelLabel->setText(QCoreApplication::translate("applyTresholdFilter", "Channels:", nullptr));
        redBox->setText(QCoreApplication::translate("applyTresholdFilter", "Red", nullptr));
        greenBox->setText(QCoreApplication::translate("applyTresholdFilter", "Green", nullptr));
        blueBox->setText(QCoreApplication::translate("applyTresholdFilter", "Blue", nullptr));
        tresholdLabel->setText(QCoreApplication::translate("applyTresholdFilter", "Treshold:", nullptr));
        bgLabel->setText(QCoreApplication::translate("applyTresholdFilter", "Background color:", nullptr));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class applyTresholdFilter: public Ui_applyTresholdFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYTRESHOLDFILTERDIALOG_H
