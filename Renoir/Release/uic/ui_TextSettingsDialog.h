/********************************************************************************
** Form generated from reading UI file 'TextSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTSETTINGSDIALOG_H
#define UI_TEXTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_textSettings
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *text;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *fontSpin;
    QLabel *label_2;
    QFontComboBox *fontComboBox;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpinBox *ySpin;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *xSpin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QPushButton *color;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QPushButton *outline;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpinBox *outlineSpin;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *textSettings)
    {
        if (textSettings->objectName().isEmpty())
            textSettings->setObjectName(QString::fromUtf8("textSettings"));
        textSettings->resize(462, 115);
        gridLayout = new QGridLayout(textSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(textSettings);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        text = new QLineEdit(textSettings);
        text->setObjectName(QString::fromUtf8("text"));

        horizontalLayout->addWidget(text);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(textSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        fontSpin = new QSpinBox(textSettings);
        fontSpin->setObjectName(QString::fromUtf8("fontSpin"));
        fontSpin->setMinimum(1);
        fontSpin->setMaximum(1000);
        fontSpin->setValue(9);

        horizontalLayout_3->addWidget(fontSpin);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        label_2 = new QLabel(textSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        fontComboBox = new QFontComboBox(textSettings);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout_2->addWidget(fontComboBox);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(textSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        ySpin = new QSpinBox(textSettings);
        ySpin->setObjectName(QString::fromUtf8("ySpin"));

        horizontalLayout_6->addWidget(ySpin);


        horizontalLayout_10->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(textSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        xSpin = new QSpinBox(textSettings);
        xSpin->setObjectName(QString::fromUtf8("xSpin"));

        horizontalLayout_5->addWidget(xSpin);


        horizontalLayout_10->addLayout(horizontalLayout_5);


        horizontalLayout_11->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(textSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        color = new QPushButton(textSettings);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout_8->addWidget(color);


        horizontalLayout_11->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(textSettings);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        outline = new QPushButton(textSettings);
        outline->setObjectName(QString::fromUtf8("outline"));

        horizontalLayout_9->addWidget(outline);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(textSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        outlineSpin = new QSpinBox(textSettings);
        outlineSpin->setObjectName(QString::fromUtf8("outlineSpin"));

        horizontalLayout_7->addWidget(outlineSpin);


        horizontalLayout_9->addLayout(horizontalLayout_7);


        horizontalLayout_11->addLayout(horizontalLayout_9);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(textSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(textSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 1);


        retranslateUi(textSettings);
        QObject::connect(okButton, SIGNAL(clicked()), textSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), textSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(textSettings);
    } // setupUi

    void retranslateUi(QDialog *textSettings)
    {
        textSettings->setWindowTitle(QCoreApplication::translate("textSettings", "Text settings", nullptr));
        label->setText(QCoreApplication::translate("textSettings", "Text:", nullptr));
        label_3->setText(QCoreApplication::translate("textSettings", "Size:", nullptr));
        label_2->setText(QCoreApplication::translate("textSettings", "Font:", nullptr));
        label_5->setText(QCoreApplication::translate("textSettings", "Y:", nullptr));
        label_4->setText(QCoreApplication::translate("textSettings", "X:", nullptr));
        label_7->setText(QCoreApplication::translate("textSettings", "Fill:", nullptr));
        color->setText(QString());
        label_8->setText(QCoreApplication::translate("textSettings", "Outline:", nullptr));
        outline->setText(QString());
        label_6->setText(QCoreApplication::translate("textSettings", "Outline width:", nullptr));
        okButton->setText(QCoreApplication::translate("textSettings", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("textSettings", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textSettings: public Ui_textSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTSETTINGSDIALOG_H
