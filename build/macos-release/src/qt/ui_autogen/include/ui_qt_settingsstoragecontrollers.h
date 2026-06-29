/********************************************************************************
** Form generated from reading UI file 'qt_settingsstoragecontrollers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSSTORAGECONTROLLERS_H
#define UI_QT_SETTINGSSTORAGECONTROLLERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsStorageControllers
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidgetStorageControllers;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayoutGeneral;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelFD;
    QComboBox *comboBoxFD;
    QPushButton *pushButtonFD;
    QLabel *labelCDInterface;
    QComboBox *comboBoxCDInterface;
    QPushButton *pushButtonCDInterface;
    QGroupBox *groupBoxHD;
    QGridLayout *gridLayoutHD;
    QLabel *labelHD1;
    QComboBox *comboBoxHD1;
    QPushButton *pushButtonHD1;
    QLabel *labelHD2;
    QComboBox *comboBoxHD2;
    QPushButton *pushButtonHD2;
    QLabel *labelHD3;
    QComboBox *comboBoxHD3;
    QPushButton *pushButtonHD3;
    QLabel *labelHD4;
    QComboBox *comboBoxHD4;
    QPushButton *pushButtonHD4;
    QCheckBox *checkBoxCassette;
    QSpacerItem *verticalSpacerGeneral;
    QWidget *tabSCSIControllers;
    QVBoxLayout *verticalLayoutSCSIControllers;
    QGridLayout *gridLayoutSCSI;
    QLabel *labelSCSI1;
    QComboBox *comboBoxSCSI1;
    QPushButton *pushButtonSCSI1;
    QLabel *labelSCSI2;
    QComboBox *comboBoxSCSI2;
    QPushButton *pushButtonSCSI2;
    QLabel *labelSCSI3;
    QComboBox *comboBoxSCSI3;
    QPushButton *pushButtonSCSI3;
    QLabel *labelSCSI4;
    QComboBox *comboBoxSCSI4;
    QPushButton *pushButtonSCSI4;
    QSpacerItem *verticalSpacerSCSIControllers;

    void setupUi(QWidget *SettingsStorageControllers)
    {
        if (SettingsStorageControllers->objectName().isEmpty())
            SettingsStorageControllers->setObjectName(QString::fromUtf8("SettingsStorageControllers"));
        SettingsStorageControllers->resize(400, 466);
        vboxLayout = new QVBoxLayout(SettingsStorageControllers);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetStorageControllers = new QTabWidget(SettingsStorageControllers);
        tabWidgetStorageControllers->setObjectName(QString::fromUtf8("tabWidgetStorageControllers"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayoutGeneral = new QVBoxLayout(tabGeneral);
        verticalLayoutGeneral->setObjectName(QString::fromUtf8("verticalLayoutGeneral"));
        widget = new QWidget(tabGeneral);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelFD = new QLabel(widget);
        labelFD->setObjectName(QString::fromUtf8("labelFD"));

        gridLayout->addWidget(labelFD, 0, 0, 1, 1);

        comboBoxFD = new QComboBox(widget);
        comboBoxFD->setObjectName(QString::fromUtf8("comboBoxFD"));
        comboBoxFD->setMaxVisibleItems(30);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxFD->sizePolicy().hasHeightForWidth());
        comboBoxFD->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxFD, 0, 1, 1, 1);

        pushButtonFD = new QPushButton(widget);
        pushButtonFD->setObjectName(QString::fromUtf8("pushButtonFD"));

        gridLayout->addWidget(pushButtonFD, 0, 2, 1, 1);

        labelCDInterface = new QLabel(widget);
        labelCDInterface->setObjectName(QString::fromUtf8("labelCDInterface"));

        gridLayout->addWidget(labelCDInterface, 1, 0, 1, 1);

        comboBoxCDInterface = new QComboBox(widget);
        comboBoxCDInterface->setObjectName(QString::fromUtf8("comboBoxCDInterface"));
        comboBoxCDInterface->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxCDInterface->sizePolicy().hasHeightForWidth());
        comboBoxCDInterface->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxCDInterface, 1, 1, 1, 1);

        pushButtonCDInterface = new QPushButton(widget);
        pushButtonCDInterface->setObjectName(QString::fromUtf8("pushButtonCDInterface"));

        gridLayout->addWidget(pushButtonCDInterface, 1, 2, 1, 1);


        verticalLayoutGeneral->addWidget(widget);

        groupBoxHD = new QGroupBox(tabGeneral);
        groupBoxHD->setObjectName(QString::fromUtf8("groupBoxHD"));
        gridLayoutHD = new QGridLayout(groupBoxHD);
        gridLayoutHD->setObjectName(QString::fromUtf8("gridLayoutHD"));
        labelHD1 = new QLabel(groupBoxHD);
        labelHD1->setObjectName(QString::fromUtf8("labelHD1"));

        gridLayoutHD->addWidget(labelHD1, 0, 0, 1, 1);

        comboBoxHD1 = new QComboBox(groupBoxHD);
        comboBoxHD1->setObjectName(QString::fromUtf8("comboBoxHD1"));
        sizePolicy.setHeightForWidth(comboBoxHD1->sizePolicy().hasHeightForWidth());
        comboBoxHD1->setSizePolicy(sizePolicy);
        comboBoxHD1->setMaxVisibleItems(30);

        gridLayoutHD->addWidget(comboBoxHD1, 0, 2, 1, 1);

        pushButtonHD1 = new QPushButton(groupBoxHD);
        pushButtonHD1->setObjectName(QString::fromUtf8("pushButtonHD1"));

        gridLayoutHD->addWidget(pushButtonHD1, 0, 3, 1, 1);

        labelHD2 = new QLabel(groupBoxHD);
        labelHD2->setObjectName(QString::fromUtf8("labelHD2"));

        gridLayoutHD->addWidget(labelHD2, 1, 0, 1, 1);

        comboBoxHD2 = new QComboBox(groupBoxHD);
        comboBoxHD2->setObjectName(QString::fromUtf8("comboBoxHD2"));
        sizePolicy.setHeightForWidth(comboBoxHD2->sizePolicy().hasHeightForWidth());
        comboBoxHD2->setSizePolicy(sizePolicy);
        comboBoxHD2->setMaxVisibleItems(30);

        gridLayoutHD->addWidget(comboBoxHD2, 1, 2, 1, 1);

        pushButtonHD2 = new QPushButton(groupBoxHD);
        pushButtonHD2->setObjectName(QString::fromUtf8("pushButtonHD2"));

        gridLayoutHD->addWidget(pushButtonHD2, 1, 3, 1, 1);

        labelHD3 = new QLabel(groupBoxHD);
        labelHD3->setObjectName(QString::fromUtf8("labelHD3"));

        gridLayoutHD->addWidget(labelHD3, 2, 0, 1, 1);

        comboBoxHD3 = new QComboBox(groupBoxHD);
        comboBoxHD3->setObjectName(QString::fromUtf8("comboBoxHD3"));
        sizePolicy.setHeightForWidth(comboBoxHD3->sizePolicy().hasHeightForWidth());
        comboBoxHD3->setSizePolicy(sizePolicy);
        comboBoxHD3->setMaxVisibleItems(30);

        gridLayoutHD->addWidget(comboBoxHD3, 2, 2, 1, 1);

        pushButtonHD3 = new QPushButton(groupBoxHD);
        pushButtonHD3->setObjectName(QString::fromUtf8("pushButtonHD3"));

        gridLayoutHD->addWidget(pushButtonHD3, 2, 3, 1, 1);

        labelHD4 = new QLabel(groupBoxHD);
        labelHD4->setObjectName(QString::fromUtf8("labelHD4"));

        gridLayoutHD->addWidget(labelHD4, 3, 0, 1, 1);

        comboBoxHD4 = new QComboBox(groupBoxHD);
        comboBoxHD4->setObjectName(QString::fromUtf8("comboBoxHD4"));
        sizePolicy.setHeightForWidth(comboBoxHD4->sizePolicy().hasHeightForWidth());
        comboBoxHD4->setSizePolicy(sizePolicy);
        comboBoxHD4->setMaxVisibleItems(30);

        gridLayoutHD->addWidget(comboBoxHD4, 3, 2, 1, 1);

        pushButtonHD4 = new QPushButton(groupBoxHD);
        pushButtonHD4->setObjectName(QString::fromUtf8("pushButtonHD4"));

        gridLayoutHD->addWidget(pushButtonHD4, 3, 3, 1, 1);


        verticalLayoutGeneral->addWidget(groupBoxHD);

        checkBoxCassette = new QCheckBox(tabGeneral);
        checkBoxCassette->setObjectName(QString::fromUtf8("checkBoxCassette"));

        verticalLayoutGeneral->addWidget(checkBoxCassette);

        verticalSpacerGeneral = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutGeneral->addItem(verticalSpacerGeneral);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/general_storage_controllers.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetStorageControllers->addTab(tabGeneral, icon, QString());
        tabSCSIControllers = new QWidget();
        tabSCSIControllers->setObjectName(QString::fromUtf8("tabSCSIControllers"));
        verticalLayoutSCSIControllers = new QVBoxLayout(tabSCSIControllers);
        verticalLayoutSCSIControllers->setObjectName(QString::fromUtf8("verticalLayoutSCSIControllers"));
        gridLayoutSCSI = new QGridLayout();
        gridLayoutSCSI->setObjectName(QString::fromUtf8("gridLayoutSCSI"));
        labelSCSI1 = new QLabel(tabSCSIControllers);
        labelSCSI1->setObjectName(QString::fromUtf8("labelSCSI1"));

        gridLayoutSCSI->addWidget(labelSCSI1, 0, 0, 1, 1);

        comboBoxSCSI1 = new QComboBox(tabSCSIControllers);
        comboBoxSCSI1->setObjectName(QString::fromUtf8("comboBoxSCSI1"));
        sizePolicy.setHeightForWidth(comboBoxSCSI1->sizePolicy().hasHeightForWidth());
        comboBoxSCSI1->setSizePolicy(sizePolicy);
        comboBoxSCSI1->setMaxVisibleItems(30);

        gridLayoutSCSI->addWidget(comboBoxSCSI1, 0, 2, 1, 1);

        pushButtonSCSI1 = new QPushButton(tabSCSIControllers);
        pushButtonSCSI1->setObjectName(QString::fromUtf8("pushButtonSCSI1"));

        gridLayoutSCSI->addWidget(pushButtonSCSI1, 0, 3, 1, 1);

        labelSCSI2 = new QLabel(tabSCSIControllers);
        labelSCSI2->setObjectName(QString::fromUtf8("labelSCSI2"));

        gridLayoutSCSI->addWidget(labelSCSI2, 1, 0, 1, 1);

        comboBoxSCSI2 = new QComboBox(tabSCSIControllers);
        comboBoxSCSI2->setObjectName(QString::fromUtf8("comboBoxSCSI2"));
        sizePolicy.setHeightForWidth(comboBoxSCSI2->sizePolicy().hasHeightForWidth());
        comboBoxSCSI2->setSizePolicy(sizePolicy);
        comboBoxSCSI2->setMaxVisibleItems(30);

        gridLayoutSCSI->addWidget(comboBoxSCSI2, 1, 2, 1, 1);

        pushButtonSCSI2 = new QPushButton(tabSCSIControllers);
        pushButtonSCSI2->setObjectName(QString::fromUtf8("pushButtonSCSI2"));

        gridLayoutSCSI->addWidget(pushButtonSCSI2, 1, 3, 1, 1);

        labelSCSI3 = new QLabel(tabSCSIControllers);
        labelSCSI3->setObjectName(QString::fromUtf8("labelSCSI3"));

        gridLayoutSCSI->addWidget(labelSCSI3, 2, 0, 1, 1);

        comboBoxSCSI3 = new QComboBox(tabSCSIControllers);
        comboBoxSCSI3->setObjectName(QString::fromUtf8("comboBoxSCSI3"));
        sizePolicy.setHeightForWidth(comboBoxSCSI3->sizePolicy().hasHeightForWidth());
        comboBoxSCSI3->setSizePolicy(sizePolicy);
        comboBoxSCSI3->setMaxVisibleItems(30);

        gridLayoutSCSI->addWidget(comboBoxSCSI3, 2, 2, 1, 1);

        pushButtonSCSI3 = new QPushButton(tabSCSIControllers);
        pushButtonSCSI3->setObjectName(QString::fromUtf8("pushButtonSCSI3"));

        gridLayoutSCSI->addWidget(pushButtonSCSI3, 2, 3, 1, 1);

        labelSCSI4 = new QLabel(tabSCSIControllers);
        labelSCSI4->setObjectName(QString::fromUtf8("labelSCSI4"));

        gridLayoutSCSI->addWidget(labelSCSI4, 3, 0, 1, 1);

        comboBoxSCSI4 = new QComboBox(tabSCSIControllers);
        comboBoxSCSI4->setObjectName(QString::fromUtf8("comboBoxSCSI4"));
        sizePolicy.setHeightForWidth(comboBoxSCSI4->sizePolicy().hasHeightForWidth());
        comboBoxSCSI4->setSizePolicy(sizePolicy);
        comboBoxSCSI4->setMaxVisibleItems(30);

        gridLayoutSCSI->addWidget(comboBoxSCSI4, 3, 2, 1, 1);

        pushButtonSCSI4 = new QPushButton(tabSCSIControllers);
        pushButtonSCSI4->setObjectName(QString::fromUtf8("pushButtonSCSI4"));

        gridLayoutSCSI->addWidget(pushButtonSCSI4, 3, 3, 1, 1);


        verticalLayoutSCSIControllers->addLayout(gridLayoutSCSI);

        verticalSpacerSCSIControllers = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutSCSIControllers->addItem(verticalSpacerSCSIControllers);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/scsi_controllers.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetStorageControllers->addTab(tabSCSIControllers, icon1, QString());

        vboxLayout->addWidget(tabWidgetStorageControllers);

        QWidget::setTabOrder(comboBoxFD, pushButtonFD);
        QWidget::setTabOrder(pushButtonFD, comboBoxCDInterface);
        QWidget::setTabOrder(comboBoxCDInterface, pushButtonCDInterface);
        QWidget::setTabOrder(pushButtonCDInterface, comboBoxHD1);
        QWidget::setTabOrder(comboBoxHD1, pushButtonHD1);
        QWidget::setTabOrder(pushButtonHD1, comboBoxHD2);
        QWidget::setTabOrder(comboBoxHD2, pushButtonHD2);
        QWidget::setTabOrder(pushButtonHD2, comboBoxHD3);
        QWidget::setTabOrder(comboBoxHD3, pushButtonHD3);
        QWidget::setTabOrder(pushButtonHD3, comboBoxHD4);
        QWidget::setTabOrder(comboBoxHD4, pushButtonHD4);
        QWidget::setTabOrder(pushButtonHD4, checkBoxCassette);
        QWidget::setTabOrder(checkBoxCassette, comboBoxSCSI1);
        QWidget::setTabOrder(comboBoxSCSI1, pushButtonSCSI1);
        QWidget::setTabOrder(pushButtonSCSI1, comboBoxSCSI2);
        QWidget::setTabOrder(comboBoxSCSI2, pushButtonSCSI2);
        QWidget::setTabOrder(pushButtonSCSI2, comboBoxSCSI3);
        QWidget::setTabOrder(comboBoxSCSI3, pushButtonSCSI3);
        QWidget::setTabOrder(pushButtonSCSI3, comboBoxSCSI4);
        QWidget::setTabOrder(comboBoxSCSI4, pushButtonSCSI4);

        retranslateUi(SettingsStorageControllers);

        tabWidgetStorageControllers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsStorageControllers);
    } // setupUi

    void retranslateUi(QWidget *SettingsStorageControllers)
    {
        SettingsStorageControllers->setWindowTitle(QCoreApplication::translate("SettingsStorageControllers", "Form", nullptr));
        labelFD->setText(QCoreApplication::translate("SettingsStorageControllers", "Floppy disk controller:", nullptr));
        pushButtonFD->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelCDInterface->setText(QCoreApplication::translate("SettingsStorageControllers", "CD-ROM controller:", nullptr));
        pushButtonCDInterface->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        groupBoxHD->setTitle(QCoreApplication::translate("SettingsStorageControllers", "Hard disk controllers", nullptr));
        labelHD1->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 1:", nullptr));
        pushButtonHD1->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelHD2->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 2:", nullptr));
        pushButtonHD2->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelHD3->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 3:", nullptr));
        pushButtonHD3->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelHD4->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 4:", nullptr));
        pushButtonHD4->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        checkBoxCassette->setText(QCoreApplication::translate("SettingsStorageControllers", "Cassette", nullptr));
        tabWidgetStorageControllers->setTabText(tabWidgetStorageControllers->indexOf(tabGeneral), QCoreApplication::translate("SettingsStorageControllers", "General", nullptr));
        labelSCSI1->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 1:", nullptr));
        pushButtonSCSI1->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelSCSI2->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 2:", nullptr));
        pushButtonSCSI2->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelSCSI3->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 3:", nullptr));
        pushButtonSCSI3->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        labelSCSI4->setText(QCoreApplication::translate("SettingsStorageControllers", "Controller 4:", nullptr));
        pushButtonSCSI4->setText(QCoreApplication::translate("SettingsStorageControllers", "Configure", nullptr));
        tabWidgetStorageControllers->setTabText(tabWidgetStorageControllers->indexOf(tabSCSIControllers), QCoreApplication::translate("SettingsStorageControllers", "SCSI controllers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsStorageControllers: public Ui_SettingsStorageControllers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSSTORAGECONTROLLERS_H
