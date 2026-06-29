/********************************************************************************
** Form generated from reading UI file 'qt_settingsharddisks.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSHARDDISKS_H
#define UI_QT_SETTINGSHARDDISKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsHarddisks
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QWidget *hdControls;
    QGridLayout *gridLayout;
    QLabel *labelBus;
    QComboBox *comboBoxBus;
    QLabel *labelChannel;
    QComboBox *comboBoxChannel;
    QLabel *labelSpeed;
    QComboBox *comboBoxSpeed;
    QLabel *labelAudio;
    QComboBox *comboBoxAudio;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonExisting;
    QPushButton *pushButtonRemove;

    void setupUi(QWidget *SettingsHarddisks)
    {
        if (SettingsHarddisks->objectName().isEmpty())
            SettingsHarddisks->setObjectName(QString::fromUtf8("SettingsHarddisks"));
        SettingsHarddisks->resize(400, 300);
        verticalLayout = new QVBoxLayout(SettingsHarddisks);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(SettingsHarddisks);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setTabKeyNavigation(false);
        tableView->setShowGrid(false);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        hdControls = new QWidget(SettingsHarddisks);
        hdControls->setObjectName(QString::fromUtf8("hdControls"));
        gridLayout = new QGridLayout(hdControls);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelBus = new QLabel(hdControls);
        labelBus->setObjectName(QString::fromUtf8("labelBus"));

        gridLayout->addWidget(labelBus, 0, 0, 1, 1);

        comboBoxBus = new QComboBox(hdControls);
        comboBoxBus->setObjectName(QString::fromUtf8("comboBoxBus"));
        comboBoxBus->setMaxVisibleItems(30);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxBus->sizePolicy().hasHeightForWidth());
        comboBoxBus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxBus, 0, 1, 1, 1);

        labelChannel = new QLabel(hdControls);
        labelChannel->setObjectName(QString::fromUtf8("labelChannel"));

        gridLayout->addWidget(labelChannel, 0, 2, 1, 1);

        comboBoxChannel = new QComboBox(hdControls);
        comboBoxChannel->setObjectName(QString::fromUtf8("comboBoxChannel"));
        comboBoxChannel->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxChannel->sizePolicy().hasHeightForWidth());
        comboBoxChannel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxChannel, 0, 3, 1, 1);

        labelSpeed = new QLabel(hdControls);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));

        gridLayout->addWidget(labelSpeed, 1, 0, 1, 1);

        comboBoxSpeed = new QComboBox(hdControls);
        comboBoxSpeed->setObjectName(QString::fromUtf8("comboBoxSpeed"));
        comboBoxSpeed->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxSpeed->sizePolicy().hasHeightForWidth());
        comboBoxSpeed->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxSpeed, 1, 1, 1, 3);

        labelAudio = new QLabel(hdControls);
        labelAudio->setObjectName(QString::fromUtf8("labelAudio"));

        gridLayout->addWidget(labelAudio, 2, 0, 1, 1);

        comboBoxAudio = new QComboBox(hdControls);
        comboBoxAudio->setObjectName(QString::fromUtf8("comboBoxAudio"));
        comboBoxAudio->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxAudio->sizePolicy().hasHeightForWidth());
        comboBoxAudio->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxAudio, 2, 1, 1, 3);


        verticalLayout->addWidget(hdControls);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonNew = new QPushButton(SettingsHarddisks);
        pushButtonNew->setObjectName(QString::fromUtf8("pushButtonNew"));

        horizontalLayout_2->addWidget(pushButtonNew);

        pushButtonExisting = new QPushButton(SettingsHarddisks);
        pushButtonExisting->setObjectName(QString::fromUtf8("pushButtonExisting"));

        horizontalLayout_2->addWidget(pushButtonExisting);

        pushButtonRemove = new QPushButton(SettingsHarddisks);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));

        horizontalLayout_2->addWidget(pushButtonRemove);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SettingsHarddisks);

        QMetaObject::connectSlotsByName(SettingsHarddisks);
    } // setupUi

    void retranslateUi(QWidget *SettingsHarddisks)
    {
        SettingsHarddisks->setWindowTitle(QCoreApplication::translate("SettingsHarddisks", "Form", nullptr));
        labelBus->setText(QCoreApplication::translate("SettingsHarddisks", "Bus:", nullptr));
        labelChannel->setText(QCoreApplication::translate("SettingsHarddisks", "Channel:", nullptr));
        labelSpeed->setText(QCoreApplication::translate("SettingsHarddisks", "Model:", nullptr));
        labelAudio->setText(QCoreApplication::translate("SettingsHarddisks", "Audio:", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("SettingsHarddisks", "&New\342\200\246", nullptr));
        pushButtonExisting->setText(QCoreApplication::translate("SettingsHarddisks", "&Existing\342\200\246", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("SettingsHarddisks", "&Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsHarddisks: public Ui_SettingsHarddisks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSHARDDISKS_H
