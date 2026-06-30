/********************************************************************************
** Form generated from reading UI file 'qt_settingsports.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSPORTS_H
#define UI_QT_SETTINGSPORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPorts
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetPorts;
    QWidget *tabParallel;
    QVBoxLayout *verticalLayoutParallel;
    QGridLayout *gridLayoutLptECPDMA;
    QLabel *labelLptECPDMA;
    QComboBox *comboBoxLptECPDMA;
    QLabel *labelLpt1;
    QComboBox *comboBoxLpt1;
    QPushButton *pushButtonConfigureLpt1;
    QLabel *labelLpt2;
    QComboBox *comboBoxLpt2;
    QPushButton *pushButtonConfigureLpt2;
    QLabel *labelLpt3;
    QComboBox *comboBoxLpt3;
    QPushButton *pushButtonConfigureLpt3;
    QLabel *labelLpt4;
    QComboBox *comboBoxLpt4;
    QPushButton *pushButtonConfigureLpt4;
    QGridLayout *gridLayoutParallel;
    QCheckBox *checkBoxParallel1;
    QCheckBox *checkBoxParallel2;
    QCheckBox *checkBoxParallel3;
    QCheckBox *checkBoxParallel4;
    QSpacerItem *verticalSpacerParallel;
    QWidget *tabSerial;
    QVBoxLayout *verticalLayoutSerial;
    QGridLayout *gridLayoutPassThru;
    QCheckBox *checkBoxSerialPassThru1;
    QPushButton *pushButtonSerialPassThru1;
    QCheckBox *checkBoxSerialPassThru2;
    QPushButton *pushButtonSerialPassThru2;
    QCheckBox *checkBoxSerialPassThru3;
    QPushButton *pushButtonSerialPassThru3;
    QCheckBox *checkBoxSerialPassThru4;
    QPushButton *pushButtonSerialPassThru4;
    QGridLayout *gridLayoutSerial;
    QCheckBox *checkBoxSerial1;
    QCheckBox *checkBoxSerial2;
    QCheckBox *checkBoxSerial3;
    QCheckBox *checkBoxSerial4;
    QSpacerItem *verticalSpacerSerial;

    void setupUi(QWidget *SettingsPorts)
    {
        if (SettingsPorts->objectName().isEmpty())
            SettingsPorts->setObjectName(QString::fromUtf8("SettingsPorts"));
        SettingsPorts->resize(398, 341);
        verticalLayout = new QVBoxLayout(SettingsPorts);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetPorts = new QTabWidget(SettingsPorts);
        tabWidgetPorts->setObjectName(QString::fromUtf8("tabWidgetPorts"));
        tabParallel = new QWidget();
        tabParallel->setObjectName(QString::fromUtf8("tabParallel"));
        verticalLayoutParallel = new QVBoxLayout(tabParallel);
        verticalLayoutParallel->setObjectName(QString::fromUtf8("verticalLayoutParallel"));
        gridLayoutLptECPDMA = new QGridLayout();
        gridLayoutLptECPDMA->setObjectName(QString::fromUtf8("gridLayoutLptECPDMA"));
        labelLptECPDMA = new QLabel(tabParallel);
        labelLptECPDMA->setObjectName(QString::fromUtf8("labelLptECPDMA"));

        gridLayoutLptECPDMA->addWidget(labelLptECPDMA, 0, 0, 1, 1);

        comboBoxLptECPDMA = new QComboBox(tabParallel);
        comboBoxLptECPDMA->setObjectName(QString::fromUtf8("comboBoxLptECPDMA"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxLptECPDMA->sizePolicy().hasHeightForWidth());
        comboBoxLptECPDMA->setSizePolicy(sizePolicy);
        comboBoxLptECPDMA->setMaxVisibleItems(30);

        gridLayoutLptECPDMA->addWidget(comboBoxLptECPDMA, 0, 2, 1, 1);

        labelLpt1 = new QLabel(tabParallel);
        labelLpt1->setObjectName(QString::fromUtf8("labelLpt1"));

        gridLayoutLptECPDMA->addWidget(labelLpt1, 1, 0, 1, 1);

        comboBoxLpt1 = new QComboBox(tabParallel);
        comboBoxLpt1->setObjectName(QString::fromUtf8("comboBoxLpt1"));
        sizePolicy.setHeightForWidth(comboBoxLpt1->sizePolicy().hasHeightForWidth());
        comboBoxLpt1->setSizePolicy(sizePolicy);
        comboBoxLpt1->setMaxVisibleItems(30);

        gridLayoutLptECPDMA->addWidget(comboBoxLpt1, 1, 2, 1, 1);

        pushButtonConfigureLpt1 = new QPushButton(tabParallel);
        pushButtonConfigureLpt1->setObjectName(QString::fromUtf8("pushButtonConfigureLpt1"));

        gridLayoutLptECPDMA->addWidget(pushButtonConfigureLpt1, 1, 3, 1, 1);

        labelLpt2 = new QLabel(tabParallel);
        labelLpt2->setObjectName(QString::fromUtf8("labelLpt2"));

        gridLayoutLptECPDMA->addWidget(labelLpt2, 2, 0, 1, 1);

        comboBoxLpt2 = new QComboBox(tabParallel);
        comboBoxLpt2->setObjectName(QString::fromUtf8("comboBoxLpt2"));
        sizePolicy.setHeightForWidth(comboBoxLpt2->sizePolicy().hasHeightForWidth());
        comboBoxLpt2->setSizePolicy(sizePolicy);
        comboBoxLpt2->setMaxVisibleItems(30);

        gridLayoutLptECPDMA->addWidget(comboBoxLpt2, 2, 2, 1, 1);

        pushButtonConfigureLpt2 = new QPushButton(tabParallel);
        pushButtonConfigureLpt2->setObjectName(QString::fromUtf8("pushButtonConfigureLpt2"));

        gridLayoutLptECPDMA->addWidget(pushButtonConfigureLpt2, 2, 3, 1, 1);

        labelLpt3 = new QLabel(tabParallel);
        labelLpt3->setObjectName(QString::fromUtf8("labelLpt3"));

        gridLayoutLptECPDMA->addWidget(labelLpt3, 3, 0, 1, 1);

        comboBoxLpt3 = new QComboBox(tabParallel);
        comboBoxLpt3->setObjectName(QString::fromUtf8("comboBoxLpt3"));
        sizePolicy.setHeightForWidth(comboBoxLpt3->sizePolicy().hasHeightForWidth());
        comboBoxLpt3->setSizePolicy(sizePolicy);
        comboBoxLpt3->setMaxVisibleItems(30);

        gridLayoutLptECPDMA->addWidget(comboBoxLpt3, 3, 2, 1, 1);

        pushButtonConfigureLpt3 = new QPushButton(tabParallel);
        pushButtonConfigureLpt3->setObjectName(QString::fromUtf8("pushButtonConfigureLpt3"));

        gridLayoutLptECPDMA->addWidget(pushButtonConfigureLpt3, 3, 3, 1, 1);

        labelLpt4 = new QLabel(tabParallel);
        labelLpt4->setObjectName(QString::fromUtf8("labelLpt4"));

        gridLayoutLptECPDMA->addWidget(labelLpt4, 4, 0, 1, 1);

        comboBoxLpt4 = new QComboBox(tabParallel);
        comboBoxLpt4->setObjectName(QString::fromUtf8("comboBoxLpt4"));
        sizePolicy.setHeightForWidth(comboBoxLpt4->sizePolicy().hasHeightForWidth());
        comboBoxLpt4->setSizePolicy(sizePolicy);
        comboBoxLpt4->setMaxVisibleItems(30);

        gridLayoutLptECPDMA->addWidget(comboBoxLpt4, 4, 2, 1, 1);

        pushButtonConfigureLpt4 = new QPushButton(tabParallel);
        pushButtonConfigureLpt4->setObjectName(QString::fromUtf8("pushButtonConfigureLpt4"));

        gridLayoutLptECPDMA->addWidget(pushButtonConfigureLpt4, 4, 3, 1, 1);


        verticalLayoutParallel->addLayout(gridLayoutLptECPDMA);

        gridLayoutParallel = new QGridLayout();
        gridLayoutParallel->setObjectName(QString::fromUtf8("gridLayoutParallel"));
        checkBoxParallel1 = new QCheckBox(tabParallel);
        checkBoxParallel1->setObjectName(QString::fromUtf8("checkBoxParallel1"));

        gridLayoutParallel->addWidget(checkBoxParallel1, 0, 0, 1, 1);

        checkBoxParallel2 = new QCheckBox(tabParallel);
        checkBoxParallel2->setObjectName(QString::fromUtf8("checkBoxParallel2"));

        gridLayoutParallel->addWidget(checkBoxParallel2, 0, 1, 1, 1);

        checkBoxParallel3 = new QCheckBox(tabParallel);
        checkBoxParallel3->setObjectName(QString::fromUtf8("checkBoxParallel3"));

        gridLayoutParallel->addWidget(checkBoxParallel3, 1, 0, 1, 1);

        checkBoxParallel4 = new QCheckBox(tabParallel);
        checkBoxParallel4->setObjectName(QString::fromUtf8("checkBoxParallel4"));

        gridLayoutParallel->addWidget(checkBoxParallel4, 1, 1, 1, 1);


        verticalLayoutParallel->addLayout(gridLayoutParallel);

        verticalSpacerParallel = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutParallel->addItem(verticalSpacerParallel);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/parallel_ports.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetPorts->addTab(tabParallel, icon, QString());
        tabSerial = new QWidget();
        tabSerial->setObjectName(QString::fromUtf8("tabSerial"));
        verticalLayoutSerial = new QVBoxLayout(tabSerial);
        verticalLayoutSerial->setObjectName(QString::fromUtf8("verticalLayoutSerial"));
        gridLayoutPassThru = new QGridLayout();
        gridLayoutPassThru->setObjectName(QString::fromUtf8("gridLayoutPassThru"));
        gridLayoutPassThru->setSizeConstraint(QLayout::SetDefaultConstraint);
        checkBoxSerialPassThru1 = new QCheckBox(tabSerial);
        checkBoxSerialPassThru1->setObjectName(QString::fromUtf8("checkBoxSerialPassThru1"));
        sizePolicy.setHeightForWidth(checkBoxSerialPassThru1->sizePolicy().hasHeightForWidth());
        checkBoxSerialPassThru1->setSizePolicy(sizePolicy);

        gridLayoutPassThru->addWidget(checkBoxSerialPassThru1, 0, 0, 1, 1);

        pushButtonSerialPassThru1 = new QPushButton(tabSerial);
        pushButtonSerialPassThru1->setObjectName(QString::fromUtf8("pushButtonSerialPassThru1"));

        gridLayoutPassThru->addWidget(pushButtonSerialPassThru1, 0, 1, 1, 1);

        checkBoxSerialPassThru2 = new QCheckBox(tabSerial);
        checkBoxSerialPassThru2->setObjectName(QString::fromUtf8("checkBoxSerialPassThru2"));
        sizePolicy.setHeightForWidth(checkBoxSerialPassThru2->sizePolicy().hasHeightForWidth());
        checkBoxSerialPassThru2->setSizePolicy(sizePolicy);

        gridLayoutPassThru->addWidget(checkBoxSerialPassThru2, 1, 0, 1, 1);

        pushButtonSerialPassThru2 = new QPushButton(tabSerial);
        pushButtonSerialPassThru2->setObjectName(QString::fromUtf8("pushButtonSerialPassThru2"));

        gridLayoutPassThru->addWidget(pushButtonSerialPassThru2, 1, 1, 1, 1);

        checkBoxSerialPassThru3 = new QCheckBox(tabSerial);
        checkBoxSerialPassThru3->setObjectName(QString::fromUtf8("checkBoxSerialPassThru3"));
        sizePolicy.setHeightForWidth(checkBoxSerialPassThru3->sizePolicy().hasHeightForWidth());
        checkBoxSerialPassThru3->setSizePolicy(sizePolicy);

        gridLayoutPassThru->addWidget(checkBoxSerialPassThru3, 2, 0, 1, 1);

        pushButtonSerialPassThru3 = new QPushButton(tabSerial);
        pushButtonSerialPassThru3->setObjectName(QString::fromUtf8("pushButtonSerialPassThru3"));

        gridLayoutPassThru->addWidget(pushButtonSerialPassThru3, 2, 1, 1, 1);

        checkBoxSerialPassThru4 = new QCheckBox(tabSerial);
        checkBoxSerialPassThru4->setObjectName(QString::fromUtf8("checkBoxSerialPassThru4"));
        sizePolicy.setHeightForWidth(checkBoxSerialPassThru4->sizePolicy().hasHeightForWidth());
        checkBoxSerialPassThru4->setSizePolicy(sizePolicy);

        gridLayoutPassThru->addWidget(checkBoxSerialPassThru4, 3, 0, 1, 1);

        pushButtonSerialPassThru4 = new QPushButton(tabSerial);
        pushButtonSerialPassThru4->setObjectName(QString::fromUtf8("pushButtonSerialPassThru4"));

        gridLayoutPassThru->addWidget(pushButtonSerialPassThru4, 3, 1, 1, 1);


        verticalLayoutSerial->addLayout(gridLayoutPassThru);

        gridLayoutSerial = new QGridLayout();
        gridLayoutSerial->setObjectName(QString::fromUtf8("gridLayoutSerial"));
        checkBoxSerial1 = new QCheckBox(tabSerial);
        checkBoxSerial1->setObjectName(QString::fromUtf8("checkBoxSerial1"));

        gridLayoutSerial->addWidget(checkBoxSerial1, 0, 0, 1, 1);

        checkBoxSerial2 = new QCheckBox(tabSerial);
        checkBoxSerial2->setObjectName(QString::fromUtf8("checkBoxSerial2"));

        gridLayoutSerial->addWidget(checkBoxSerial2, 0, 1, 1, 1);

        checkBoxSerial3 = new QCheckBox(tabSerial);
        checkBoxSerial3->setObjectName(QString::fromUtf8("checkBoxSerial3"));

        gridLayoutSerial->addWidget(checkBoxSerial3, 1, 0, 1, 1);

        checkBoxSerial4 = new QCheckBox(tabSerial);
        checkBoxSerial4->setObjectName(QString::fromUtf8("checkBoxSerial4"));

        gridLayoutSerial->addWidget(checkBoxSerial4, 1, 1, 1, 1);


        verticalLayoutSerial->addLayout(gridLayoutSerial);

        verticalSpacerSerial = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutSerial->addItem(verticalSpacerSerial);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/serial_ports.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetPorts->addTab(tabSerial, icon1, QString());

        verticalLayout->addWidget(tabWidgetPorts);


        retranslateUi(SettingsPorts);

        tabWidgetPorts->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsPorts);
    } // setupUi

    void retranslateUi(QWidget *SettingsPorts)
    {
        SettingsPorts->setWindowTitle(QCoreApplication::translate("SettingsPorts", "Form", nullptr));
        labelLptECPDMA->setText(QCoreApplication::translate("SettingsPorts", "Internal LPT ECP DMA:", nullptr));
        labelLpt1->setText(QCoreApplication::translate("SettingsPorts", "LPT1 Device:", nullptr));
        pushButtonConfigureLpt1->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        labelLpt2->setText(QCoreApplication::translate("SettingsPorts", "LPT2 Device:", nullptr));
        pushButtonConfigureLpt2->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        labelLpt3->setText(QCoreApplication::translate("SettingsPorts", "LPT3 Device:", nullptr));
        pushButtonConfigureLpt3->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        labelLpt4->setText(QCoreApplication::translate("SettingsPorts", "LPT4 Device:", nullptr));
        pushButtonConfigureLpt4->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        checkBoxParallel1->setText(QCoreApplication::translate("SettingsPorts", "Parallel port 1", nullptr));
        checkBoxParallel2->setText(QCoreApplication::translate("SettingsPorts", "Parallel port 2", nullptr));
        checkBoxParallel3->setText(QCoreApplication::translate("SettingsPorts", "Parallel port 3", nullptr));
        checkBoxParallel4->setText(QCoreApplication::translate("SettingsPorts", "Parallel port 4", nullptr));
        tabWidgetPorts->setTabText(tabWidgetPorts->indexOf(tabParallel), QCoreApplication::translate("SettingsPorts", "Parallel ports", nullptr));
        checkBoxSerialPassThru1->setText(QCoreApplication::translate("SettingsPorts", "Serial port passthrough 1", nullptr));
        pushButtonSerialPassThru1->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        checkBoxSerialPassThru2->setText(QCoreApplication::translate("SettingsPorts", "Serial port passthrough 2", nullptr));
        pushButtonSerialPassThru2->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        checkBoxSerialPassThru3->setText(QCoreApplication::translate("SettingsPorts", "Serial port passthrough 3", nullptr));
        pushButtonSerialPassThru3->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        checkBoxSerialPassThru4->setText(QCoreApplication::translate("SettingsPorts", "Serial port passthrough 4", nullptr));
        pushButtonSerialPassThru4->setText(QCoreApplication::translate("SettingsPorts", "Configure", nullptr));
        checkBoxSerial1->setText(QCoreApplication::translate("SettingsPorts", "Serial port 1", nullptr));
        checkBoxSerial2->setText(QCoreApplication::translate("SettingsPorts", "Serial port 2", nullptr));
        checkBoxSerial3->setText(QCoreApplication::translate("SettingsPorts", "Serial port 3", nullptr));
        checkBoxSerial4->setText(QCoreApplication::translate("SettingsPorts", "Serial port 4", nullptr));
        tabWidgetPorts->setTabText(tabWidgetPorts->indexOf(tabSerial), QCoreApplication::translate("SettingsPorts", "Serial ports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsPorts: public Ui_SettingsPorts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSPORTS_H
