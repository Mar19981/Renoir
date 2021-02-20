/********************************************************************************
** Form generated from reading UI file 'applyGaussianFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYGAUSSIANFILTERDIALOG_H
#define UI_APPLYGAUSSIANFILTERDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gaussianFilterDialog
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *iterationsValue;
    QHBoxLayout *horizontalLayout;
    QLabel *modeLabel;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QLabel *colorChannelLabel;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *redCheck;
    QCheckBox *greenCheck;
    QCheckBox *blueCheck;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *gaussianFilterDialog)
    {
        if (gaussianFilterDialog->objectName().isEmpty())
            gaussianFilterDialog->setObjectName(QString::fromUtf8("gaussianFilterDialog"));
        gaussianFilterDialog->resize(229, 161);
        gridLayout = new QGridLayout(gaussianFilterDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(gaussianFilterDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        iterationsValue = new QSpinBox(layoutWidget);
        iterationsValue->setObjectName(QString::fromUtf8("iterationsValue"));
        iterationsValue->setMaximum(256);
        iterationsValue->setValue(1);

        horizontalLayout_2->addWidget(iterationsValue);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modeLabel = new QLabel(layoutWidget);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        horizontalLayout->addWidget(modeLabel);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        colorChannelLabel = new QLabel(layoutWidget);
        colorChannelLabel->setObjectName(QString::fromUtf8("colorChannelLabel"));

        verticalLayout->addWidget(colorChannelLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        redCheck = new QCheckBox(layoutWidget);
        redCheck->setObjectName(QString::fromUtf8("redCheck"));
        redCheck->setEnabled(false);

        horizontalLayout_3->addWidget(redCheck);

        greenCheck = new QCheckBox(layoutWidget);
        greenCheck->setObjectName(QString::fromUtf8("greenCheck"));
        greenCheck->setEnabled(false);

        horizontalLayout_3->addWidget(greenCheck);

        blueCheck = new QCheckBox(layoutWidget);
        blueCheck->setObjectName(QString::fromUtf8("blueCheck"));
        blueCheck->setEnabled(false);

        horizontalLayout_3->addWidget(blueCheck);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        splitter->addWidget(layoutWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(gaussianFilterDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(gaussianFilterDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(gaussianFilterDialog);
        QObject::connect(okButton, SIGNAL(clicked()), gaussianFilterDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), gaussianFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(gaussianFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *gaussianFilterDialog)
    {
        gaussianFilterDialog->setWindowTitle(QCoreApplication::translate("gaussianFilterDialog", "Apply gaussian blur", nullptr));
        label->setText(QCoreApplication::translate("gaussianFilterDialog", "Iterations:", nullptr));
        modeLabel->setText(QCoreApplication::translate("gaussianFilterDialog", "Mode:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("gaussianFilterDialog", "RGB", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("gaussianFilterDialog", "Color channels", nullptr));

        colorChannelLabel->setText(QCoreApplication::translate("gaussianFilterDialog", "Color channel:", nullptr));
        redCheck->setText(QCoreApplication::translate("gaussianFilterDialog", "Red", nullptr));
        greenCheck->setText(QCoreApplication::translate("gaussianFilterDialog", "Green", nullptr));
        blueCheck->setText(QCoreApplication::translate("gaussianFilterDialog", "Blue", nullptr));
        okButton->setText(QCoreApplication::translate("gaussianFilterDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("gaussianFilterDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gaussianFilterDialog: public Ui_gaussianFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYGAUSSIANFILTERDIALOG_H
