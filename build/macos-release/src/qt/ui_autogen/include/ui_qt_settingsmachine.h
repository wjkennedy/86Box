/********************************************************************************
** Form generated from reading UI file 'qt_settingsmachine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSMACHINE_H
#define UI_QT_SETTINGSMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMachine
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidgetMachine;
    QWidget *tabMachine;
    QVBoxLayout *verticalLayoutMachine;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelSearch;
    QLineEdit *lineEditSearch;
    QLabel *labelMachineType;
    QComboBox *comboBoxMachineType;
    QLabel *labelMachine;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxMachine;
    QPushButton *pushButtonConfigure;
    QLabel *labelMemory;
    QSpinBox *spinBoxRAM;
    QHBoxLayout *groupBoxesLayout;
    QVBoxLayout *verticalLayoutTimeSync;
    QGroupBox *groupBoxTimeSync;
    QVBoxLayout *groupBoxTimeSyncLayout;
    QRadioButton *radioButtonDisabled;
    QRadioButton *radioButtonLocalTime;
    QRadioButton *radioButtonUTC;
    QSpacerItem *timeSyncVerticalSpacer;
    QSpacerItem *groupBoxesHorizontalSpacer;
    QSpacerItem *verticalSpacerMachine;
    QWidget *tabProcessor;
    QVBoxLayout *verticalLayoutProcessor;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *labelCPU;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxCPU;
    QLabel *labelSpeed;
    QComboBox *comboBoxSpeed;
    QLabel *labelFPU;
    QComboBox *comboBoxFPU;
    QLabel *labelWaitStates;
    QComboBox *comboBoxWaitStates;
    QHBoxLayout *softFloatLayout;
    QCheckBox *checkBoxFPUSoftfloat;
    QLabel *softFloatWarningIcon;
    QLabel *softFloatWarningText;
    QSpacerItem *softFloatHorizontalSpacer;
    QSpacerItem *verticalSpacerProcessor;
    QWidget *tabPerformance;
    QVBoxLayout *verticalLayoutPerformance;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QLabel *labelPITMode;
    QComboBox *comboBoxPitMode;
    QHBoxLayout *overrideInterpreterLayout;
    QCheckBox *checkBoxOverrideInterpreter;
    QHBoxLayout *dynamicRecompilerLayout;
    QCheckBox *checkBoxDynamicRecompiler;
    QHBoxLayout *groupBoxesLayout_2;
    QVBoxLayout *verticalLayoutCPUFrameSize;
    QGroupBox *groupBoxCPUFrameSize;
    QVBoxLayout *groupBoxCPUFrameSizeLayout;
    QRadioButton *radioButtonLargerFrames;
    QRadioButton *radioButtonSmallerFrames;
    QSpacerItem *frameSizeVerticalSpacer;
    QSpacerItem *groupBoxesHorizontalSpacer_2;
    QSpacerItem *verticalSpacerPerformance;

    void setupUi(QWidget *SettingsMachine)
    {
        if (SettingsMachine->objectName().isEmpty())
            SettingsMachine->setObjectName(QString::fromUtf8("SettingsMachine"));
        SettingsMachine->resize(458, 458);
        vboxLayout = new QVBoxLayout(SettingsMachine);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetMachine = new QTabWidget(SettingsMachine);
        tabWidgetMachine->setObjectName(QString::fromUtf8("tabWidgetMachine"));
        tabMachine = new QWidget();
        tabMachine->setObjectName(QString::fromUtf8("tabMachine"));
        verticalLayoutMachine = new QVBoxLayout(tabMachine);
        verticalLayoutMachine->setObjectName(QString::fromUtf8("verticalLayoutMachine"));
        widget = new QWidget(tabMachine);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelSearch = new QLabel(widget);
        labelSearch->setObjectName(QString::fromUtf8("labelSearch"));

        gridLayout->addWidget(labelSearch, 0, 0, 1, 1);

        lineEditSearch = new QLineEdit(widget);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        gridLayout->addWidget(lineEditSearch, 0, 1, 1, 1);

        labelMachineType = new QLabel(widget);
        labelMachineType->setObjectName(QString::fromUtf8("labelMachineType"));

        gridLayout->addWidget(labelMachineType, 1, 0, 1, 1);

        comboBoxMachineType = new QComboBox(widget);
        comboBoxMachineType->setObjectName(QString::fromUtf8("comboBoxMachineType"));
        comboBoxMachineType->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxMachineType, 1, 1, 1, 1);

        labelMachine = new QLabel(widget);
        labelMachine->setObjectName(QString::fromUtf8("labelMachine"));

        gridLayout->addWidget(labelMachine, 2, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxMachine = new QComboBox(widget_2);
        comboBoxMachine->setObjectName(QString::fromUtf8("comboBoxMachine"));
        comboBoxMachine->setMaxVisibleItems(30);

        horizontalLayout_2->addWidget(comboBoxMachine);

        pushButtonConfigure = new QPushButton(widget_2);
        pushButtonConfigure->setObjectName(QString::fromUtf8("pushButtonConfigure"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonConfigure->sizePolicy().hasHeightForWidth());
        pushButtonConfigure->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButtonConfigure);


        gridLayout->addWidget(widget_2, 2, 1, 1, 1);

        labelMemory = new QLabel(widget);
        labelMemory->setObjectName(QString::fromUtf8("labelMemory"));

        gridLayout->addWidget(labelMemory, 4, 0, 1, 1);

        spinBoxRAM = new QSpinBox(widget);
        spinBoxRAM->setObjectName(QString::fromUtf8("spinBoxRAM"));
        sizePolicy.setHeightForWidth(spinBoxRAM->sizePolicy().hasHeightForWidth());
        spinBoxRAM->setSizePolicy(sizePolicy);

        gridLayout->addWidget(spinBoxRAM, 4, 1, 1, 1);


        verticalLayoutMachine->addWidget(widget);

        groupBoxesLayout = new QHBoxLayout();
        groupBoxesLayout->setObjectName(QString::fromUtf8("groupBoxesLayout"));
        verticalLayoutTimeSync = new QVBoxLayout();
        verticalLayoutTimeSync->setObjectName(QString::fromUtf8("verticalLayoutTimeSync"));
        groupBoxTimeSync = new QGroupBox(tabMachine);
        groupBoxTimeSync->setObjectName(QString::fromUtf8("groupBoxTimeSync"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxTimeSync->sizePolicy().hasHeightForWidth());
        groupBoxTimeSync->setSizePolicy(sizePolicy1);
        groupBoxTimeSyncLayout = new QVBoxLayout(groupBoxTimeSync);
        groupBoxTimeSyncLayout->setObjectName(QString::fromUtf8("groupBoxTimeSyncLayout"));
        radioButtonDisabled = new QRadioButton(groupBoxTimeSync);
        radioButtonDisabled->setObjectName(QString::fromUtf8("radioButtonDisabled"));

        groupBoxTimeSyncLayout->addWidget(radioButtonDisabled);

        radioButtonLocalTime = new QRadioButton(groupBoxTimeSync);
        radioButtonLocalTime->setObjectName(QString::fromUtf8("radioButtonLocalTime"));

        groupBoxTimeSyncLayout->addWidget(radioButtonLocalTime);

        radioButtonUTC = new QRadioButton(groupBoxTimeSync);
        radioButtonUTC->setObjectName(QString::fromUtf8("radioButtonUTC"));

        groupBoxTimeSyncLayout->addWidget(radioButtonUTC);


        verticalLayoutTimeSync->addWidget(groupBoxTimeSync);

        timeSyncVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTimeSync->addItem(timeSyncVerticalSpacer);


        groupBoxesLayout->addLayout(verticalLayoutTimeSync);

        groupBoxesHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        groupBoxesLayout->addItem(groupBoxesHorizontalSpacer);


        verticalLayoutMachine->addLayout(groupBoxesLayout);

        verticalSpacerMachine = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutMachine->addItem(verticalSpacerMachine);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/machine_tab.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMachine->addTab(tabMachine, icon, QString());
        tabProcessor = new QWidget();
        tabProcessor->setObjectName(QString::fromUtf8("tabProcessor"));
        verticalLayoutProcessor = new QVBoxLayout(tabProcessor);
        verticalLayoutProcessor->setObjectName(QString::fromUtf8("verticalLayoutProcessor"));
        widget_3 = new QWidget(tabProcessor);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelCPU = new QLabel(widget_3);
        labelCPU->setObjectName(QString::fromUtf8("labelCPU"));

        gridLayout_2->addWidget(labelCPU, 0, 0, 1, 1);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBoxCPU = new QComboBox(widget_4);
        comboBoxCPU->setObjectName(QString::fromUtf8("comboBoxCPU"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxCPU->sizePolicy().hasHeightForWidth());
        comboBoxCPU->setSizePolicy(sizePolicy2);
        comboBoxCPU->setMaxVisibleItems(30);

        horizontalLayout_3->addWidget(comboBoxCPU);

        labelSpeed = new QLabel(widget_4);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));
        labelSpeed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelSpeed);

        comboBoxSpeed = new QComboBox(widget_4);
        comboBoxSpeed->setObjectName(QString::fromUtf8("comboBoxSpeed"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxSpeed->sizePolicy().hasHeightForWidth());
        comboBoxSpeed->setSizePolicy(sizePolicy3);
        comboBoxSpeed->setMaxVisibleItems(30);

        horizontalLayout_3->addWidget(comboBoxSpeed);


        gridLayout_2->addWidget(widget_4, 0, 1, 1, 1);

        labelFPU = new QLabel(widget_3);
        labelFPU->setObjectName(QString::fromUtf8("labelFPU"));

        gridLayout_2->addWidget(labelFPU, 1, 0, 1, 1);

        comboBoxFPU = new QComboBox(widget_3);
        comboBoxFPU->setObjectName(QString::fromUtf8("comboBoxFPU"));
        comboBoxFPU->setMaxVisibleItems(30);

        gridLayout_2->addWidget(comboBoxFPU, 1, 1, 1, 1);

        labelWaitStates = new QLabel(widget_3);
        labelWaitStates->setObjectName(QString::fromUtf8("labelWaitStates"));

        gridLayout_2->addWidget(labelWaitStates, 2, 0, 1, 1);

        comboBoxWaitStates = new QComboBox(widget_3);
        comboBoxWaitStates->setObjectName(QString::fromUtf8("comboBoxWaitStates"));
        sizePolicy2.setHeightForWidth(comboBoxWaitStates->sizePolicy().hasHeightForWidth());
        comboBoxWaitStates->setSizePolicy(sizePolicy2);
        comboBoxWaitStates->setMaxVisibleItems(30);

        gridLayout_2->addWidget(comboBoxWaitStates, 2, 1, 1, 1);


        verticalLayoutProcessor->addWidget(widget_3);

        softFloatLayout = new QHBoxLayout();
        softFloatLayout->setObjectName(QString::fromUtf8("softFloatLayout"));
        checkBoxFPUSoftfloat = new QCheckBox(tabProcessor);
        checkBoxFPUSoftfloat->setObjectName(QString::fromUtf8("checkBoxFPUSoftfloat"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(3);
        sizePolicy4.setVerticalStretch(3);
        sizePolicy4.setHeightForWidth(checkBoxFPUSoftfloat->sizePolicy().hasHeightForWidth());
        checkBoxFPUSoftfloat->setSizePolicy(sizePolicy4);

        softFloatLayout->addWidget(checkBoxFPUSoftfloat);

        softFloatWarningIcon = new QLabel(tabProcessor);
        softFloatWarningIcon->setObjectName(QString::fromUtf8("softFloatWarningIcon"));

        softFloatLayout->addWidget(softFloatWarningIcon);

        softFloatWarningText = new QLabel(tabProcessor);
        softFloatWarningText->setObjectName(QString::fromUtf8("softFloatWarningText"));

        softFloatLayout->addWidget(softFloatWarningText);

        softFloatHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        softFloatLayout->addItem(softFloatHorizontalSpacer);


        verticalLayoutProcessor->addLayout(softFloatLayout);

        verticalSpacerProcessor = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutProcessor->addItem(verticalSpacerProcessor);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/processor.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMachine->addTab(tabProcessor, icon1, QString());
        tabPerformance = new QWidget();
        tabPerformance->setObjectName(QString::fromUtf8("tabPerformance"));
        verticalLayoutPerformance = new QVBoxLayout(tabPerformance);
        verticalLayoutPerformance->setObjectName(QString::fromUtf8("verticalLayoutPerformance"));
        widget_5 = new QWidget(tabPerformance);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        labelPITMode = new QLabel(widget_5);
        labelPITMode->setObjectName(QString::fromUtf8("labelPITMode"));

        gridLayout_3->addWidget(labelPITMode, 0, 0, 1, 1);

        comboBoxPitMode = new QComboBox(widget_5);
        comboBoxPitMode->setObjectName(QString::fromUtf8("comboBoxPitMode"));
        sizePolicy3.setHeightForWidth(comboBoxPitMode->sizePolicy().hasHeightForWidth());
        comboBoxPitMode->setSizePolicy(sizePolicy3);
        comboBoxPitMode->setMaxVisibleItems(30);

        gridLayout_3->addWidget(comboBoxPitMode, 0, 1, 1, 1);


        verticalLayoutPerformance->addWidget(widget_5);

        overrideInterpreterLayout = new QHBoxLayout();
        overrideInterpreterLayout->setObjectName(QString::fromUtf8("overrideInterpreterLayout"));
        checkBoxOverrideInterpreter = new QCheckBox(tabPerformance);
        checkBoxOverrideInterpreter->setObjectName(QString::fromUtf8("checkBoxOverrideInterpreter"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(2);
        sizePolicy5.setHeightForWidth(checkBoxOverrideInterpreter->sizePolicy().hasHeightForWidth());
        checkBoxOverrideInterpreter->setSizePolicy(sizePolicy5);

        overrideInterpreterLayout->addWidget(checkBoxOverrideInterpreter);


        verticalLayoutPerformance->addLayout(overrideInterpreterLayout);

        dynamicRecompilerLayout = new QHBoxLayout();
        dynamicRecompilerLayout->setObjectName(QString::fromUtf8("dynamicRecompilerLayout"));
        checkBoxDynamicRecompiler = new QCheckBox(tabPerformance);
        checkBoxDynamicRecompiler->setObjectName(QString::fromUtf8("checkBoxDynamicRecompiler"));
        sizePolicy5.setHeightForWidth(checkBoxDynamicRecompiler->sizePolicy().hasHeightForWidth());
        checkBoxDynamicRecompiler->setSizePolicy(sizePolicy5);

        dynamicRecompilerLayout->addWidget(checkBoxDynamicRecompiler);


        verticalLayoutPerformance->addLayout(dynamicRecompilerLayout);

        groupBoxesLayout_2 = new QHBoxLayout();
        groupBoxesLayout_2->setObjectName(QString::fromUtf8("groupBoxesLayout_2"));
        verticalLayoutCPUFrameSize = new QVBoxLayout();
        verticalLayoutCPUFrameSize->setObjectName(QString::fromUtf8("verticalLayoutCPUFrameSize"));
        groupBoxCPUFrameSize = new QGroupBox(tabPerformance);
        groupBoxCPUFrameSize->setObjectName(QString::fromUtf8("groupBoxCPUFrameSize"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBoxCPUFrameSize->sizePolicy().hasHeightForWidth());
        groupBoxCPUFrameSize->setSizePolicy(sizePolicy6);
        groupBoxCPUFrameSizeLayout = new QVBoxLayout(groupBoxCPUFrameSize);
        groupBoxCPUFrameSizeLayout->setObjectName(QString::fromUtf8("groupBoxCPUFrameSizeLayout"));
        radioButtonLargerFrames = new QRadioButton(groupBoxCPUFrameSize);
        radioButtonLargerFrames->setObjectName(QString::fromUtf8("radioButtonLargerFrames"));

        groupBoxCPUFrameSizeLayout->addWidget(radioButtonLargerFrames);

        radioButtonSmallerFrames = new QRadioButton(groupBoxCPUFrameSize);
        radioButtonSmallerFrames->setObjectName(QString::fromUtf8("radioButtonSmallerFrames"));

        groupBoxCPUFrameSizeLayout->addWidget(radioButtonSmallerFrames);


        verticalLayoutCPUFrameSize->addWidget(groupBoxCPUFrameSize);

        frameSizeVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCPUFrameSize->addItem(frameSizeVerticalSpacer);


        groupBoxesLayout_2->addLayout(verticalLayoutCPUFrameSize);

        groupBoxesHorizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        groupBoxesLayout_2->addItem(groupBoxesHorizontalSpacer_2);


        verticalLayoutPerformance->addLayout(groupBoxesLayout_2);

        verticalSpacerPerformance = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutPerformance->addItem(verticalSpacerPerformance);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/settings/qt/icons/performance.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMachine->addTab(tabPerformance, icon2, QString());

        vboxLayout->addWidget(tabWidgetMachine);

        QWidget::setTabOrder(lineEditSearch, comboBoxMachineType);
        QWidget::setTabOrder(comboBoxMachineType, comboBoxMachine);
        QWidget::setTabOrder(comboBoxMachine, pushButtonConfigure);
        QWidget::setTabOrder(pushButtonConfigure, comboBoxCPU);
        QWidget::setTabOrder(comboBoxCPU, comboBoxSpeed);
        QWidget::setTabOrder(comboBoxSpeed, comboBoxFPU);
        QWidget::setTabOrder(comboBoxFPU, comboBoxWaitStates);
        QWidget::setTabOrder(comboBoxWaitStates, spinBoxRAM);
        QWidget::setTabOrder(spinBoxRAM, checkBoxDynamicRecompiler);
        QWidget::setTabOrder(checkBoxDynamicRecompiler, checkBoxFPUSoftfloat);
        QWidget::setTabOrder(checkBoxFPUSoftfloat, radioButtonDisabled);
        QWidget::setTabOrder(radioButtonDisabled, radioButtonLocalTime);
        QWidget::setTabOrder(radioButtonLocalTime, radioButtonUTC);

        retranslateUi(SettingsMachine);

        tabWidgetMachine->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsMachine);
    } // setupUi

    void retranslateUi(QWidget *SettingsMachine)
    {
        SettingsMachine->setWindowTitle(QCoreApplication::translate("SettingsMachine", "Form", nullptr));
        labelSearch->setText(QCoreApplication::translate("SettingsMachine", "Search:", nullptr));
        labelMachineType->setText(QCoreApplication::translate("SettingsMachine", "Machine type:", nullptr));
        labelMachine->setText(QCoreApplication::translate("SettingsMachine", "Machine:", nullptr));
        pushButtonConfigure->setText(QCoreApplication::translate("SettingsMachine", "Configure", nullptr));
        labelMemory->setText(QCoreApplication::translate("SettingsMachine", "Memory:", nullptr));
        groupBoxTimeSync->setTitle(QCoreApplication::translate("SettingsMachine", "Time synchronization", nullptr));
        radioButtonDisabled->setText(QCoreApplication::translate("SettingsMachine", "Disabled", nullptr));
        radioButtonLocalTime->setText(QCoreApplication::translate("SettingsMachine", "Enabled (local time)", nullptr));
        radioButtonUTC->setText(QCoreApplication::translate("SettingsMachine", "Enabled (UTC)", nullptr));
        tabWidgetMachine->setTabText(tabWidgetMachine->indexOf(tabMachine), QCoreApplication::translate("SettingsMachine", "Machine", nullptr));
        labelCPU->setText(QCoreApplication::translate("SettingsMachine", "CPU type:", nullptr));
        labelSpeed->setText(QCoreApplication::translate("SettingsMachine", "Frequency:", nullptr));
        labelFPU->setText(QCoreApplication::translate("SettingsMachine", "FPU:", nullptr));
        labelWaitStates->setText(QCoreApplication::translate("SettingsMachine", "Wait states:", nullptr));
        checkBoxFPUSoftfloat->setText(QCoreApplication::translate("SettingsMachine", "Softfloat FPU", nullptr));
        softFloatWarningIcon->setText(QString());
        softFloatWarningText->setText(QCoreApplication::translate("SettingsMachine", "High performance impact", nullptr));
        tabWidgetMachine->setTabText(tabWidgetMachine->indexOf(tabProcessor), QCoreApplication::translate("SettingsMachine", "Processor", nullptr));
        labelPITMode->setText(QCoreApplication::translate("SettingsMachine", "PIT mode:", nullptr));
        checkBoxOverrideInterpreter->setText(QCoreApplication::translate("SettingsMachine", "Use the 486 interpreter for 286 and 386 processors", nullptr));
        checkBoxDynamicRecompiler->setText(QCoreApplication::translate("SettingsMachine", "Dynamic Recompiler", nullptr));
        groupBoxCPUFrameSize->setTitle(QCoreApplication::translate("SettingsMachine", "CPU frame size", nullptr));
        radioButtonLargerFrames->setText(QCoreApplication::translate("SettingsMachine", "Larger frames (less smooth)", nullptr));
        radioButtonSmallerFrames->setText(QCoreApplication::translate("SettingsMachine", "Smaller frames (smoother)", nullptr));
        tabWidgetMachine->setTabText(tabWidgetMachine->indexOf(tabPerformance), QCoreApplication::translate("SettingsMachine", "Performance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsMachine: public Ui_SettingsMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSMACHINE_H
