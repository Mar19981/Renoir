/********************************************************************************
** Form generated from reading UI file 'LSystemDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LSYSTEMDIALOG_H
#define UI_LSYSTEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LSysDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QListWidget *rulesList;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *ruleCharText;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *ruleSeqText;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *addButton;
    QPushButton *removeButton;
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *axiomLabel;
    QLineEdit *axiomText;
    QHBoxLayout *horizontalLayout_5;
    QLabel *iterLabel;
    QSpinBox *iterSpin;
    QHBoxLayout *horizontalLayout_11;
    QLabel *angleLabel;
    QDoubleSpinBox *angleSpin;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *widthLabel;
    QSpinBox *widthSpin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lengthLabel;
    QSpinBox *lengthSpin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QDoubleSpinBox *opacitySpin;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *colorButton;
    QVBoxLayout *verticalLayout;
    QCheckBox *transparentCheck;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *bgButton;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QComboBox *posCombo;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LSysDialog)
    {
        if (LSysDialog->objectName().isEmpty())
            LSysDialog->setObjectName(QString::fromUtf8("LSysDialog"));
        LSysDialog->resize(541, 264);
        gridLayout = new QGridLayout(LSysDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(LSysDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        rulesList = new QListWidget(LSysDialog);
        rulesList->setObjectName(QString::fromUtf8("rulesList"));

        verticalLayout_2->addWidget(rulesList);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        line_2 = new QFrame(LSysDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(LSysDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(LSysDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        ruleCharText = new QLineEdit(LSysDialog);
        ruleCharText->setObjectName(QString::fromUtf8("ruleCharText"));
        ruleCharText->setMaxLength(1);

        horizontalLayout_10->addWidget(ruleCharText);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(LSysDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        ruleSeqText = new QLineEdit(LSysDialog);
        ruleSeqText->setObjectName(QString::fromUtf8("ruleSeqText"));

        horizontalLayout_9->addWidget(ruleSeqText);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        addButton = new QPushButton(LSysDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_12->addWidget(addButton);

        removeButton = new QPushButton(LSysDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout_12->addWidget(removeButton);


        verticalLayout_3->addLayout(horizontalLayout_12);


        verticalLayout_5->addLayout(verticalLayout_3);

        line = new QFrame(LSysDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        axiomLabel = new QLabel(LSysDialog);
        axiomLabel->setObjectName(QString::fromUtf8("axiomLabel"));

        horizontalLayout_3->addWidget(axiomLabel);

        axiomText = new QLineEdit(LSysDialog);
        axiomText->setObjectName(QString::fromUtf8("axiomText"));
        axiomText->setMaxLength(100);

        horizontalLayout_3->addWidget(axiomText);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        iterLabel = new QLabel(LSysDialog);
        iterLabel->setObjectName(QString::fromUtf8("iterLabel"));

        horizontalLayout_5->addWidget(iterLabel);

        iterSpin = new QSpinBox(LSysDialog);
        iterSpin->setObjectName(QString::fromUtf8("iterSpin"));
        iterSpin->setMinimum(1);

        horizontalLayout_5->addWidget(iterSpin);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        angleLabel = new QLabel(LSysDialog);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));

        horizontalLayout_11->addWidget(angleLabel);

        angleSpin = new QDoubleSpinBox(LSysDialog);
        angleSpin->setObjectName(QString::fromUtf8("angleSpin"));

        horizontalLayout_11->addWidget(angleSpin);


        verticalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 2, 1, 1);

        line_3 = new QFrame(LSysDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 3, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(LSysDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        comboBox = new QComboBox(LSysDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        widthLabel = new QLabel(LSysDialog);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        horizontalLayout_6->addWidget(widthLabel);

        widthSpin = new QSpinBox(LSysDialog);
        widthSpin->setObjectName(QString::fromUtf8("widthSpin"));
        widthSpin->setMinimum(1);

        horizontalLayout_6->addWidget(widthSpin);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lengthLabel = new QLabel(LSysDialog);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        horizontalLayout_7->addWidget(lengthLabel);

        lengthSpin = new QSpinBox(LSysDialog);
        lengthSpin->setObjectName(QString::fromUtf8("lengthSpin"));
        lengthSpin->setMinimum(1);
        lengthSpin->setMaximum(2000);

        horizontalLayout_7->addWidget(lengthSpin);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(LSysDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        opacitySpin = new QDoubleSpinBox(LSysDialog);
        opacitySpin->setObjectName(QString::fromUtf8("opacitySpin"));
        opacitySpin->setMaximum(1.000000000000000);
        opacitySpin->setSingleStep(0.010000000000000);
        opacitySpin->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(opacitySpin);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(LSysDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        colorButton = new QPushButton(LSysDialog);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));

        horizontalLayout->addWidget(colorButton);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        transparentCheck = new QCheckBox(LSysDialog);
        transparentCheck->setObjectName(QString::fromUtf8("transparentCheck"));
        transparentCheck->setChecked(true);

        verticalLayout->addWidget(transparentCheck);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(LSysDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        bgButton = new QPushButton(LSysDialog);
        bgButton->setObjectName(QString::fromUtf8("bgButton"));
        bgButton->setEnabled(false);

        horizontalLayout_2->addWidget(bgButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_6, 0, 4, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_9 = new QLabel(LSysDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_13->addWidget(label_9);

        posCombo = new QComboBox(LSysDialog);
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->addItem(QString());
        posCombo->setObjectName(QString::fromUtf8("posCombo"));

        horizontalLayout_13->addWidget(posCombo);


        gridLayout->addLayout(horizontalLayout_13, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(LSysDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(LSysDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 4, 1, 1);


        retranslateUi(LSysDialog);
        QObject::connect(okButton, SIGNAL(clicked()), LSysDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), LSysDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LSysDialog);
    } // setupUi

    void retranslateUi(QDialog *LSysDialog)
    {
        LSysDialog->setWindowTitle(QCoreApplication::translate("LSysDialog", "Generate L-System", nullptr));
        label_7->setText(QCoreApplication::translate("LSysDialog", "Rules:", nullptr));
        label_8->setText(QCoreApplication::translate("LSysDialog", "Add rule:", nullptr));
        label_5->setText(QCoreApplication::translate("LSysDialog", "A:", nullptr));
        label_6->setText(QCoreApplication::translate("LSysDialog", "B:", nullptr));
        addButton->setText(QCoreApplication::translate("LSysDialog", "Add", nullptr));
        removeButton->setText(QCoreApplication::translate("LSysDialog", "Remove", nullptr));
        axiomLabel->setText(QCoreApplication::translate("LSysDialog", "Axiom:", nullptr));
        iterLabel->setText(QCoreApplication::translate("LSysDialog", "Iterations:", nullptr));
        angleLabel->setText(QCoreApplication::translate("LSysDialog", "Angle:", nullptr));
        label->setText(QCoreApplication::translate("LSysDialog", "Preset:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("LSysDialog", "No preset", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("LSysDialog", "Tree 1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("LSysDialog", "Tree 2", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("LSysDialog", "Tree 3", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("LSysDialog", "Tree 4", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("LSysDialog", "Tree 5", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("LSysDialog", "Tree 6", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("LSysDialog", "Koch curve 1", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("LSysDialog", "Koch curve 2", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("LSysDialog", "Koch curve 3", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("LSysDialog", "Koch curve 4", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("LSysDialog", "Koch curve 5", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("LSysDialog", "Koch curve 6", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("LSysDialog", "Koch curve 7", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("LSysDialog", "Koch curve 8", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("LSysDialog", "Koch curve 9", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("LSysDialog", "Koch curve 10", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("LSysDialog", "FASS curve 1", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("LSysDialog", "FASS curve 2", nullptr));

        widthLabel->setText(QCoreApplication::translate("LSysDialog", "Brush Size:", nullptr));
        lengthLabel->setText(QCoreApplication::translate("LSysDialog", "Length:", nullptr));
        label_3->setText(QCoreApplication::translate("LSysDialog", "Opacity:", nullptr));
        label_2->setText(QCoreApplication::translate("LSysDialog", "Color:", nullptr));
        colorButton->setText(QString());
        transparentCheck->setText(QCoreApplication::translate("LSysDialog", "On transparent", nullptr));
        label_4->setText(QCoreApplication::translate("LSysDialog", "Background:", nullptr));
        bgButton->setText(QString());
        label_9->setText(QCoreApplication::translate("LSysDialog", "Position:", nullptr));
        posCombo->setItemText(0, QCoreApplication::translate("LSysDialog", "Top", nullptr));
        posCombo->setItemText(1, QCoreApplication::translate("LSysDialog", "Bottom", nullptr));
        posCombo->setItemText(2, QCoreApplication::translate("LSysDialog", "Left", nullptr));
        posCombo->setItemText(3, QCoreApplication::translate("LSysDialog", "Right", nullptr));
        posCombo->setItemText(4, QCoreApplication::translate("LSysDialog", "Top right", nullptr));
        posCombo->setItemText(5, QCoreApplication::translate("LSysDialog", "Top left", nullptr));
        posCombo->setItemText(6, QCoreApplication::translate("LSysDialog", "Bottom right", nullptr));
        posCombo->setItemText(7, QCoreApplication::translate("LSysDialog", "Bottom left", nullptr));
        posCombo->setItemText(8, QCoreApplication::translate("LSysDialog", "Center", nullptr));

        okButton->setText(QCoreApplication::translate("LSysDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("LSysDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LSysDialog: public Ui_LSysDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LSYSTEMDIALOG_H
