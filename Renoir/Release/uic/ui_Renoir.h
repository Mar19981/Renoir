/********************************************************************************
** Form generated from reading UI file 'Renoir.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENOIR_H
#define UI_RENOIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenoirClass
{
public:
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionClose;
    QAction *actionImage_sequence;
    QAction *actionKernel;
    QAction *actionSharpen;
    QAction *actionGaussian_blur;
    QAction *actionEdge_detect;
    QAction *actionDither;
    QAction *actionTreshold;
    QAction *actionPortable_anymap;
    QAction *actionAbout_Qt;
    QAction *actionNoise;
    QAction *actionMandelbrot;
    QAction *actionJulia;
    QAction *actionNew;
    QAction *actionBrush;
    QAction *actionEraser;
    QAction *actionRectangle;
    QAction *actionEllipse;
    QAction *actionMove;
    QAction *actionText;
    QAction *actionBase64;
    QAction *actionLSystem;
    QAction *actionBrush_size;
    QAction *actionFill;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionShape_properties;
    QAction *actionText_properties;
    QAction *actionInsert;
    QWidget *centralWidget;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QVBoxLayout *sideBarLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpinBox *redSpin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSpinBox *greenSpin;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QSpinBox *blueSpin;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *hueSpin;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *saturationSpin;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpinBox *valueSpin;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QPushButton *color;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QDoubleSpinBox *alphaSpin;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *comboBox;
    QPushButton *lockButton;
    QListWidget *layers;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *newButton;
    QPushButton *removeButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *upButton;
    QPushButton *downButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *renameButton;
    QPushButton *hideButton;
    QWidget *canvasWidget;
    QMenuBar *mainMenu;
    QMenu *menuFile;
    QMenu *menuExport_as;
    QMenu *menuFilters;
    QMenu *About;
    QMenu *menuGenerate;
    QMenu *menuFractal;
    QToolBar *tools;
    QStatusBar *statusBar;
    QToolBar *settingsBar;

    void setupUi(QMainWindow *RenoirClass)
    {
        if (RenoirClass->objectName().isEmpty())
            RenoirClass->setObjectName(QString::fromUtf8("RenoirClass"));
        RenoirClass->setWindowModality(Qt::NonModal);
        RenoirClass->resize(727, 514);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RenoirClass->sizePolicy().hasHeightForWidth());
        RenoirClass->setSizePolicy(sizePolicy);
        RenoirClass->setStyleSheet(QString::fromUtf8("sideBarLayout\n"
"{\n"
"	position: absolute;\n"
"	width: 20%;\n"
"	height: 100%;\n"
"	left: 80%;\n"
"}"));
        actionOpen = new QAction(RenoirClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave_as = new QAction(RenoirClass);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionClose = new QAction(RenoirClass);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionImage_sequence = new QAction(RenoirClass);
        actionImage_sequence->setObjectName(QString::fromUtf8("actionImage_sequence"));
        actionKernel = new QAction(RenoirClass);
        actionKernel->setObjectName(QString::fromUtf8("actionKernel"));
        actionSharpen = new QAction(RenoirClass);
        actionSharpen->setObjectName(QString::fromUtf8("actionSharpen"));
        actionGaussian_blur = new QAction(RenoirClass);
        actionGaussian_blur->setObjectName(QString::fromUtf8("actionGaussian_blur"));
        actionEdge_detect = new QAction(RenoirClass);
        actionEdge_detect->setObjectName(QString::fromUtf8("actionEdge_detect"));
        actionDither = new QAction(RenoirClass);
        actionDither->setObjectName(QString::fromUtf8("actionDither"));
        actionTreshold = new QAction(RenoirClass);
        actionTreshold->setObjectName(QString::fromUtf8("actionTreshold"));
        actionPortable_anymap = new QAction(RenoirClass);
        actionPortable_anymap->setObjectName(QString::fromUtf8("actionPortable_anymap"));
        actionAbout_Qt = new QAction(RenoirClass);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionNoise = new QAction(RenoirClass);
        actionNoise->setObjectName(QString::fromUtf8("actionNoise"));
        actionMandelbrot = new QAction(RenoirClass);
        actionMandelbrot->setObjectName(QString::fromUtf8("actionMandelbrot"));
        actionJulia = new QAction(RenoirClass);
        actionJulia->setObjectName(QString::fromUtf8("actionJulia"));
        actionNew = new QAction(RenoirClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionBrush = new QAction(RenoirClass);
        actionBrush->setObjectName(QString::fromUtf8("actionBrush"));
        actionEraser = new QAction(RenoirClass);
        actionEraser->setObjectName(QString::fromUtf8("actionEraser"));
        actionRectangle = new QAction(RenoirClass);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionEllipse = new QAction(RenoirClass);
        actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
        actionMove = new QAction(RenoirClass);
        actionMove->setObjectName(QString::fromUtf8("actionMove"));
        actionText = new QAction(RenoirClass);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionBase64 = new QAction(RenoirClass);
        actionBase64->setObjectName(QString::fromUtf8("actionBase64"));
        actionLSystem = new QAction(RenoirClass);
        actionLSystem->setObjectName(QString::fromUtf8("actionLSystem"));
        actionBrush_size = new QAction(RenoirClass);
        actionBrush_size->setObjectName(QString::fromUtf8("actionBrush_size"));
        actionFill = new QAction(RenoirClass);
        actionFill->setObjectName(QString::fromUtf8("actionFill"));
        actionZoom_in = new QAction(RenoirClass);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        actionZoom_out = new QAction(RenoirClass);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        actionShape_properties = new QAction(RenoirClass);
        actionShape_properties->setObjectName(QString::fromUtf8("actionShape_properties"));
        actionText_properties = new QAction(RenoirClass);
        actionText_properties->setObjectName(QString::fromUtf8("actionText_properties"));
        actionInsert = new QAction(RenoirClass);
        actionInsert->setObjectName(QString::fromUtf8("actionInsert"));
        centralWidget = new QWidget(RenoirClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(370, -40, 296, 505));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        sideBarLayout = new QVBoxLayout();
        sideBarLayout->setSpacing(6);
        sideBarLayout->setObjectName(QString::fromUtf8("sideBarLayout"));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        redSpin = new QSpinBox(groupBox_2);
        redSpin->setObjectName(QString::fromUtf8("redSpin"));
        redSpin->setEnabled(false);
        redSpin->setMaximum(255);

        horizontalLayout_7->addWidget(redSpin);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        greenSpin = new QSpinBox(groupBox_2);
        greenSpin->setObjectName(QString::fromUtf8("greenSpin"));
        greenSpin->setEnabled(false);
        greenSpin->setMaximum(255);

        horizontalLayout_8->addWidget(greenSpin);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        blueSpin = new QSpinBox(groupBox_2);
        blueSpin->setObjectName(QString::fromUtf8("blueSpin"));
        blueSpin->setEnabled(false);
        blueSpin->setMaximum(255);

        horizontalLayout_9->addWidget(blueSpin);


        verticalLayout_3->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        hueSpin = new QSpinBox(groupBox_2);
        hueSpin->setObjectName(QString::fromUtf8("hueSpin"));
        hueSpin->setEnabled(false);
        hueSpin->setMaximum(359);

        horizontalLayout_5->addWidget(hueSpin);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        saturationSpin = new QSpinBox(groupBox_2);
        saturationSpin->setObjectName(QString::fromUtf8("saturationSpin"));
        saturationSpin->setEnabled(false);
        saturationSpin->setMaximum(100);

        horizontalLayout_6->addWidget(saturationSpin);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        valueSpin = new QSpinBox(groupBox_2);
        valueSpin->setObjectName(QString::fromUtf8("valueSpin"));
        valueSpin->setEnabled(false);
        valueSpin->setMaximum(100);

        horizontalLayout_4->addWidget(valueSpin);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);

        color = new QPushButton(groupBox_2);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout_12->addWidget(color);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        alphaSpin = new QDoubleSpinBox(groupBox_2);
        alphaSpin->setObjectName(QString::fromUtf8("alphaSpin"));
        alphaSpin->setMaximum(1.000000000000000);
        alphaSpin->setSingleStep(0.010000000000000);
        alphaSpin->setValue(1.000000000000000);

        horizontalLayout_10->addWidget(alphaSpin);


        gridLayout->addLayout(horizontalLayout_10, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        sideBarLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        comboBox = new QComboBox(groupBox);
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

        horizontalLayout_11->addWidget(comboBox);

        lockButton = new QPushButton(groupBox);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));

        horizontalLayout_11->addWidget(lockButton);


        verticalLayout_4->addLayout(horizontalLayout_11);

        layers = new QListWidget(groupBox);
        layers->setObjectName(QString::fromUtf8("layers"));

        verticalLayout_4->addWidget(layers);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newButton = new QPushButton(groupBox);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        horizontalLayout->addWidget(newButton);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout->addWidget(removeButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        upButton = new QPushButton(groupBox);
        upButton->setObjectName(QString::fromUtf8("upButton"));

        horizontalLayout_2->addWidget(upButton);

        downButton = new QPushButton(groupBox);
        downButton->setObjectName(QString::fromUtf8("downButton"));

        horizontalLayout_2->addWidget(downButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        renameButton = new QPushButton(groupBox);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));

        horizontalLayout_3->addWidget(renameButton);

        hideButton = new QPushButton(groupBox);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));

        horizontalLayout_3->addWidget(hideButton);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout);


        gridLayout_3->addLayout(verticalLayout_4, 0, 1, 1, 1);


        sideBarLayout->addWidget(groupBox);


        gridLayout_4->addLayout(sideBarLayout, 0, 0, 1, 1);

        canvasWidget = new QWidget(centralWidget);
        canvasWidget->setObjectName(QString::fromUtf8("canvasWidget"));
        canvasWidget->setGeometry(QRect(50, 30, 311, 391));
        RenoirClass->setCentralWidget(centralWidget);
        mainMenu = new QMenuBar(RenoirClass);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(0, 0, 727, 22));
        menuFile = new QMenu(mainMenu);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport_as = new QMenu(menuFile);
        menuExport_as->setObjectName(QString::fromUtf8("menuExport_as"));
        menuFilters = new QMenu(mainMenu);
        menuFilters->setObjectName(QString::fromUtf8("menuFilters"));
        About = new QMenu(mainMenu);
        About->setObjectName(QString::fromUtf8("About"));
        menuGenerate = new QMenu(mainMenu);
        menuGenerate->setObjectName(QString::fromUtf8("menuGenerate"));
        menuFractal = new QMenu(menuGenerate);
        menuFractal->setObjectName(QString::fromUtf8("menuFractal"));
        RenoirClass->setMenuBar(mainMenu);
        tools = new QToolBar(RenoirClass);
        tools->setObjectName(QString::fromUtf8("tools"));
        tools->setAllowedAreas(Qt::LeftToolBarArea);
        RenoirClass->addToolBar(Qt::LeftToolBarArea, tools);
        statusBar = new QStatusBar(RenoirClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        RenoirClass->setStatusBar(statusBar);
        settingsBar = new QToolBar(RenoirClass);
        settingsBar->setObjectName(QString::fromUtf8("settingsBar"));
        settingsBar->setMovable(false);
        settingsBar->setAllowedAreas(Qt::TopToolBarArea);
        settingsBar->setFloatable(false);
        RenoirClass->addToolBar(Qt::TopToolBarArea, settingsBar);

        mainMenu->addAction(menuFile->menuAction());
        mainMenu->addAction(menuFilters->menuAction());
        mainMenu->addAction(menuGenerate->menuAction());
        mainMenu->addAction(About->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionInsert);
        menuFile->addSeparator();
        menuFile->addAction(menuExport_as->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuExport_as->addAction(actionPortable_anymap);
        menuExport_as->addAction(actionImage_sequence);
        menuExport_as->addAction(actionBase64);
        menuFilters->addAction(actionKernel);
        menuFilters->addAction(actionSharpen);
        menuFilters->addAction(actionGaussian_blur);
        menuFilters->addAction(actionEdge_detect);
        menuFilters->addAction(actionDither);
        menuFilters->addAction(actionTreshold);
        About->addAction(actionAbout_Qt);
        menuGenerate->addAction(actionNoise);
        menuGenerate->addAction(menuFractal->menuAction());
        menuFractal->addAction(actionMandelbrot);
        menuFractal->addAction(actionJulia);
        menuFractal->addAction(actionLSystem);
        tools->addAction(actionMove);
        tools->addAction(actionBrush);
        tools->addAction(actionEraser);
        tools->addAction(actionRectangle);
        tools->addAction(actionEllipse);
        tools->addAction(actionText);
        tools->addAction(actionZoom_in);
        tools->addAction(actionZoom_out);
        settingsBar->addAction(actionBrush_size);
        settingsBar->addAction(actionFill);
        settingsBar->addAction(actionShape_properties);
        settingsBar->addAction(actionText_properties);

        retranslateUi(RenoirClass);

        QMetaObject::connectSlotsByName(RenoirClass);
    } // setupUi

    void retranslateUi(QMainWindow *RenoirClass)
    {
        RenoirClass->setWindowTitle(QCoreApplication::translate("RenoirClass", "Renoir", nullptr));
        actionOpen->setText(QCoreApplication::translate("RenoirClass", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("RenoirClass", "Save as", nullptr));
        actionClose->setText(QCoreApplication::translate("RenoirClass", "Close", nullptr));
        actionImage_sequence->setText(QCoreApplication::translate("RenoirClass", "Image sequence", nullptr));
        actionKernel->setText(QCoreApplication::translate("RenoirClass", "Kernel", nullptr));
        actionSharpen->setText(QCoreApplication::translate("RenoirClass", "Sharpen", nullptr));
        actionGaussian_blur->setText(QCoreApplication::translate("RenoirClass", "Gaussian blur", nullptr));
        actionEdge_detect->setText(QCoreApplication::translate("RenoirClass", "Edge detect", nullptr));
        actionDither->setText(QCoreApplication::translate("RenoirClass", "Dither", nullptr));
        actionTreshold->setText(QCoreApplication::translate("RenoirClass", "Treshold", nullptr));
        actionPortable_anymap->setText(QCoreApplication::translate("RenoirClass", "Portable anymap", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("RenoirClass", "About Qt", nullptr));
        actionNoise->setText(QCoreApplication::translate("RenoirClass", "Noise", nullptr));
        actionMandelbrot->setText(QCoreApplication::translate("RenoirClass", "Mandelbrot", nullptr));
        actionJulia->setText(QCoreApplication::translate("RenoirClass", "Julia", nullptr));
        actionNew->setText(QCoreApplication::translate("RenoirClass", "New", nullptr));
        actionBrush->setText(QCoreApplication::translate("RenoirClass", "Brush", nullptr));
        actionEraser->setText(QCoreApplication::translate("RenoirClass", "Eraser", nullptr));
        actionRectangle->setText(QCoreApplication::translate("RenoirClass", "Rectangle", nullptr));
        actionEllipse->setText(QCoreApplication::translate("RenoirClass", "Ellipse", nullptr));
        actionMove->setText(QCoreApplication::translate("RenoirClass", "Move", nullptr));
        actionText->setText(QCoreApplication::translate("RenoirClass", "Text", nullptr));
        actionBase64->setText(QCoreApplication::translate("RenoirClass", "Base64", nullptr));
        actionLSystem->setText(QCoreApplication::translate("RenoirClass", "L-System", nullptr));
        actionBrush_size->setText(QCoreApplication::translate("RenoirClass", "Brush size", nullptr));
        actionFill->setText(QCoreApplication::translate("RenoirClass", "Fill", nullptr));
        actionZoom_in->setText(QCoreApplication::translate("RenoirClass", "Zoom in", nullptr));
        actionZoom_out->setText(QCoreApplication::translate("RenoirClass", "Zoom out", nullptr));
        actionShape_properties->setText(QCoreApplication::translate("RenoirClass", "Shape properties", nullptr));
        actionText_properties->setText(QCoreApplication::translate("RenoirClass", "Text properties", nullptr));
        actionInsert->setText(QCoreApplication::translate("RenoirClass", "Insert", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RenoirClass", "Color", nullptr));
        label->setText(QCoreApplication::translate("RenoirClass", "R:", nullptr));
        label_2->setText(QCoreApplication::translate("RenoirClass", "G:", nullptr));
        label_4->setText(QCoreApplication::translate("RenoirClass", "B:", nullptr));
        label_5->setText(QCoreApplication::translate("RenoirClass", "H:", nullptr));
        label_6->setText(QCoreApplication::translate("RenoirClass", "S:", nullptr));
        label_7->setText(QCoreApplication::translate("RenoirClass", "V:", nullptr));
        label_9->setText(QCoreApplication::translate("RenoirClass", "Pick color:", nullptr));
        color->setText(QString());
        label_8->setText(QCoreApplication::translate("RenoirClass", "Opacity:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RenoirClass", "Layers", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("RenoirClass", "Normal", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("RenoirClass", "Add", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("RenoirClass", "Lighten", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("RenoirClass", "Multiply", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("RenoirClass", "Screen", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("RenoirClass", "Darken", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("RenoirClass", "Color Burn", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("RenoirClass", "Color Dodge", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("RenoirClass", "Overlay", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("RenoirClass", "Soft Light", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("RenoirClass", "Hard Light", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("RenoirClass", "Difference", nullptr));

        lockButton->setText(QCoreApplication::translate("RenoirClass", "Lock", nullptr));
        newButton->setText(QCoreApplication::translate("RenoirClass", "New", nullptr));
        removeButton->setText(QCoreApplication::translate("RenoirClass", "Remove", nullptr));
        upButton->setText(QCoreApplication::translate("RenoirClass", "Up", nullptr));
        downButton->setText(QCoreApplication::translate("RenoirClass", "Down", nullptr));
        renameButton->setText(QCoreApplication::translate("RenoirClass", "Rename", nullptr));
        hideButton->setText(QCoreApplication::translate("RenoirClass", "Hide", nullptr));
        menuFile->setTitle(QCoreApplication::translate("RenoirClass", "File", nullptr));
        menuExport_as->setTitle(QCoreApplication::translate("RenoirClass", "Export as...", nullptr));
        menuFilters->setTitle(QCoreApplication::translate("RenoirClass", "Filters", nullptr));
        About->setTitle(QCoreApplication::translate("RenoirClass", "About", nullptr));
        menuGenerate->setTitle(QCoreApplication::translate("RenoirClass", "Generate", nullptr));
        menuFractal->setTitle(QCoreApplication::translate("RenoirClass", "Fractal", nullptr));
        settingsBar->setWindowTitle(QCoreApplication::translate("RenoirClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenoirClass: public Ui_RenoirClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENOIR_H
