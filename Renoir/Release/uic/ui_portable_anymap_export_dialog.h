/********************************************************************************
** Form generated from reading UI file 'portable_anymap_export_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTABLE_ANYMAP_EXPORT_DIALOG_H
#define UI_PORTABLE_ANYMAP_EXPORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PixmapExportDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *mapTypeLabel;
    QRadioButton *grayscaleBinRadio;
    QRadioButton *colorBinRadio;
    QRadioButton *grayscaleTxtRadio;
    QLabel *textLabel;
    QFrame *line_2;
    QFrame *line;
    QLabel *binLabel;
    QRadioButton *colorTxtRadio;
    QFormLayout *formLayout;
    QCheckBox *overrideCheckbox;
    QSpinBox *overrideValue;
    QDialogButtonBox *exportButton;

    void setupUi(QDialog *PixmapExportDialog)
    {
        if (PixmapExportDialog->objectName().isEmpty())
            PixmapExportDialog->setObjectName(QString::fromUtf8("PixmapExportDialog"));
        PixmapExportDialog->resize(363, 127);
        PixmapExportDialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(PixmapExportDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mapTypeLabel = new QLabel(PixmapExportDialog);
        mapTypeLabel->setObjectName(QString::fromUtf8("mapTypeLabel"));

        gridLayout->addWidget(mapTypeLabel, 0, 0, 1, 1);

        grayscaleBinRadio = new QRadioButton(PixmapExportDialog);
        grayscaleBinRadio->setObjectName(QString::fromUtf8("grayscaleBinRadio"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grayscaleBinRadio->sizePolicy().hasHeightForWidth());
        grayscaleBinRadio->setSizePolicy(sizePolicy);

        gridLayout->addWidget(grayscaleBinRadio, 3, 3, 2, 1);

        colorBinRadio = new QRadioButton(PixmapExportDialog);
        colorBinRadio->setObjectName(QString::fromUtf8("colorBinRadio"));
        sizePolicy.setHeightForWidth(colorBinRadio->sizePolicy().hasHeightForWidth());
        colorBinRadio->setSizePolicy(sizePolicy);
        colorBinRadio->setChecked(true);

        gridLayout->addWidget(colorBinRadio, 5, 3, 1, 1);

        grayscaleTxtRadio = new QRadioButton(PixmapExportDialog);
        grayscaleTxtRadio->setObjectName(QString::fromUtf8("grayscaleTxtRadio"));
        sizePolicy.setHeightForWidth(grayscaleTxtRadio->sizePolicy().hasHeightForWidth());
        grayscaleTxtRadio->setSizePolicy(sizePolicy);

        gridLayout->addWidget(grayscaleTxtRadio, 3, 0, 2, 2);

        textLabel = new QLabel(PixmapExportDialog);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));

        gridLayout->addWidget(textLabel, 1, 0, 1, 1);

        line_2 = new QFrame(PixmapExportDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 4);

        line = new QFrame(PixmapExportDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 2, 3, 1);

        binLabel = new QLabel(PixmapExportDialog);
        binLabel->setObjectName(QString::fromUtf8("binLabel"));

        gridLayout->addWidget(binLabel, 1, 3, 1, 1);

        colorTxtRadio = new QRadioButton(PixmapExportDialog);
        colorTxtRadio->setObjectName(QString::fromUtf8("colorTxtRadio"));
        sizePolicy.setHeightForWidth(colorTxtRadio->sizePolicy().hasHeightForWidth());
        colorTxtRadio->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorTxtRadio, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        overrideCheckbox = new QCheckBox(PixmapExportDialog);
        overrideCheckbox->setObjectName(QString::fromUtf8("overrideCheckbox"));
        sizePolicy.setHeightForWidth(overrideCheckbox->sizePolicy().hasHeightForWidth());
        overrideCheckbox->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, overrideCheckbox);

        overrideValue = new QSpinBox(PixmapExportDialog);
        overrideValue->setObjectName(QString::fromUtf8("overrideValue"));
        overrideValue->setEnabled(false);
        sizePolicy.setHeightForWidth(overrideValue->sizePolicy().hasHeightForWidth());
        overrideValue->setSizePolicy(sizePolicy);
        overrideValue->setMaximum(255);
        overrideValue->setValue(255);

        formLayout->setWidget(1, QFormLayout::SpanningRole, overrideValue);


        gridLayout_2->addLayout(formLayout, 0, 1, 1, 1);

        exportButton = new QDialogButtonBox(PixmapExportDialog);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exportButton->sizePolicy().hasHeightForWidth());
        exportButton->setSizePolicy(sizePolicy1);
        exportButton->setStyleSheet(QString::fromUtf8(""));
        exportButton->setOrientation(Qt::Horizontal);
        exportButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(exportButton, 1, 1, 1, 1);


        retranslateUi(PixmapExportDialog);
        QObject::connect(exportButton, SIGNAL(accepted()), PixmapExportDialog, SLOT(accept()));
        QObject::connect(exportButton, SIGNAL(rejected()), PixmapExportDialog, SLOT(reject()));
        QObject::connect(overrideCheckbox, SIGNAL(toggled(bool)), overrideValue, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PixmapExportDialog);
    } // setupUi

    void retranslateUi(QDialog *PixmapExportDialog)
    {
        PixmapExportDialog->setWindowTitle(QCoreApplication::translate("PixmapExportDialog", "Export as portable anymap", nullptr));
        mapTypeLabel->setText(QCoreApplication::translate("PixmapExportDialog", "Map type:", nullptr));
        grayscaleBinRadio->setText(QCoreApplication::translate("PixmapExportDialog", "Grayscale", nullptr));
        colorBinRadio->setText(QCoreApplication::translate("PixmapExportDialog", "Color", nullptr));
        grayscaleTxtRadio->setText(QCoreApplication::translate("PixmapExportDialog", "Grayscale", nullptr));
        textLabel->setText(QCoreApplication::translate("PixmapExportDialog", "Text", nullptr));
        binLabel->setText(QCoreApplication::translate("PixmapExportDialog", "Binary", nullptr));
        colorTxtRadio->setText(QCoreApplication::translate("PixmapExportDialog", "Color", nullptr));
        overrideCheckbox->setText(QCoreApplication::translate("PixmapExportDialog", "Override brightness", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PixmapExportDialog: public Ui_PixmapExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTABLE_ANYMAP_EXPORT_DIALOG_H
