/********************************************************************************
** Form generated from reading UI file 'applyKernelFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYKERNELFILTERDIALOG_H
#define UI_APPLYKERNELFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_kernelDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *matrixLabel;
    QGridLayout *gridLayout;
    QSpinBox *value9;
    QSpinBox *value8;
    QSpinBox *value2;
    QSpinBox *value4;
    QSpinBox *value7;
    QSpinBox *value1;
    QSpinBox *value3;
    QSpinBox *value5;
    QSpinBox *value6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *iterationsLabel;
    QSpinBox *iterationsValue;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *modeLabel;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *channelsLabel;
    QCheckBox *redCheck;
    QCheckBox *greenCheck;
    QCheckBox *blueCheck;
    QVBoxLayout *verticalLayout_2;
    QLabel *optionsLabel;
    QCheckBox *normalize;
    QCheckBox *grayscale;

    void setupUi(QDialog *kernelDialog)
    {
        if (kernelDialog->objectName().isEmpty())
            kernelDialog->setObjectName(QString::fromUtf8("kernelDialog"));
        kernelDialog->resize(396, 194);
        gridLayout_2 = new QGridLayout(kernelDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(kernelDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(kernelDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout_2->addLayout(hboxLayout, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        matrixLabel = new QLabel(kernelDialog);
        matrixLabel->setObjectName(QString::fromUtf8("matrixLabel"));

        verticalLayout->addWidget(matrixLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        value9 = new QSpinBox(kernelDialog);
        value9->setObjectName(QString::fromUtf8("value9"));
        value9->setMinimum(-100);
        value9->setMaximum(100);

        gridLayout->addWidget(value9, 2, 2, 1, 1);

        value8 = new QSpinBox(kernelDialog);
        value8->setObjectName(QString::fromUtf8("value8"));
        value8->setMinimum(-100);
        value8->setMaximum(100);

        gridLayout->addWidget(value8, 2, 1, 1, 1);

        value2 = new QSpinBox(kernelDialog);
        value2->setObjectName(QString::fromUtf8("value2"));
        value2->setMinimum(-100);
        value2->setMaximum(100);

        gridLayout->addWidget(value2, 0, 1, 1, 1);

        value4 = new QSpinBox(kernelDialog);
        value4->setObjectName(QString::fromUtf8("value4"));
        value4->setMinimum(-100);
        value4->setMaximum(100);

        gridLayout->addWidget(value4, 1, 0, 1, 1);

        value7 = new QSpinBox(kernelDialog);
        value7->setObjectName(QString::fromUtf8("value7"));
        value7->setMinimum(-100);
        value7->setMaximum(100);

        gridLayout->addWidget(value7, 2, 0, 1, 1);

        value1 = new QSpinBox(kernelDialog);
        value1->setObjectName(QString::fromUtf8("value1"));
        value1->setMinimum(-100);
        value1->setMaximum(100);

        gridLayout->addWidget(value1, 0, 0, 1, 1);

        value3 = new QSpinBox(kernelDialog);
        value3->setObjectName(QString::fromUtf8("value3"));
        value3->setMinimum(-100);
        value3->setMaximum(100);

        gridLayout->addWidget(value3, 0, 2, 1, 1);

        value5 = new QSpinBox(kernelDialog);
        value5->setObjectName(QString::fromUtf8("value5"));
        value5->setMinimum(-100);
        value5->setMaximum(100);

        gridLayout->addWidget(value5, 1, 1, 1, 1);

        value6 = new QSpinBox(kernelDialog);
        value6->setObjectName(QString::fromUtf8("value6"));
        value6->setMinimum(-100);
        value6->setMaximum(100);

        gridLayout->addWidget(value6, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        iterationsLabel = new QLabel(kernelDialog);
        iterationsLabel->setObjectName(QString::fromUtf8("iterationsLabel"));

        horizontalLayout_3->addWidget(iterationsLabel);

        iterationsValue = new QSpinBox(kernelDialog);
        iterationsValue->setObjectName(QString::fromUtf8("iterationsValue"));
        iterationsValue->setMaximum(256);
        iterationsValue->setValue(1);

        horizontalLayout_3->addWidget(iterationsValue);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modeLabel = new QLabel(kernelDialog);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        horizontalLayout->addWidget(modeLabel);

        comboBox = new QComboBox(kernelDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        channelsLabel = new QLabel(kernelDialog);
        channelsLabel->setObjectName(QString::fromUtf8("channelsLabel"));

        horizontalLayout_2->addWidget(channelsLabel);

        redCheck = new QCheckBox(kernelDialog);
        redCheck->setObjectName(QString::fromUtf8("redCheck"));
        redCheck->setEnabled(false);
        redCheck->setCheckable(true);
        redCheck->setChecked(true);

        horizontalLayout_2->addWidget(redCheck);

        greenCheck = new QCheckBox(kernelDialog);
        greenCheck->setObjectName(QString::fromUtf8("greenCheck"));
        greenCheck->setEnabled(false);
        greenCheck->setCheckable(true);
        greenCheck->setChecked(true);

        horizontalLayout_2->addWidget(greenCheck);

        blueCheck = new QCheckBox(kernelDialog);
        blueCheck->setObjectName(QString::fromUtf8("blueCheck"));
        blueCheck->setEnabled(false);
        blueCheck->setCheckable(true);
        blueCheck->setChecked(true);

        horizontalLayout_2->addWidget(blueCheck);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        optionsLabel = new QLabel(kernelDialog);
        optionsLabel->setObjectName(QString::fromUtf8("optionsLabel"));

        verticalLayout_2->addWidget(optionsLabel);

        normalize = new QCheckBox(kernelDialog);
        normalize->setObjectName(QString::fromUtf8("normalize"));

        verticalLayout_2->addWidget(normalize);

        grayscale = new QCheckBox(kernelDialog);
        grayscale->setObjectName(QString::fromUtf8("grayscale"));

        verticalLayout_2->addWidget(grayscale);


        verticalLayout_4->addLayout(verticalLayout_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_4);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(kernelDialog);
        QObject::connect(okButton, SIGNAL(clicked()), kernelDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), kernelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(kernelDialog);
    } // setupUi

    void retranslateUi(QDialog *kernelDialog)
    {
        kernelDialog->setWindowTitle(QCoreApplication::translate("kernelDialog", "Apply kernel", nullptr));
        okButton->setText(QCoreApplication::translate("kernelDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("kernelDialog", "Cancel", nullptr));
        matrixLabel->setText(QCoreApplication::translate("kernelDialog", "Matrix:", nullptr));
        iterationsLabel->setText(QCoreApplication::translate("kernelDialog", "Iterations:", nullptr));
        modeLabel->setText(QCoreApplication::translate("kernelDialog", "Mode:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("kernelDialog", "RGB", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("kernelDialog", "Color Channels", nullptr));

        channelsLabel->setText(QCoreApplication::translate("kernelDialog", "Channels:", nullptr));
        redCheck->setText(QCoreApplication::translate("kernelDialog", "Red", nullptr));
        greenCheck->setText(QCoreApplication::translate("kernelDialog", "Green", nullptr));
        blueCheck->setText(QCoreApplication::translate("kernelDialog", "Blue", nullptr));
        optionsLabel->setText(QCoreApplication::translate("kernelDialog", "Options:", nullptr));
        normalize->setText(QCoreApplication::translate("kernelDialog", "Normalize", nullptr));
        grayscale->setText(QCoreApplication::translate("kernelDialog", "Grayscale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kernelDialog: public Ui_kernelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYKERNELFILTERDIALOG_H
