/********************************************************************************
** Form generated from reading UI file 'qt_settingsotherremovable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSOTHERREMOVABLE_H
#define UI_QT_SETTINGSOTHERREMOVABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsOtherRemovable
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetOtherRemovable;
    QWidget *tabMO;
    QVBoxLayout *verticalLayoutMO;
    QTableView *tableViewMO;
    QWidget *moControls;
    QGridLayout *gridLayout;
    QLabel *labelMOBus;
    QComboBox *comboBoxMOBus;
    QLabel *labelMOChannel;
    QComboBox *comboBoxMOChannel;
    QLabel *labelMOType;
    QComboBox *comboBoxMOType;
    QWidget *tabRDisk;
    QVBoxLayout *verticalLayoutRDisk;
    QTableView *tableViewRDisk;
    QWidget *rdiskControls;
    QGridLayout *gridLayout_2;
    QLabel *labelRDiskBus;
    QComboBox *comboBoxRDiskBus;
    QLabel *labelRDiskChannel;
    QComboBox *comboBoxRDiskChannel;
    QLabel *labelRDiskType;
    QComboBox *comboBoxRDiskType;
    QWidget *tabTape;
    QVBoxLayout *verticalLayoutTape;
    QTableView *tableViewTape;
    QWidget *tapeControls;
    QGridLayout *gridLayout_3;
    QLabel *labelTapeBus;
    QComboBox *comboBoxTapeBus;
    QLabel *labelTapeChannel;
    QComboBox *comboBoxTapeChannel;
    QLabel *labelTapeType;
    QComboBox *comboBoxTapeType;

    void setupUi(QWidget *SettingsOtherRemovable)
    {
        if (SettingsOtherRemovable->objectName().isEmpty())
            SettingsOtherRemovable->setObjectName(QString::fromUtf8("SettingsOtherRemovable"));
        SettingsOtherRemovable->resize(418, 368);
        verticalLayout = new QVBoxLayout(SettingsOtherRemovable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetOtherRemovable = new QTabWidget(SettingsOtherRemovable);
        tabWidgetOtherRemovable->setObjectName(QString::fromUtf8("tabWidgetOtherRemovable"));
        tabMO = new QWidget();
        tabMO->setObjectName(QString::fromUtf8("tabMO"));
        verticalLayoutMO = new QVBoxLayout(tabMO);
        verticalLayoutMO->setObjectName(QString::fromUtf8("verticalLayoutMO"));
        tableViewMO = new QTableView(tabMO);
        tableViewMO->setObjectName(QString::fromUtf8("tableViewMO"));
        tableViewMO->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewMO->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewMO->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewMO->setTabKeyNavigation(false);
        tableViewMO->setShowGrid(false);
        tableViewMO->verticalHeader()->setVisible(false);

        verticalLayoutMO->addWidget(tableViewMO);

        moControls = new QWidget(tabMO);
        moControls->setObjectName(QString::fromUtf8("moControls"));
        gridLayout = new QGridLayout(moControls);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelMOBus = new QLabel(moControls);
        labelMOBus->setObjectName(QString::fromUtf8("labelMOBus"));

        gridLayout->addWidget(labelMOBus, 0, 0, 1, 1);

        comboBoxMOBus = new QComboBox(moControls);
        comboBoxMOBus->setObjectName(QString::fromUtf8("comboBoxMOBus"));
        comboBoxMOBus->setMaxVisibleItems(30);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxMOBus->sizePolicy().hasHeightForWidth());
        comboBoxMOBus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxMOBus, 0, 1, 1, 1);

        labelMOChannel = new QLabel(moControls);
        labelMOChannel->setObjectName(QString::fromUtf8("labelMOChannel"));

        gridLayout->addWidget(labelMOChannel, 0, 2, 1, 1);

        comboBoxMOChannel = new QComboBox(moControls);
        comboBoxMOChannel->setObjectName(QString::fromUtf8("comboBoxMOChannel"));
        comboBoxMOChannel->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxMOChannel->sizePolicy().hasHeightForWidth());
        comboBoxMOChannel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxMOChannel, 0, 3, 1, 1);

        labelMOType = new QLabel(moControls);
        labelMOType->setObjectName(QString::fromUtf8("labelMOType"));

        gridLayout->addWidget(labelMOType, 1, 0, 1, 1);

        comboBoxMOType = new QComboBox(moControls);
        comboBoxMOType->setObjectName(QString::fromUtf8("comboBoxMOType"));
        comboBoxMOType->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxMOType->sizePolicy().hasHeightForWidth());
        comboBoxMOType->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxMOType, 1, 1, 1, 3);


        verticalLayoutMO->addWidget(moControls);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/mo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetOtherRemovable->addTab(tabMO, icon, QString());
        tabRDisk = new QWidget();
        tabRDisk->setObjectName(QString::fromUtf8("tabRDisk"));
        verticalLayoutRDisk = new QVBoxLayout(tabRDisk);
        verticalLayoutRDisk->setObjectName(QString::fromUtf8("verticalLayoutRDisk"));
        tableViewRDisk = new QTableView(tabRDisk);
        tableViewRDisk->setObjectName(QString::fromUtf8("tableViewRDisk"));
        tableViewRDisk->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewRDisk->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewRDisk->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewRDisk->setTabKeyNavigation(false);
        tableViewRDisk->setShowGrid(false);
        tableViewRDisk->verticalHeader()->setVisible(false);

        verticalLayoutRDisk->addWidget(tableViewRDisk);

        rdiskControls = new QWidget(tabRDisk);
        rdiskControls->setObjectName(QString::fromUtf8("rdiskControls"));
        gridLayout_2 = new QGridLayout(rdiskControls);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelRDiskBus = new QLabel(rdiskControls);
        labelRDiskBus->setObjectName(QString::fromUtf8("labelRDiskBus"));

        gridLayout_2->addWidget(labelRDiskBus, 0, 0, 1, 1);

        comboBoxRDiskBus = new QComboBox(rdiskControls);
        comboBoxRDiskBus->setObjectName(QString::fromUtf8("comboBoxRDiskBus"));
        comboBoxRDiskBus->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxRDiskBus->sizePolicy().hasHeightForWidth());
        comboBoxRDiskBus->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxRDiskBus, 0, 1, 1, 1);

        labelRDiskChannel = new QLabel(rdiskControls);
        labelRDiskChannel->setObjectName(QString::fromUtf8("labelRDiskChannel"));

        gridLayout_2->addWidget(labelRDiskChannel, 0, 2, 1, 1);

        comboBoxRDiskChannel = new QComboBox(rdiskControls);
        comboBoxRDiskChannel->setObjectName(QString::fromUtf8("comboBoxRDiskChannel"));
        comboBoxRDiskChannel->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxRDiskChannel->sizePolicy().hasHeightForWidth());
        comboBoxRDiskChannel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxRDiskChannel, 0, 3, 1, 1);

        labelRDiskType = new QLabel(rdiskControls);
        labelRDiskType->setObjectName(QString::fromUtf8("labelRDiskType"));

        gridLayout_2->addWidget(labelRDiskType, 1, 0, 1, 1);

        comboBoxRDiskType = new QComboBox(rdiskControls);
        comboBoxRDiskType->setObjectName(QString::fromUtf8("comboBoxRDiskType"));
        comboBoxRDiskType->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxRDiskType->sizePolicy().hasHeightForWidth());
        comboBoxRDiskType->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxRDiskType, 1, 1, 1, 3);


        verticalLayoutRDisk->addWidget(rdiskControls);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/rdisk_tab.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetOtherRemovable->addTab(tabRDisk, icon1, QString());
        tabTape = new QWidget();
        tabTape->setObjectName(QString::fromUtf8("tabTape"));
        verticalLayoutTape = new QVBoxLayout(tabTape);
        verticalLayoutTape->setObjectName(QString::fromUtf8("verticalLayoutTape"));
        tableViewTape = new QTableView(tabTape);
        tableViewTape->setObjectName(QString::fromUtf8("tableViewTape"));
        tableViewTape->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewTape->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewTape->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewTape->setTabKeyNavigation(false);
        tableViewTape->setShowGrid(false);
        tableViewTape->verticalHeader()->setVisible(false);

        verticalLayoutTape->addWidget(tableViewTape);

        tapeControls = new QWidget(tabTape);
        tapeControls->setObjectName(QString::fromUtf8("tapeControls"));
        gridLayout_3 = new QGridLayout(tapeControls);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelTapeBus = new QLabel(tapeControls);
        labelTapeBus->setObjectName(QString::fromUtf8("labelTapeBus"));

        gridLayout_3->addWidget(labelTapeBus, 0, 0, 1, 1);

        comboBoxTapeBus = new QComboBox(tapeControls);
        comboBoxTapeBus->setObjectName(QString::fromUtf8("comboBoxTapeBus"));
        comboBoxTapeBus->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxTapeBus->sizePolicy().hasHeightForWidth());
        comboBoxTapeBus->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(comboBoxTapeBus, 0, 1, 1, 1);

        labelTapeChannel = new QLabel(tapeControls);
        labelTapeChannel->setObjectName(QString::fromUtf8("labelTapeChannel"));

        gridLayout_3->addWidget(labelTapeChannel, 0, 2, 1, 1);

        comboBoxTapeChannel = new QComboBox(tapeControls);
        comboBoxTapeChannel->setObjectName(QString::fromUtf8("comboBoxTapeChannel"));
        comboBoxTapeChannel->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxTapeChannel->sizePolicy().hasHeightForWidth());
        comboBoxTapeChannel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(comboBoxTapeChannel, 0, 3, 1, 1);

        labelTapeType = new QLabel(tapeControls);
        labelTapeType->setObjectName(QString::fromUtf8("labelTapeType"));

        gridLayout_3->addWidget(labelTapeType, 1, 0, 1, 1);

        comboBoxTapeType = new QComboBox(tapeControls);
        comboBoxTapeType->setObjectName(QString::fromUtf8("comboBoxTapeType"));
        comboBoxTapeType->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxTapeType->sizePolicy().hasHeightForWidth());
        comboBoxTapeType->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(comboBoxTapeType, 1, 1, 1, 3);


        verticalLayoutTape->addWidget(tapeControls);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/settings/qt/icons/tape.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetOtherRemovable->addTab(tabTape, icon2, QString());

        verticalLayout->addWidget(tabWidgetOtherRemovable);

        QWidget::setTabOrder(tableViewMO, comboBoxMOBus);
        QWidget::setTabOrder(comboBoxMOBus, comboBoxMOChannel);
        QWidget::setTabOrder(comboBoxMOChannel, comboBoxMOType);
        QWidget::setTabOrder(comboBoxMOType, tableViewRDisk);
        QWidget::setTabOrder(tableViewRDisk, comboBoxRDiskBus);
        QWidget::setTabOrder(comboBoxRDiskBus, comboBoxRDiskChannel);
        QWidget::setTabOrder(comboBoxRDiskChannel, comboBoxRDiskType);
        QWidget::setTabOrder(comboBoxRDiskType, tableViewTape);
        QWidget::setTabOrder(tableViewTape, comboBoxTapeBus);
        QWidget::setTabOrder(comboBoxTapeBus, comboBoxTapeChannel);
        QWidget::setTabOrder(comboBoxTapeChannel, comboBoxTapeType);

        retranslateUi(SettingsOtherRemovable);

        tabWidgetOtherRemovable->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsOtherRemovable);
    } // setupUi

    void retranslateUi(QWidget *SettingsOtherRemovable)
    {
        SettingsOtherRemovable->setWindowTitle(QCoreApplication::translate("SettingsOtherRemovable", "Form", nullptr));
        labelMOBus->setText(QCoreApplication::translate("SettingsOtherRemovable", "Bus:", nullptr));
        labelMOChannel->setText(QCoreApplication::translate("SettingsOtherRemovable", "Channel:", nullptr));
        labelMOType->setText(QCoreApplication::translate("SettingsOtherRemovable", "Type:", nullptr));
        tabWidgetOtherRemovable->setTabText(tabWidgetOtherRemovable->indexOf(tabMO), QCoreApplication::translate("SettingsOtherRemovable", "MO drives", nullptr));
        labelRDiskBus->setText(QCoreApplication::translate("SettingsOtherRemovable", "Bus:", nullptr));
        labelRDiskChannel->setText(QCoreApplication::translate("SettingsOtherRemovable", "Channel:", nullptr));
        labelRDiskType->setText(QCoreApplication::translate("SettingsOtherRemovable", "Type:", nullptr));
        tabWidgetOtherRemovable->setTabText(tabWidgetOtherRemovable->indexOf(tabRDisk), QCoreApplication::translate("SettingsOtherRemovable", "Removable disk drives", nullptr));
        labelTapeBus->setText(QCoreApplication::translate("SettingsOtherRemovable", "Bus:", nullptr));
        labelTapeChannel->setText(QCoreApplication::translate("SettingsOtherRemovable", "Channel:", nullptr));
        labelTapeType->setText(QCoreApplication::translate("SettingsOtherRemovable", "Type:", nullptr));
        tabWidgetOtherRemovable->setTabText(tabWidgetOtherRemovable->indexOf(tabTape), QCoreApplication::translate("SettingsOtherRemovable", "Tape drives", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsOtherRemovable: public Ui_SettingsOtherRemovable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSOTHERREMOVABLE_H
