/********************************************************************************
** Form generated from reading UI file 'qt_settingsotherperipherals.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSOTHERPERIPHERALS_H
#define UI_QT_SETTINGSOTHERPERIPHERALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsOtherPeripherals
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidgetSound;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayoutGeneral;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayoutRtc;
    QLabel *labelRtc;
    QComboBox *comboBoxRTC;
    QPushButton *pushButtonConfigureRTC;
    QHBoxLayout *horizontalLayoutIBPC;
    QCheckBox *checkBoxISABugger;
    QCheckBox *checkBoxPOSTCard;
    QHBoxLayout *horizontalLayoutUT;
    QCheckBox *checkBoxUnitTester;
    QPushButton *pushButtonConfigureUT;
    QHBoxLayout *horizontalLayoutKeyCard;
    QCheckBox *checkBoxKeyCard;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonConfigureKeyCard;
    QSpacerItem *verticalSpacerGeneral;
    QWidget *tabIsaMem;
    QVBoxLayout *verticalLayoutIsaMem;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayoutMem;
    QLabel *labelIsaMemCard1;
    QComboBox *comboBoxIsaMemCard1;
    QPushButton *pushButtonConfigureIsaMemCard1;
    QLabel *labelIsaMemCard2;
    QComboBox *comboBoxIsaMemCard2;
    QPushButton *pushButtonConfigureIsaMemCard2;
    QLabel *labelIsaMemCard3;
    QComboBox *comboBoxIsaMemCard3;
    QPushButton *pushButtonConfigureIsaMemCard3;
    QLabel *labelIsaMemCard4;
    QComboBox *comboBoxIsaMemCard4;
    QPushButton *pushButtonConfigureIsaMemCard4;
    QSpacerItem *verticalIsaMem;
    QWidget *tabIsaRom;
    QVBoxLayout *verticalLayoutIsaRom;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayoutRom;
    QLabel *labelIsaRomCard1;
    QComboBox *comboBoxIsaRomCard1;
    QPushButton *pushButtonConfigureIsaRomCard1;
    QLabel *labelIsaRomCard2;
    QComboBox *comboBoxIsaRomCard2;
    QPushButton *pushButtonConfigureIsaRomCard2;
    QLabel *labelIsaRomCard3;
    QComboBox *comboBoxIsaRomCard3;
    QPushButton *pushButtonConfigureIsaRomCard3;
    QLabel *labelIsaRomCard4;
    QComboBox *comboBoxIsaRomCard4;
    QPushButton *pushButtonConfigureIsaRomCard4;
    QSpacerItem *verticalSpacerIsaRom;

    void setupUi(QWidget *SettingsOtherPeripherals)
    {
        if (SettingsOtherPeripherals->objectName().isEmpty())
            SettingsOtherPeripherals->setObjectName(QString::fromUtf8("SettingsOtherPeripherals"));
        SettingsOtherPeripherals->resize(387, 332);
        vboxLayout = new QVBoxLayout(SettingsOtherPeripherals);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetSound = new QTabWidget(SettingsOtherPeripherals);
        tabWidgetSound->setObjectName(QString::fromUtf8("tabWidgetSound"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayoutGeneral = new QVBoxLayout(tabGeneral);
        verticalLayoutGeneral->setObjectName(QString::fromUtf8("verticalLayoutGeneral"));
        widget = new QWidget(tabGeneral);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutRtc = new QHBoxLayout();
        horizontalLayoutRtc->setObjectName(QString::fromUtf8("horizontalLayoutRtc"));
        labelRtc = new QLabel(widget);
        labelRtc->setObjectName(QString::fromUtf8("labelRtc"));

        horizontalLayoutRtc->addWidget(labelRtc);

        comboBoxRTC = new QComboBox(widget);
        comboBoxRTC->setObjectName(QString::fromUtf8("comboBoxRTC"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxRTC->sizePolicy().hasHeightForWidth());
        comboBoxRTC->setSizePolicy(sizePolicy);
        comboBoxRTC->setMaxVisibleItems(30);

        horizontalLayoutRtc->addWidget(comboBoxRTC);

        pushButtonConfigureRTC = new QPushButton(widget);
        pushButtonConfigureRTC->setObjectName(QString::fromUtf8("pushButtonConfigureRTC"));

        horizontalLayoutRtc->addWidget(pushButtonConfigureRTC);


        gridLayout->addLayout(horizontalLayoutRtc, 0, 0, 1, 1);

        horizontalLayoutIBPC = new QHBoxLayout();
        horizontalLayoutIBPC->setObjectName(QString::fromUtf8("horizontalLayoutIBPC"));
        checkBoxISABugger = new QCheckBox(widget);
        checkBoxISABugger->setObjectName(QString::fromUtf8("checkBoxISABugger"));

        horizontalLayoutIBPC->addWidget(checkBoxISABugger);

        checkBoxPOSTCard = new QCheckBox(widget);
        checkBoxPOSTCard->setObjectName(QString::fromUtf8("checkBoxPOSTCard"));

        horizontalLayoutIBPC->addWidget(checkBoxPOSTCard);


        gridLayout->addLayout(horizontalLayoutIBPC, 1, 0, 1, 1);

        horizontalLayoutUT = new QHBoxLayout();
        horizontalLayoutUT->setObjectName(QString::fromUtf8("horizontalLayoutUT"));
        checkBoxUnitTester = new QCheckBox(widget);
        checkBoxUnitTester->setObjectName(QString::fromUtf8("checkBoxUnitTester"));
        sizePolicy.setHeightForWidth(checkBoxUnitTester->sizePolicy().hasHeightForWidth());
        checkBoxUnitTester->setSizePolicy(sizePolicy);

        horizontalLayoutUT->addWidget(checkBoxUnitTester);

        pushButtonConfigureUT = new QPushButton(widget);
        pushButtonConfigureUT->setObjectName(QString::fromUtf8("pushButtonConfigureUT"));

        horizontalLayoutUT->addWidget(pushButtonConfigureUT);


        gridLayout->addLayout(horizontalLayoutUT, 2, 0, 1, 1);

        horizontalLayoutKeyCard = new QHBoxLayout();
        horizontalLayoutKeyCard->setObjectName(QString::fromUtf8("horizontalLayoutKeyCard"));
        horizontalLayoutKeyCard->setContentsMargins(-1, 0, -1, -1);
        checkBoxKeyCard = new QCheckBox(widget);
        checkBoxKeyCard->setObjectName(QString::fromUtf8("checkBoxKeyCard"));

        horizontalLayoutKeyCard->addWidget(checkBoxKeyCard);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutKeyCard->addItem(horizontalSpacer_2);

        pushButtonConfigureKeyCard = new QPushButton(widget);
        pushButtonConfigureKeyCard->setObjectName(QString::fromUtf8("pushButtonConfigureKeyCard"));

        horizontalLayoutKeyCard->addWidget(pushButtonConfigureKeyCard);


        gridLayout->addLayout(horizontalLayoutKeyCard, 3, 0, 1, 1);


        verticalLayoutGeneral->addWidget(widget);

        verticalSpacerGeneral = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutGeneral->addItem(verticalSpacerGeneral);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/general_other_peripherals.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetSound->addTab(tabGeneral, icon, QString());
        tabIsaMem = new QWidget();
        tabIsaMem->setObjectName(QString::fromUtf8("tabIsaMem"));
        verticalLayoutIsaMem = new QVBoxLayout(tabIsaMem);
        verticalLayoutIsaMem->setObjectName(QString::fromUtf8("verticalLayoutIsaMem"));
        widget_2 = new QWidget(tabIsaMem);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayoutMem = new QGridLayout();
        gridLayoutMem->setObjectName(QString::fromUtf8("gridLayoutMem"));
        labelIsaMemCard1 = new QLabel(widget_2);
        labelIsaMemCard1->setObjectName(QString::fromUtf8("labelIsaMemCard1"));

        gridLayoutMem->addWidget(labelIsaMemCard1, 0, 0, 1, 1);

        comboBoxIsaMemCard1 = new QComboBox(widget_2);
        comboBoxIsaMemCard1->setObjectName(QString::fromUtf8("comboBoxIsaMemCard1"));
        sizePolicy.setHeightForWidth(comboBoxIsaMemCard1->sizePolicy().hasHeightForWidth());
        comboBoxIsaMemCard1->setSizePolicy(sizePolicy);
        comboBoxIsaMemCard1->setMaxVisibleItems(30);

        gridLayoutMem->addWidget(comboBoxIsaMemCard1, 0, 1, 1, 1);

        pushButtonConfigureIsaMemCard1 = new QPushButton(widget_2);
        pushButtonConfigureIsaMemCard1->setObjectName(QString::fromUtf8("pushButtonConfigureIsaMemCard1"));

        gridLayoutMem->addWidget(pushButtonConfigureIsaMemCard1, 0, 2, 1, 1);

        labelIsaMemCard2 = new QLabel(widget_2);
        labelIsaMemCard2->setObjectName(QString::fromUtf8("labelIsaMemCard2"));

        gridLayoutMem->addWidget(labelIsaMemCard2, 1, 0, 1, 1);

        comboBoxIsaMemCard2 = new QComboBox(widget_2);
        comboBoxIsaMemCard2->setObjectName(QString::fromUtf8("comboBoxIsaMemCard2"));
        sizePolicy.setHeightForWidth(comboBoxIsaMemCard2->sizePolicy().hasHeightForWidth());
        comboBoxIsaMemCard2->setSizePolicy(sizePolicy);
        comboBoxIsaMemCard2->setMaxVisibleItems(30);

        gridLayoutMem->addWidget(comboBoxIsaMemCard2, 1, 1, 1, 1);

        pushButtonConfigureIsaMemCard2 = new QPushButton(widget_2);
        pushButtonConfigureIsaMemCard2->setObjectName(QString::fromUtf8("pushButtonConfigureIsaMemCard2"));

        gridLayoutMem->addWidget(pushButtonConfigureIsaMemCard2, 1, 2, 1, 1);

        labelIsaMemCard3 = new QLabel(widget_2);
        labelIsaMemCard3->setObjectName(QString::fromUtf8("labelIsaMemCard3"));

        gridLayoutMem->addWidget(labelIsaMemCard3, 2, 0, 1, 1);

        comboBoxIsaMemCard3 = new QComboBox(widget_2);
        comboBoxIsaMemCard3->setObjectName(QString::fromUtf8("comboBoxIsaMemCard3"));
        sizePolicy.setHeightForWidth(comboBoxIsaMemCard3->sizePolicy().hasHeightForWidth());
        comboBoxIsaMemCard3->setSizePolicy(sizePolicy);
        comboBoxIsaMemCard3->setMaxVisibleItems(30);

        gridLayoutMem->addWidget(comboBoxIsaMemCard3, 2, 1, 1, 1);

        pushButtonConfigureIsaMemCard3 = new QPushButton(widget_2);
        pushButtonConfigureIsaMemCard3->setObjectName(QString::fromUtf8("pushButtonConfigureIsaMemCard3"));

        gridLayoutMem->addWidget(pushButtonConfigureIsaMemCard3, 2, 2, 1, 1);

        labelIsaMemCard4 = new QLabel(widget_2);
        labelIsaMemCard4->setObjectName(QString::fromUtf8("labelIsaMemCard4"));

        gridLayoutMem->addWidget(labelIsaMemCard4, 3, 0, 1, 1);

        comboBoxIsaMemCard4 = new QComboBox(widget_2);
        comboBoxIsaMemCard4->setObjectName(QString::fromUtf8("comboBoxIsaMemCard4"));
        sizePolicy.setHeightForWidth(comboBoxIsaMemCard4->sizePolicy().hasHeightForWidth());
        comboBoxIsaMemCard4->setSizePolicy(sizePolicy);
        comboBoxIsaMemCard4->setMaxVisibleItems(30);

        gridLayoutMem->addWidget(comboBoxIsaMemCard4, 3, 1, 1, 1);

        pushButtonConfigureIsaMemCard4 = new QPushButton(widget_2);
        pushButtonConfigureIsaMemCard4->setObjectName(QString::fromUtf8("pushButtonConfigureIsaMemCard4"));

        gridLayoutMem->addWidget(pushButtonConfigureIsaMemCard4, 3, 2, 1, 1);


        gridLayout_2->addLayout(gridLayoutMem, 0, 0, 1, 1);


        verticalLayoutIsaMem->addWidget(widget_2);

        verticalIsaMem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutIsaMem->addItem(verticalIsaMem);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/isa_memory.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetSound->addTab(tabIsaMem, icon1, QString());
        tabIsaRom = new QWidget();
        tabIsaRom->setObjectName(QString::fromUtf8("tabIsaRom"));
        verticalLayoutIsaRom = new QVBoxLayout(tabIsaRom);
        verticalLayoutIsaRom->setObjectName(QString::fromUtf8("verticalLayoutIsaRom"));
        widget_3 = new QWidget(tabIsaRom);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayoutRom = new QGridLayout();
        gridLayoutRom->setObjectName(QString::fromUtf8("gridLayoutRom"));
        labelIsaRomCard1 = new QLabel(widget_3);
        labelIsaRomCard1->setObjectName(QString::fromUtf8("labelIsaRomCard1"));

        gridLayoutRom->addWidget(labelIsaRomCard1, 0, 0, 1, 1);

        comboBoxIsaRomCard1 = new QComboBox(widget_3);
        comboBoxIsaRomCard1->setObjectName(QString::fromUtf8("comboBoxIsaRomCard1"));
        sizePolicy.setHeightForWidth(comboBoxIsaRomCard1->sizePolicy().hasHeightForWidth());
        comboBoxIsaRomCard1->setSizePolicy(sizePolicy);
        comboBoxIsaRomCard1->setMaxVisibleItems(30);

        gridLayoutRom->addWidget(comboBoxIsaRomCard1, 0, 1, 1, 1);

        pushButtonConfigureIsaRomCard1 = new QPushButton(widget_3);
        pushButtonConfigureIsaRomCard1->setObjectName(QString::fromUtf8("pushButtonConfigureIsaRomCard1"));

        gridLayoutRom->addWidget(pushButtonConfigureIsaRomCard1, 0, 2, 1, 1);

        labelIsaRomCard2 = new QLabel(widget_3);
        labelIsaRomCard2->setObjectName(QString::fromUtf8("labelIsaRomCard2"));

        gridLayoutRom->addWidget(labelIsaRomCard2, 1, 0, 1, 1);

        comboBoxIsaRomCard2 = new QComboBox(widget_3);
        comboBoxIsaRomCard2->setObjectName(QString::fromUtf8("comboBoxIsaRomCard2"));
        sizePolicy.setHeightForWidth(comboBoxIsaRomCard2->sizePolicy().hasHeightForWidth());
        comboBoxIsaRomCard2->setSizePolicy(sizePolicy);
        comboBoxIsaRomCard2->setMaxVisibleItems(30);

        gridLayoutRom->addWidget(comboBoxIsaRomCard2, 1, 1, 1, 1);

        pushButtonConfigureIsaRomCard2 = new QPushButton(widget_3);
        pushButtonConfigureIsaRomCard2->setObjectName(QString::fromUtf8("pushButtonConfigureIsaRomCard2"));

        gridLayoutRom->addWidget(pushButtonConfigureIsaRomCard2, 1, 2, 1, 1);

        labelIsaRomCard3 = new QLabel(widget_3);
        labelIsaRomCard3->setObjectName(QString::fromUtf8("labelIsaRomCard3"));

        gridLayoutRom->addWidget(labelIsaRomCard3, 2, 0, 1, 1);

        comboBoxIsaRomCard3 = new QComboBox(widget_3);
        comboBoxIsaRomCard3->setObjectName(QString::fromUtf8("comboBoxIsaRomCard3"));
        sizePolicy.setHeightForWidth(comboBoxIsaRomCard3->sizePolicy().hasHeightForWidth());
        comboBoxIsaRomCard3->setSizePolicy(sizePolicy);
        comboBoxIsaRomCard3->setMaxVisibleItems(30);

        gridLayoutRom->addWidget(comboBoxIsaRomCard3, 2, 1, 1, 1);

        pushButtonConfigureIsaRomCard3 = new QPushButton(widget_3);
        pushButtonConfigureIsaRomCard3->setObjectName(QString::fromUtf8("pushButtonConfigureIsaRomCard3"));

        gridLayoutRom->addWidget(pushButtonConfigureIsaRomCard3, 2, 2, 1, 1);

        labelIsaRomCard4 = new QLabel(widget_3);
        labelIsaRomCard4->setObjectName(QString::fromUtf8("labelIsaRomCard4"));

        gridLayoutRom->addWidget(labelIsaRomCard4, 3, 0, 1, 1);

        comboBoxIsaRomCard4 = new QComboBox(widget_3);
        comboBoxIsaRomCard4->setObjectName(QString::fromUtf8("comboBoxIsaRomCard4"));
        sizePolicy.setHeightForWidth(comboBoxIsaRomCard4->sizePolicy().hasHeightForWidth());
        comboBoxIsaRomCard4->setSizePolicy(sizePolicy);
        comboBoxIsaRomCard4->setMaxVisibleItems(30);

        gridLayoutRom->addWidget(comboBoxIsaRomCard4, 3, 1, 1, 1);

        pushButtonConfigureIsaRomCard4 = new QPushButton(widget_3);
        pushButtonConfigureIsaRomCard4->setObjectName(QString::fromUtf8("pushButtonConfigureIsaRomCard4"));

        gridLayoutRom->addWidget(pushButtonConfigureIsaRomCard4, 3, 2, 1, 1);


        gridLayout_3->addLayout(gridLayoutRom, 0, 0, 1, 1);


        verticalLayoutIsaRom->addWidget(widget_3);

        verticalSpacerIsaRom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutIsaRom->addItem(verticalSpacerIsaRom);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/settings/qt/icons/isa_rom.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetSound->addTab(tabIsaRom, icon2, QString());

        vboxLayout->addWidget(tabWidgetSound);

        QWidget::setTabOrder(comboBoxRTC, pushButtonConfigureRTC);
        QWidget::setTabOrder(pushButtonConfigureRTC, checkBoxISABugger);
        QWidget::setTabOrder(checkBoxISABugger, checkBoxPOSTCard);
        QWidget::setTabOrder(checkBoxPOSTCard, checkBoxUnitTester);
        QWidget::setTabOrder(checkBoxUnitTester, pushButtonConfigureUT);
        QWidget::setTabOrder(pushButtonConfigureUT, checkBoxKeyCard);
        QWidget::setTabOrder(checkBoxKeyCard, pushButtonConfigureKeyCard);
        QWidget::setTabOrder(pushButtonConfigureKeyCard, comboBoxIsaMemCard1);
        QWidget::setTabOrder(comboBoxIsaMemCard1, pushButtonConfigureIsaMemCard1);
        QWidget::setTabOrder(pushButtonConfigureIsaMemCard1, comboBoxIsaMemCard2);
        QWidget::setTabOrder(comboBoxIsaMemCard2, pushButtonConfigureIsaMemCard2);
        QWidget::setTabOrder(pushButtonConfigureIsaMemCard2, comboBoxIsaMemCard3);
        QWidget::setTabOrder(comboBoxIsaMemCard3, pushButtonConfigureIsaMemCard3);
        QWidget::setTabOrder(pushButtonConfigureIsaMemCard3, comboBoxIsaMemCard4);
        QWidget::setTabOrder(comboBoxIsaMemCard4, pushButtonConfigureIsaMemCard4);
        QWidget::setTabOrder(pushButtonConfigureIsaMemCard4, comboBoxIsaRomCard1);
        QWidget::setTabOrder(comboBoxIsaRomCard1, pushButtonConfigureIsaRomCard1);
        QWidget::setTabOrder(pushButtonConfigureIsaRomCard1, comboBoxIsaRomCard2);
        QWidget::setTabOrder(comboBoxIsaRomCard2, pushButtonConfigureIsaRomCard2);
        QWidget::setTabOrder(pushButtonConfigureIsaRomCard2, comboBoxIsaRomCard3);
        QWidget::setTabOrder(comboBoxIsaRomCard3, pushButtonConfigureIsaRomCard3);
        QWidget::setTabOrder(pushButtonConfigureIsaRomCard3, comboBoxIsaRomCard4);
        QWidget::setTabOrder(comboBoxIsaRomCard4, pushButtonConfigureIsaRomCard4);

        retranslateUi(SettingsOtherPeripherals);

        tabWidgetSound->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsOtherPeripherals);
    } // setupUi

    void retranslateUi(QWidget *SettingsOtherPeripherals)
    {
        SettingsOtherPeripherals->setWindowTitle(QCoreApplication::translate("SettingsOtherPeripherals", "Form", nullptr));
        labelRtc->setText(QCoreApplication::translate("SettingsOtherPeripherals", "ISA RTC:", nullptr));
        pushButtonConfigureRTC->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        checkBoxISABugger->setText(QCoreApplication::translate("SettingsOtherPeripherals", "ISABugger device", nullptr));
        checkBoxPOSTCard->setText(QCoreApplication::translate("SettingsOtherPeripherals", "POST card", nullptr));
        checkBoxUnitTester->setText(QCoreApplication::translate("SettingsOtherPeripherals", "86Box Unit Tester", nullptr));
        pushButtonConfigureUT->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        checkBoxKeyCard->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Novell NetWare 2.x Key Card", nullptr));
        pushButtonConfigureKeyCard->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        tabWidgetSound->setTabText(tabWidgetSound->indexOf(tabGeneral), QCoreApplication::translate("SettingsOtherPeripherals", "General", nullptr));
        labelIsaMemCard1->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 1:", nullptr));
        pushButtonConfigureIsaMemCard1->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        labelIsaMemCard2->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 2:", nullptr));
        pushButtonConfigureIsaMemCard2->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        labelIsaMemCard3->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 3:", nullptr));
        pushButtonConfigureIsaMemCard3->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        labelIsaMemCard4->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 4:", nullptr));
        pushButtonConfigureIsaMemCard4->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        tabWidgetSound->setTabText(tabWidgetSound->indexOf(tabIsaMem), QCoreApplication::translate("SettingsOtherPeripherals", "ISA Memory Expansion", nullptr));
        labelIsaRomCard1->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 1:", nullptr));
        pushButtonConfigureIsaRomCard1->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        labelIsaRomCard2->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 2:", nullptr));
        pushButtonConfigureIsaRomCard2->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        labelIsaRomCard3->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 3:", nullptr));
        pushButtonConfigureIsaRomCard3->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        labelIsaRomCard4->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Card 4:", nullptr));
        pushButtonConfigureIsaRomCard4->setText(QCoreApplication::translate("SettingsOtherPeripherals", "Configure", nullptr));
        tabWidgetSound->setTabText(tabWidgetSound->indexOf(tabIsaRom), QCoreApplication::translate("SettingsOtherPeripherals", "ISA ROM Cards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsOtherPeripherals: public Ui_SettingsOtherPeripherals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSOTHERPERIPHERALS_H
