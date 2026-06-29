/********************************************************************************
** Form generated from reading UI file 'qt_settingsnetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSNETWORK_H
#define UI_QT_SETTINGSNETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsNetwork
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetNet;
    QWidget *tabNet1;
    QGridLayout *gridLayoutNet1;
    QLabel *labelMode1;
    QComboBox *comboBoxNet1;
    QLabel *labelAdapter1;
    QComboBox *comboBoxNIC1;
    QPushButton *pushButtonConf1;
    QLabel *labelOptionList1;
    QFrame *lineOptionList1;
    QGridLayout *gridLayoutOptions1;
    QLabel *labelIntf1;
    QComboBox *comboBoxIntf1;
    QLabel *labelSocketVDENIC1;
    QLineEdit *socketVDENIC1;
    QLabel *labelBridgeTAPNIC1;
    QLineEdit *bridgeTAPNIC1;
    QLabel *labelSecret1;
    QLineEdit *secretSwitch1;
    QLabel *labelPromisc1;
    QCheckBox *boxPromisc1;
    QLabel *labelHostname1;
    QLineEdit *hostnameSwitch1;
    QSpacerItem *verticalSpacerNIC1;
    QWidget *tabNet2;
    QGridLayout *gridLayoutNet2;
    QLabel *labelMode2;
    QComboBox *comboBoxNet2;
    QLabel *labelAdapter2;
    QComboBox *comboBoxNIC2;
    QPushButton *pushButtonConf2;
    QLabel *labelOptionList2;
    QFrame *lineOptionList2;
    QGridLayout *gridLayoutOptions2;
    QLabel *labelIntf2;
    QComboBox *comboBoxIntf2;
    QLabel *labelSocketVDENIC2;
    QLineEdit *socketVDENIC2;
    QLabel *labelBridgeTAPNIC2;
    QLineEdit *bridgeTAPNIC2;
    QLabel *labelSecret2;
    QLineEdit *secretSwitch2;
    QLabel *labelPromisc2;
    QCheckBox *boxPromisc2;
    QLabel *labelHostname2;
    QLineEdit *hostnameSwitch2;
    QSpacerItem *verticalSpacerNIC2;
    QWidget *tabNet3;
    QGridLayout *gridLayoutNet3;
    QLabel *labelMode3;
    QComboBox *comboBoxNet3;
    QLabel *labelAdapter3;
    QComboBox *comboBoxNIC3;
    QPushButton *pushButtonConf3;
    QLabel *labelOptionList3;
    QFrame *lineOptionList3;
    QGridLayout *gridLayoutOptions3;
    QLabel *labelIntf3;
    QComboBox *comboBoxIntf3;
    QLabel *labelSocketVDENIC3;
    QLineEdit *socketVDENIC3;
    QLabel *labelBridgeTAPNIC3;
    QLineEdit *bridgeTAPNIC3;
    QLabel *labelSecret3;
    QLineEdit *secretSwitch3;
    QLabel *labelPromisc3;
    QCheckBox *boxPromisc3;
    QLabel *labelHostname3;
    QLineEdit *hostnameSwitch3;
    QSpacerItem *verticalSpacerNIC3;
    QWidget *tabNet4;
    QGridLayout *gridLayoutNet4;
    QLabel *labelMode4;
    QComboBox *comboBoxNet4;
    QLabel *labelAdapter4;
    QComboBox *comboBoxNIC4;
    QPushButton *pushButtonConf4;
    QLabel *labelOptionList4;
    QFrame *lineOptionList4;
    QGridLayout *gridLayoutOptions4;
    QLabel *labelIntf4;
    QComboBox *comboBoxIntf4;
    QLabel *labelSocketVDENIC4;
    QLineEdit *socketVDENIC4;
    QLabel *labelBridgeTAPNIC4;
    QLineEdit *bridgeTAPNIC4;
    QLabel *labelSecret4;
    QLineEdit *secretSwitch4;
    QLabel *labelPromisc4;
    QCheckBox *boxPromisc4;
    QLabel *labelHostname4;
    QLineEdit *hostnameSwitch4;
    QSpacerItem *verticalSpacerNIC4;

    void setupUi(QWidget *SettingsNetwork)
    {
        if (SettingsNetwork->objectName().isEmpty())
            SettingsNetwork->setObjectName(QString::fromUtf8("SettingsNetwork"));
        SettingsNetwork->resize(548, 488);
        verticalLayout = new QVBoxLayout(SettingsNetwork);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetNet = new QTabWidget(SettingsNetwork);
        tabWidgetNet->setObjectName(QString::fromUtf8("tabWidgetNet"));
        tabNet1 = new QWidget();
        tabNet1->setObjectName(QString::fromUtf8("tabNet1"));
        gridLayoutNet1 = new QGridLayout(tabNet1);
        gridLayoutNet1->setObjectName(QString::fromUtf8("gridLayoutNet1"));
        labelMode1 = new QLabel(tabNet1);
        labelMode1->setObjectName(QString::fromUtf8("labelMode1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelMode1->sizePolicy().hasHeightForWidth());
        labelMode1->setSizePolicy(sizePolicy);

        gridLayoutNet1->addWidget(labelMode1, 0, 0, 1, 1);

        comboBoxNet1 = new QComboBox(tabNet1);
        comboBoxNet1->setObjectName(QString::fromUtf8("comboBoxNet1"));
        comboBoxNet1->setMaxVisibleItems(30);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxNet1->sizePolicy().hasHeightForWidth());
        comboBoxNet1->setSizePolicy(sizePolicy1);

        gridLayoutNet1->addWidget(comboBoxNet1, 0, 1, 1, 1);

        labelAdapter1 = new QLabel(tabNet1);
        labelAdapter1->setObjectName(QString::fromUtf8("labelAdapter1"));
        sizePolicy.setHeightForWidth(labelAdapter1->sizePolicy().hasHeightForWidth());
        labelAdapter1->setSizePolicy(sizePolicy);

        gridLayoutNet1->addWidget(labelAdapter1, 1, 0, 1, 1);

        comboBoxNIC1 = new QComboBox(tabNet1);
        comboBoxNIC1->setObjectName(QString::fromUtf8("comboBoxNIC1"));
        sizePolicy1.setHeightForWidth(comboBoxNIC1->sizePolicy().hasHeightForWidth());
        comboBoxNIC1->setSizePolicy(sizePolicy1);
        comboBoxNIC1->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBoxNIC1->setMaxVisibleItems(30);

        gridLayoutNet1->addWidget(comboBoxNIC1, 1, 1, 1, 1);

        pushButtonConf1 = new QPushButton(tabNet1);
        pushButtonConf1->setObjectName(QString::fromUtf8("pushButtonConf1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonConf1->sizePolicy().hasHeightForWidth());
        pushButtonConf1->setSizePolicy(sizePolicy2);

        gridLayoutNet1->addWidget(pushButtonConf1, 1, 2, 1, 1);

        labelOptionList1 = new QLabel(tabNet1);
        labelOptionList1->setObjectName(QString::fromUtf8("labelOptionList1"));

        gridLayoutNet1->addWidget(labelOptionList1, 2, 0, 1, 1);

        lineOptionList1 = new QFrame(tabNet1);
        lineOptionList1->setObjectName(QString::fromUtf8("lineOptionList1"));
        lineOptionList1->setFrameShape(QFrame::HLine);
        lineOptionList1->setFrameShadow(QFrame::Sunken);

        gridLayoutNet1->addWidget(lineOptionList1, 2, 1, 1, 2);

        gridLayoutOptions1 = new QGridLayout();
        gridLayoutOptions1->setObjectName(QString::fromUtf8("gridLayoutOptions1"));
        labelIntf1 = new QLabel(tabNet1);
        labelIntf1->setObjectName(QString::fromUtf8("labelIntf1"));
        sizePolicy.setHeightForWidth(labelIntf1->sizePolicy().hasHeightForWidth());
        labelIntf1->setSizePolicy(sizePolicy);

        gridLayoutOptions1->addWidget(labelIntf1, 0, 0, 1, 1);

        comboBoxIntf1 = new QComboBox(tabNet1);
        comboBoxIntf1->setObjectName(QString::fromUtf8("comboBoxIntf1"));
        sizePolicy1.setHeightForWidth(comboBoxIntf1->sizePolicy().hasHeightForWidth());
        comboBoxIntf1->setSizePolicy(sizePolicy1);

        gridLayoutOptions1->addWidget(comboBoxIntf1, 0, 1, 1, 1);

        labelSocketVDENIC1 = new QLabel(tabNet1);
        labelSocketVDENIC1->setObjectName(QString::fromUtf8("labelSocketVDENIC1"));

        gridLayoutOptions1->addWidget(labelSocketVDENIC1, 1, 0, 1, 1);

        socketVDENIC1 = new QLineEdit(tabNet1);
        socketVDENIC1->setObjectName(QString::fromUtf8("socketVDENIC1"));
        socketVDENIC1->setMaxLength(127);

        gridLayoutOptions1->addWidget(socketVDENIC1, 1, 1, 1, 1);

        labelBridgeTAPNIC1 = new QLabel(tabNet1);
        labelBridgeTAPNIC1->setObjectName(QString::fromUtf8("labelBridgeTAPNIC1"));

        gridLayoutOptions1->addWidget(labelBridgeTAPNIC1, 2, 0, 1, 1);

        bridgeTAPNIC1 = new QLineEdit(tabNet1);
        bridgeTAPNIC1->setObjectName(QString::fromUtf8("bridgeTAPNIC1"));
        bridgeTAPNIC1->setMaxLength(127);

        gridLayoutOptions1->addWidget(bridgeTAPNIC1, 2, 1, 1, 1);

        labelSecret1 = new QLabel(tabNet1);
        labelSecret1->setObjectName(QString::fromUtf8("labelSecret1"));

        gridLayoutOptions1->addWidget(labelSecret1, 3, 0, 1, 1);

        secretSwitch1 = new QLineEdit(tabNet1);
        secretSwitch1->setObjectName(QString::fromUtf8("secretSwitch1"));
        secretSwitch1->setMaxLength(256);

        gridLayoutOptions1->addWidget(secretSwitch1, 3, 1, 1, 1);

        labelPromisc1 = new QLabel(tabNet1);
        labelPromisc1->setObjectName(QString::fromUtf8("labelPromisc1"));

        gridLayoutOptions1->addWidget(labelPromisc1, 4, 0, 1, 1);

        boxPromisc1 = new QCheckBox(tabNet1);
        boxPromisc1->setObjectName(QString::fromUtf8("boxPromisc1"));

        gridLayoutOptions1->addWidget(boxPromisc1, 4, 1, 1, 1);

        labelHostname1 = new QLabel(tabNet1);
        labelHostname1->setObjectName(QString::fromUtf8("labelHostname1"));

        gridLayoutOptions1->addWidget(labelHostname1, 5, 0, 1, 1);

        hostnameSwitch1 = new QLineEdit(tabNet1);
        hostnameSwitch1->setObjectName(QString::fromUtf8("hostnameSwitch1"));
        hostnameSwitch1->setMaxLength(128);

        gridLayoutOptions1->addWidget(hostnameSwitch1, 5, 1, 1, 1);


        gridLayoutNet1->addLayout(gridLayoutOptions1, 3, 0, 1, 3);

        verticalSpacerNIC1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutNet1->addItem(verticalSpacerNIC1, 4, 0, 1, 3);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/network.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetNet->addTab(tabNet1, icon, QString());
        tabNet2 = new QWidget();
        tabNet2->setObjectName(QString::fromUtf8("tabNet2"));
        gridLayoutNet2 = new QGridLayout(tabNet2);
        gridLayoutNet2->setObjectName(QString::fromUtf8("gridLayoutNet2"));
        labelMode2 = new QLabel(tabNet2);
        labelMode2->setObjectName(QString::fromUtf8("labelMode2"));
        sizePolicy.setHeightForWidth(labelMode2->sizePolicy().hasHeightForWidth());
        labelMode2->setSizePolicy(sizePolicy);

        gridLayoutNet2->addWidget(labelMode2, 0, 0, 1, 1);

        comboBoxNet2 = new QComboBox(tabNet2);
        comboBoxNet2->setObjectName(QString::fromUtf8("comboBoxNet2"));
        comboBoxNet2->setMaxVisibleItems(30);
        sizePolicy1.setHeightForWidth(comboBoxNet2->sizePolicy().hasHeightForWidth());
        comboBoxNet2->setSizePolicy(sizePolicy1);

        gridLayoutNet2->addWidget(comboBoxNet2, 0, 1, 1, 1);

        labelAdapter2 = new QLabel(tabNet2);
        labelAdapter2->setObjectName(QString::fromUtf8("labelAdapter2"));
        sizePolicy.setHeightForWidth(labelAdapter2->sizePolicy().hasHeightForWidth());
        labelAdapter2->setSizePolicy(sizePolicy);

        gridLayoutNet2->addWidget(labelAdapter2, 1, 0, 1, 1);

        comboBoxNIC2 = new QComboBox(tabNet2);
        comboBoxNIC2->setObjectName(QString::fromUtf8("comboBoxNIC2"));
        sizePolicy1.setHeightForWidth(comboBoxNIC2->sizePolicy().hasHeightForWidth());
        comboBoxNIC2->setSizePolicy(sizePolicy1);
        comboBoxNIC2->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBoxNIC2->setMaxVisibleItems(30);

        gridLayoutNet2->addWidget(comboBoxNIC2, 1, 1, 1, 1);

        pushButtonConf2 = new QPushButton(tabNet2);
        pushButtonConf2->setObjectName(QString::fromUtf8("pushButtonConf2"));
        sizePolicy2.setHeightForWidth(pushButtonConf2->sizePolicy().hasHeightForWidth());
        pushButtonConf2->setSizePolicy(sizePolicy2);

        gridLayoutNet2->addWidget(pushButtonConf2, 1, 2, 1, 1);

        labelOptionList2 = new QLabel(tabNet2);
        labelOptionList2->setObjectName(QString::fromUtf8("labelOptionList2"));

        gridLayoutNet2->addWidget(labelOptionList2, 2, 0, 1, 1);

        lineOptionList2 = new QFrame(tabNet2);
        lineOptionList2->setObjectName(QString::fromUtf8("lineOptionList2"));
        lineOptionList2->setFrameShape(QFrame::HLine);
        lineOptionList2->setFrameShadow(QFrame::Sunken);

        gridLayoutNet2->addWidget(lineOptionList2, 2, 1, 1, 2);

        gridLayoutOptions2 = new QGridLayout();
        gridLayoutOptions2->setObjectName(QString::fromUtf8("gridLayoutOptions2"));
        labelIntf2 = new QLabel(tabNet2);
        labelIntf2->setObjectName(QString::fromUtf8("labelIntf2"));
        sizePolicy.setHeightForWidth(labelIntf2->sizePolicy().hasHeightForWidth());
        labelIntf2->setSizePolicy(sizePolicy);

        gridLayoutOptions2->addWidget(labelIntf2, 0, 0, 1, 1);

        comboBoxIntf2 = new QComboBox(tabNet2);
        comboBoxIntf2->setObjectName(QString::fromUtf8("comboBoxIntf2"));
        sizePolicy1.setHeightForWidth(comboBoxIntf2->sizePolicy().hasHeightForWidth());
        comboBoxIntf2->setSizePolicy(sizePolicy1);

        gridLayoutOptions2->addWidget(comboBoxIntf2, 0, 1, 1, 1);

        labelSocketVDENIC2 = new QLabel(tabNet2);
        labelSocketVDENIC2->setObjectName(QString::fromUtf8("labelSocketVDENIC2"));

        gridLayoutOptions2->addWidget(labelSocketVDENIC2, 1, 0, 1, 1);

        socketVDENIC2 = new QLineEdit(tabNet2);
        socketVDENIC2->setObjectName(QString::fromUtf8("socketVDENIC2"));
        socketVDENIC2->setMaxLength(127);

        gridLayoutOptions2->addWidget(socketVDENIC2, 1, 1, 1, 1);

        labelBridgeTAPNIC2 = new QLabel(tabNet2);
        labelBridgeTAPNIC2->setObjectName(QString::fromUtf8("labelBridgeTAPNIC2"));

        gridLayoutOptions2->addWidget(labelBridgeTAPNIC2, 2, 0, 1, 1);

        bridgeTAPNIC2 = new QLineEdit(tabNet2);
        bridgeTAPNIC2->setObjectName(QString::fromUtf8("bridgeTAPNIC2"));
        bridgeTAPNIC2->setMaxLength(127);

        gridLayoutOptions2->addWidget(bridgeTAPNIC2, 2, 1, 1, 1);

        labelSecret2 = new QLabel(tabNet2);
        labelSecret2->setObjectName(QString::fromUtf8("labelSecret2"));

        gridLayoutOptions2->addWidget(labelSecret2, 3, 0, 1, 1);

        secretSwitch2 = new QLineEdit(tabNet2);
        secretSwitch2->setObjectName(QString::fromUtf8("secretSwitch2"));
        secretSwitch2->setMaxLength(256);

        gridLayoutOptions2->addWidget(secretSwitch2, 3, 1, 1, 1);

        labelPromisc2 = new QLabel(tabNet2);
        labelPromisc2->setObjectName(QString::fromUtf8("labelPromisc2"));

        gridLayoutOptions2->addWidget(labelPromisc2, 4, 0, 1, 1);

        boxPromisc2 = new QCheckBox(tabNet2);
        boxPromisc2->setObjectName(QString::fromUtf8("boxPromisc2"));

        gridLayoutOptions2->addWidget(boxPromisc2, 4, 1, 1, 1);

        labelHostname2 = new QLabel(tabNet2);
        labelHostname2->setObjectName(QString::fromUtf8("labelHostname2"));

        gridLayoutOptions2->addWidget(labelHostname2, 5, 0, 1, 1);

        hostnameSwitch2 = new QLineEdit(tabNet2);
        hostnameSwitch2->setObjectName(QString::fromUtf8("hostnameSwitch2"));
        hostnameSwitch2->setMaxLength(128);

        gridLayoutOptions2->addWidget(hostnameSwitch2, 5, 1, 1, 1);


        gridLayoutNet2->addLayout(gridLayoutOptions2, 3, 0, 1, 3);

        verticalSpacerNIC2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutNet2->addItem(verticalSpacerNIC2, 4, 0, 1, 3);

        tabWidgetNet->addTab(tabNet2, icon, QString());
        tabNet3 = new QWidget();
        tabNet3->setObjectName(QString::fromUtf8("tabNet3"));
        gridLayoutNet3 = new QGridLayout(tabNet3);
        gridLayoutNet3->setObjectName(QString::fromUtf8("gridLayoutNet3"));
        labelMode3 = new QLabel(tabNet3);
        labelMode3->setObjectName(QString::fromUtf8("labelMode3"));
        sizePolicy.setHeightForWidth(labelMode3->sizePolicy().hasHeightForWidth());
        labelMode3->setSizePolicy(sizePolicy);

        gridLayoutNet3->addWidget(labelMode3, 0, 0, 1, 1);

        comboBoxNet3 = new QComboBox(tabNet3);
        comboBoxNet3->setObjectName(QString::fromUtf8("comboBoxNet3"));
        comboBoxNet3->setMaxVisibleItems(30);
        sizePolicy1.setHeightForWidth(comboBoxNet3->sizePolicy().hasHeightForWidth());
        comboBoxNet3->setSizePolicy(sizePolicy1);

        gridLayoutNet3->addWidget(comboBoxNet3, 0, 1, 1, 1);

        labelAdapter3 = new QLabel(tabNet3);
        labelAdapter3->setObjectName(QString::fromUtf8("labelAdapter3"));
        sizePolicy.setHeightForWidth(labelAdapter3->sizePolicy().hasHeightForWidth());
        labelAdapter3->setSizePolicy(sizePolicy);

        gridLayoutNet3->addWidget(labelAdapter3, 1, 0, 1, 1);

        comboBoxNIC3 = new QComboBox(tabNet3);
        comboBoxNIC3->setObjectName(QString::fromUtf8("comboBoxNIC3"));
        sizePolicy1.setHeightForWidth(comboBoxNIC3->sizePolicy().hasHeightForWidth());
        comboBoxNIC3->setSizePolicy(sizePolicy1);
        comboBoxNIC3->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBoxNIC3->setMaxVisibleItems(30);

        gridLayoutNet3->addWidget(comboBoxNIC3, 1, 1, 1, 1);

        pushButtonConf3 = new QPushButton(tabNet3);
        pushButtonConf3->setObjectName(QString::fromUtf8("pushButtonConf3"));
        sizePolicy2.setHeightForWidth(pushButtonConf3->sizePolicy().hasHeightForWidth());
        pushButtonConf3->setSizePolicy(sizePolicy2);

        gridLayoutNet3->addWidget(pushButtonConf3, 1, 2, 1, 1);

        labelOptionList3 = new QLabel(tabNet3);
        labelOptionList3->setObjectName(QString::fromUtf8("labelOptionList3"));

        gridLayoutNet3->addWidget(labelOptionList3, 2, 0, 1, 1);

        lineOptionList3 = new QFrame(tabNet3);
        lineOptionList3->setObjectName(QString::fromUtf8("lineOptionList3"));
        lineOptionList3->setFrameShape(QFrame::HLine);
        lineOptionList3->setFrameShadow(QFrame::Sunken);

        gridLayoutNet3->addWidget(lineOptionList3, 2, 1, 1, 2);

        gridLayoutOptions3 = new QGridLayout();
        gridLayoutOptions3->setObjectName(QString::fromUtf8("gridLayoutOptions3"));
        labelIntf3 = new QLabel(tabNet3);
        labelIntf3->setObjectName(QString::fromUtf8("labelIntf3"));
        sizePolicy.setHeightForWidth(labelIntf3->sizePolicy().hasHeightForWidth());
        labelIntf3->setSizePolicy(sizePolicy);

        gridLayoutOptions3->addWidget(labelIntf3, 0, 0, 1, 1);

        comboBoxIntf3 = new QComboBox(tabNet3);
        comboBoxIntf3->setObjectName(QString::fromUtf8("comboBoxIntf3"));
        sizePolicy1.setHeightForWidth(comboBoxIntf3->sizePolicy().hasHeightForWidth());
        comboBoxIntf3->setSizePolicy(sizePolicy1);

        gridLayoutOptions3->addWidget(comboBoxIntf3, 0, 1, 1, 1);

        labelSocketVDENIC3 = new QLabel(tabNet3);
        labelSocketVDENIC3->setObjectName(QString::fromUtf8("labelSocketVDENIC3"));

        gridLayoutOptions3->addWidget(labelSocketVDENIC3, 1, 0, 1, 1);

        socketVDENIC3 = new QLineEdit(tabNet3);
        socketVDENIC3->setObjectName(QString::fromUtf8("socketVDENIC3"));
        socketVDENIC3->setMaxLength(127);

        gridLayoutOptions3->addWidget(socketVDENIC3, 1, 1, 1, 1);

        labelBridgeTAPNIC3 = new QLabel(tabNet3);
        labelBridgeTAPNIC3->setObjectName(QString::fromUtf8("labelBridgeTAPNIC3"));

        gridLayoutOptions3->addWidget(labelBridgeTAPNIC3, 2, 0, 1, 1);

        bridgeTAPNIC3 = new QLineEdit(tabNet3);
        bridgeTAPNIC3->setObjectName(QString::fromUtf8("bridgeTAPNIC3"));
        bridgeTAPNIC3->setMaxLength(127);

        gridLayoutOptions3->addWidget(bridgeTAPNIC3, 2, 1, 1, 1);

        labelSecret3 = new QLabel(tabNet3);
        labelSecret3->setObjectName(QString::fromUtf8("labelSecret3"));

        gridLayoutOptions3->addWidget(labelSecret3, 3, 0, 1, 1);

        secretSwitch3 = new QLineEdit(tabNet3);
        secretSwitch3->setObjectName(QString::fromUtf8("secretSwitch3"));
        secretSwitch3->setMaxLength(256);

        gridLayoutOptions3->addWidget(secretSwitch3, 3, 1, 1, 1);

        labelPromisc3 = new QLabel(tabNet3);
        labelPromisc3->setObjectName(QString::fromUtf8("labelPromisc3"));

        gridLayoutOptions3->addWidget(labelPromisc3, 4, 0, 1, 1);

        boxPromisc3 = new QCheckBox(tabNet3);
        boxPromisc3->setObjectName(QString::fromUtf8("boxPromisc3"));

        gridLayoutOptions3->addWidget(boxPromisc3, 4, 1, 1, 1);

        labelHostname3 = new QLabel(tabNet3);
        labelHostname3->setObjectName(QString::fromUtf8("labelHostname3"));

        gridLayoutOptions3->addWidget(labelHostname3, 5, 0, 1, 1);

        hostnameSwitch3 = new QLineEdit(tabNet3);
        hostnameSwitch3->setObjectName(QString::fromUtf8("hostnameSwitch3"));
        hostnameSwitch3->setMaxLength(128);

        gridLayoutOptions3->addWidget(hostnameSwitch3, 5, 1, 1, 1);


        gridLayoutNet3->addLayout(gridLayoutOptions3, 3, 0, 1, 3);

        verticalSpacerNIC3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutNet3->addItem(verticalSpacerNIC3, 4, 0, 1, 3);

        tabWidgetNet->addTab(tabNet3, icon, QString());
        tabNet4 = new QWidget();
        tabNet4->setObjectName(QString::fromUtf8("tabNet4"));
        gridLayoutNet4 = new QGridLayout(tabNet4);
        gridLayoutNet4->setObjectName(QString::fromUtf8("gridLayoutNet4"));
        labelMode4 = new QLabel(tabNet4);
        labelMode4->setObjectName(QString::fromUtf8("labelMode4"));
        sizePolicy.setHeightForWidth(labelMode4->sizePolicy().hasHeightForWidth());
        labelMode4->setSizePolicy(sizePolicy);

        gridLayoutNet4->addWidget(labelMode4, 0, 0, 1, 1);

        comboBoxNet4 = new QComboBox(tabNet4);
        comboBoxNet4->setObjectName(QString::fromUtf8("comboBoxNet4"));
        comboBoxNet4->setMaxVisibleItems(30);
        sizePolicy1.setHeightForWidth(comboBoxNet4->sizePolicy().hasHeightForWidth());
        comboBoxNet4->setSizePolicy(sizePolicy1);

        gridLayoutNet4->addWidget(comboBoxNet4, 0, 1, 1, 1);

        labelAdapter4 = new QLabel(tabNet4);
        labelAdapter4->setObjectName(QString::fromUtf8("labelAdapter4"));
        sizePolicy.setHeightForWidth(labelAdapter4->sizePolicy().hasHeightForWidth());
        labelAdapter4->setSizePolicy(sizePolicy);

        gridLayoutNet4->addWidget(labelAdapter4, 1, 0, 1, 1);

        comboBoxNIC4 = new QComboBox(tabNet4);
        comboBoxNIC4->setObjectName(QString::fromUtf8("comboBoxNIC4"));
        sizePolicy1.setHeightForWidth(comboBoxNIC4->sizePolicy().hasHeightForWidth());
        comboBoxNIC4->setSizePolicy(sizePolicy1);
        comboBoxNIC4->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBoxNIC4->setMaxVisibleItems(30);

        gridLayoutNet4->addWidget(comboBoxNIC4, 1, 1, 1, 1);

        pushButtonConf4 = new QPushButton(tabNet4);
        pushButtonConf4->setObjectName(QString::fromUtf8("pushButtonConf4"));
        sizePolicy2.setHeightForWidth(pushButtonConf4->sizePolicy().hasHeightForWidth());
        pushButtonConf4->setSizePolicy(sizePolicy2);

        gridLayoutNet4->addWidget(pushButtonConf4, 1, 2, 1, 1);

        labelOptionList4 = new QLabel(tabNet4);
        labelOptionList4->setObjectName(QString::fromUtf8("labelOptionList4"));

        gridLayoutNet4->addWidget(labelOptionList4, 2, 0, 1, 1);

        lineOptionList4 = new QFrame(tabNet4);
        lineOptionList4->setObjectName(QString::fromUtf8("lineOptionList4"));
        lineOptionList4->setFrameShape(QFrame::HLine);
        lineOptionList4->setFrameShadow(QFrame::Sunken);

        gridLayoutNet4->addWidget(lineOptionList4, 2, 1, 1, 2);

        gridLayoutOptions4 = new QGridLayout();
        gridLayoutOptions4->setObjectName(QString::fromUtf8("gridLayoutOptions4"));
        labelIntf4 = new QLabel(tabNet4);
        labelIntf4->setObjectName(QString::fromUtf8("labelIntf4"));
        sizePolicy.setHeightForWidth(labelIntf4->sizePolicy().hasHeightForWidth());
        labelIntf4->setSizePolicy(sizePolicy);

        gridLayoutOptions4->addWidget(labelIntf4, 0, 0, 1, 1);

        comboBoxIntf4 = new QComboBox(tabNet4);
        comboBoxIntf4->setObjectName(QString::fromUtf8("comboBoxIntf4"));
        sizePolicy1.setHeightForWidth(comboBoxIntf4->sizePolicy().hasHeightForWidth());
        comboBoxIntf4->setSizePolicy(sizePolicy1);

        gridLayoutOptions4->addWidget(comboBoxIntf4, 0, 1, 1, 1);

        labelSocketVDENIC4 = new QLabel(tabNet4);
        labelSocketVDENIC4->setObjectName(QString::fromUtf8("labelSocketVDENIC4"));

        gridLayoutOptions4->addWidget(labelSocketVDENIC4, 1, 0, 1, 1);

        socketVDENIC4 = new QLineEdit(tabNet4);
        socketVDENIC4->setObjectName(QString::fromUtf8("socketVDENIC4"));
        socketVDENIC4->setMaxLength(127);

        gridLayoutOptions4->addWidget(socketVDENIC4, 1, 1, 1, 1);

        labelBridgeTAPNIC4 = new QLabel(tabNet4);
        labelBridgeTAPNIC4->setObjectName(QString::fromUtf8("labelBridgeTAPNIC4"));

        gridLayoutOptions4->addWidget(labelBridgeTAPNIC4, 2, 0, 1, 1);

        bridgeTAPNIC4 = new QLineEdit(tabNet4);
        bridgeTAPNIC4->setObjectName(QString::fromUtf8("bridgeTAPNIC4"));
        bridgeTAPNIC4->setMaxLength(127);

        gridLayoutOptions4->addWidget(bridgeTAPNIC4, 2, 1, 1, 1);

        labelSecret4 = new QLabel(tabNet4);
        labelSecret4->setObjectName(QString::fromUtf8("labelSecret4"));

        gridLayoutOptions4->addWidget(labelSecret4, 3, 0, 1, 1);

        secretSwitch4 = new QLineEdit(tabNet4);
        secretSwitch4->setObjectName(QString::fromUtf8("secretSwitch4"));
        secretSwitch4->setMaxLength(256);

        gridLayoutOptions4->addWidget(secretSwitch4, 3, 1, 1, 1);

        labelPromisc4 = new QLabel(tabNet4);
        labelPromisc4->setObjectName(QString::fromUtf8("labelPromisc4"));

        gridLayoutOptions4->addWidget(labelPromisc4, 4, 0, 1, 1);

        boxPromisc4 = new QCheckBox(tabNet4);
        boxPromisc4->setObjectName(QString::fromUtf8("boxPromisc4"));

        gridLayoutOptions4->addWidget(boxPromisc4, 4, 1, 1, 1);

        labelHostname4 = new QLabel(tabNet4);
        labelHostname4->setObjectName(QString::fromUtf8("labelHostname4"));

        gridLayoutOptions4->addWidget(labelHostname4, 5, 0, 1, 1);

        hostnameSwitch4 = new QLineEdit(tabNet4);
        hostnameSwitch4->setObjectName(QString::fromUtf8("hostnameSwitch4"));
        hostnameSwitch4->setMaxLength(128);

        gridLayoutOptions4->addWidget(hostnameSwitch4, 5, 1, 1, 1);


        gridLayoutNet4->addLayout(gridLayoutOptions4, 3, 0, 1, 3);

        verticalSpacerNIC4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutNet4->addItem(verticalSpacerNIC4, 4, 0, 1, 3);

        tabWidgetNet->addTab(tabNet4, icon, QString());

        verticalLayout->addWidget(tabWidgetNet);


        retranslateUi(SettingsNetwork);

        tabWidgetNet->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsNetwork);
    } // setupUi

    void retranslateUi(QWidget *SettingsNetwork)
    {
        SettingsNetwork->setWindowTitle(QCoreApplication::translate("SettingsNetwork", "Form", nullptr));
        labelMode1->setText(QCoreApplication::translate("SettingsNetwork", "Mode:", nullptr));
        labelAdapter1->setText(QCoreApplication::translate("SettingsNetwork", "Adapter:", nullptr));
        pushButtonConf1->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        labelOptionList1->setText(QCoreApplication::translate("SettingsNetwork", "Options", nullptr));
        labelIntf1->setText(QCoreApplication::translate("SettingsNetwork", "Interface:", nullptr));
        labelSocketVDENIC1->setText(QCoreApplication::translate("SettingsNetwork", "VDE Socket:", nullptr));
        labelBridgeTAPNIC1->setText(QCoreApplication::translate("SettingsNetwork", "TAP Bridge Device:", nullptr));
        labelSecret1->setText(QCoreApplication::translate("SettingsNetwork", "Shared secret:", nullptr));
        labelPromisc1->setText(QCoreApplication::translate("SettingsNetwork", "Hub Mode", nullptr));
        boxPromisc1->setText(QString());
        labelHostname1->setText(QCoreApplication::translate("SettingsNetwork", "Hostname:", nullptr));
        tabWidgetNet->setTabText(tabWidgetNet->indexOf(tabNet1), QCoreApplication::translate("SettingsNetwork", "Network Card #1", nullptr));
        labelMode2->setText(QCoreApplication::translate("SettingsNetwork", "Mode:", nullptr));
        labelAdapter2->setText(QCoreApplication::translate("SettingsNetwork", "Adapter:", nullptr));
        pushButtonConf2->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        labelOptionList2->setText(QCoreApplication::translate("SettingsNetwork", "Options", nullptr));
        labelIntf2->setText(QCoreApplication::translate("SettingsNetwork", "Interface:", nullptr));
        labelSocketVDENIC2->setText(QCoreApplication::translate("SettingsNetwork", "VDE Socket:", nullptr));
        labelBridgeTAPNIC2->setText(QCoreApplication::translate("SettingsNetwork", "TAP Bridge Device:", nullptr));
        labelSecret2->setText(QCoreApplication::translate("SettingsNetwork", "Shared secret:", nullptr));
        labelPromisc2->setText(QCoreApplication::translate("SettingsNetwork", "Hub Mode", nullptr));
        boxPromisc2->setText(QString());
        labelHostname2->setText(QCoreApplication::translate("SettingsNetwork", "Hostname:", nullptr));
        tabWidgetNet->setTabText(tabWidgetNet->indexOf(tabNet2), QCoreApplication::translate("SettingsNetwork", "Network Card #2", nullptr));
        labelMode3->setText(QCoreApplication::translate("SettingsNetwork", "Mode:", nullptr));
        labelAdapter3->setText(QCoreApplication::translate("SettingsNetwork", "Adapter:", nullptr));
        pushButtonConf3->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        labelOptionList3->setText(QCoreApplication::translate("SettingsNetwork", "Options", nullptr));
        labelIntf3->setText(QCoreApplication::translate("SettingsNetwork", "Interface:", nullptr));
        labelSocketVDENIC3->setText(QCoreApplication::translate("SettingsNetwork", "VDE Socket:", nullptr));
        labelBridgeTAPNIC3->setText(QCoreApplication::translate("SettingsNetwork", "TAP Bridge Device:", nullptr));
        labelSecret3->setText(QCoreApplication::translate("SettingsNetwork", "Shared secret:", nullptr));
        labelPromisc3->setText(QCoreApplication::translate("SettingsNetwork", "Hub Mode", nullptr));
        boxPromisc3->setText(QString());
        labelHostname3->setText(QCoreApplication::translate("SettingsNetwork", "Hostname:", nullptr));
        tabWidgetNet->setTabText(tabWidgetNet->indexOf(tabNet3), QCoreApplication::translate("SettingsNetwork", "Network Card #3", nullptr));
        labelMode4->setText(QCoreApplication::translate("SettingsNetwork", "Mode:", nullptr));
        labelAdapter4->setText(QCoreApplication::translate("SettingsNetwork", "Adapter:", nullptr));
        pushButtonConf4->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        labelOptionList4->setText(QCoreApplication::translate("SettingsNetwork", "Options", nullptr));
        labelIntf4->setText(QCoreApplication::translate("SettingsNetwork", "Interface:", nullptr));
        labelSocketVDENIC4->setText(QCoreApplication::translate("SettingsNetwork", "VDE Socket:", nullptr));
        labelBridgeTAPNIC4->setText(QCoreApplication::translate("SettingsNetwork", "TAP Bridge Device:", nullptr));
        labelSecret4->setText(QCoreApplication::translate("SettingsNetwork", "Shared secret:", nullptr));
        labelPromisc4->setText(QCoreApplication::translate("SettingsNetwork", "Hub Mode", nullptr));
        boxPromisc4->setText(QString());
        labelHostname4->setText(QCoreApplication::translate("SettingsNetwork", "Hostname:", nullptr));
        tabWidgetNet->setTabText(tabWidgetNet->indexOf(tabNet4), QCoreApplication::translate("SettingsNetwork", "Network Card #4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsNetwork: public Ui_SettingsNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSNETWORK_H
