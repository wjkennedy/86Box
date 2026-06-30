/********************************************************************************
** Form generated from reading UI file 'qt_settingsdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSDISPLAY_H
#define UI_QT_SETTINGSDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt_filefield.hpp"

QT_BEGIN_NAMESPACE

class Ui_SettingsDisplay
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidgetDisplay;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayoutGeneral;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelVideo;
    QComboBox *comboBoxVideo;
    QPushButton *pushButtonConfigureVideo;
    QLabel *labelVideoSecondary;
    QComboBox *comboBoxVideoSecondary;
    QPushButton *pushButtonConfigureVideoSecondary;
    QGroupBox *groupBoxEDID;
    QVBoxLayout *verticalLayoutGroupBoxEDID;
    QHBoxLayout *horizontalLayoutEDIDDefault;
    QRadioButton *radioButtonDefault;
    QPushButton *pushButtonExportDefault;
    QHBoxLayout *horizontalLayoutEDIDCustom;
    QRadioButton *radioButtonCustom;
    FileField *lineEditCustomEDID;
    QSpacerItem *verticalSpacerGeneral;
    QWidget *tabAccelerators;
    QVBoxLayout *verticalLayoutAccelerators;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxVoodoo;
    QPushButton *pushButtonConfigureVoodoo;
    QCheckBox *checkBox8514;
    QPushButton *pushButtonConfigure8514;
    QCheckBox *checkBoxXga;
    QPushButton *pushButtonConfigureXga;
    QCheckBox *checkBoxDa2;
    QPushButton *pushButtonConfigureDa2;
    QSpacerItem *verticalSpacerAccelerators;

    void setupUi(QWidget *SettingsDisplay)
    {
        if (SettingsDisplay->objectName().isEmpty())
            SettingsDisplay->setObjectName(QString::fromUtf8("SettingsDisplay"));
        SettingsDisplay->resize(400, 466);
        vboxLayout = new QVBoxLayout(SettingsDisplay);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetDisplay = new QTabWidget(SettingsDisplay);
        tabWidgetDisplay->setObjectName(QString::fromUtf8("tabWidgetDisplay"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayoutGeneral = new QVBoxLayout(tabGeneral);
        verticalLayoutGeneral->setObjectName(QString::fromUtf8("verticalLayoutGeneral"));
        widget = new QWidget(tabGeneral);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelVideo = new QLabel(widget);
        labelVideo->setObjectName(QString::fromUtf8("labelVideo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelVideo->sizePolicy().hasHeightForWidth());
        labelVideo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelVideo, 0, 0, 1, 1);

        comboBoxVideo = new QComboBox(widget);
        comboBoxVideo->setObjectName(QString::fromUtf8("comboBoxVideo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxVideo->sizePolicy().hasHeightForWidth());
        comboBoxVideo->setSizePolicy(sizePolicy1);
        comboBoxVideo->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxVideo, 1, 0, 1, 2);

        pushButtonConfigureVideo = new QPushButton(widget);
        pushButtonConfigureVideo->setObjectName(QString::fromUtf8("pushButtonConfigureVideo"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonConfigureVideo->sizePolicy().hasHeightForWidth());
        pushButtonConfigureVideo->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButtonConfigureVideo, 1, 2, 1, 1);

        labelVideoSecondary = new QLabel(widget);
        labelVideoSecondary->setObjectName(QString::fromUtf8("labelVideoSecondary"));
        sizePolicy.setHeightForWidth(labelVideoSecondary->sizePolicy().hasHeightForWidth());
        labelVideoSecondary->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelVideoSecondary, 2, 0, 1, 1);

        comboBoxVideoSecondary = new QComboBox(widget);
        comboBoxVideoSecondary->setObjectName(QString::fromUtf8("comboBoxVideoSecondary"));
        sizePolicy1.setHeightForWidth(comboBoxVideoSecondary->sizePolicy().hasHeightForWidth());
        comboBoxVideoSecondary->setSizePolicy(sizePolicy1);
        comboBoxVideoSecondary->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxVideoSecondary, 3, 0, 1, 2);

        pushButtonConfigureVideoSecondary = new QPushButton(widget);
        pushButtonConfigureVideoSecondary->setObjectName(QString::fromUtf8("pushButtonConfigureVideoSecondary"));

        gridLayout->addWidget(pushButtonConfigureVideoSecondary, 3, 2, 1, 1);

        groupBoxEDID = new QGroupBox(widget);
        groupBoxEDID->setObjectName(QString::fromUtf8("groupBoxEDID"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxEDID->sizePolicy().hasHeightForWidth());
        groupBoxEDID->setSizePolicy(sizePolicy3);
        verticalLayoutGroupBoxEDID = new QVBoxLayout(groupBoxEDID);
        verticalLayoutGroupBoxEDID->setObjectName(QString::fromUtf8("verticalLayoutGroupBoxEDID"));
        horizontalLayoutEDIDDefault = new QHBoxLayout();
        horizontalLayoutEDIDDefault->setObjectName(QString::fromUtf8("horizontalLayoutEDIDDefault"));
        radioButtonDefault = new QRadioButton(groupBoxEDID);
        radioButtonDefault->setObjectName(QString::fromUtf8("radioButtonDefault"));

        horizontalLayoutEDIDDefault->addWidget(radioButtonDefault);

        pushButtonExportDefault = new QPushButton(groupBoxEDID);
        pushButtonExportDefault->setObjectName(QString::fromUtf8("pushButtonExportDefault"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonExportDefault->sizePolicy().hasHeightForWidth());
        pushButtonExportDefault->setSizePolicy(sizePolicy4);

        horizontalLayoutEDIDDefault->addWidget(pushButtonExportDefault);


        verticalLayoutGroupBoxEDID->addLayout(horizontalLayoutEDIDDefault);

        horizontalLayoutEDIDCustom = new QHBoxLayout();
        horizontalLayoutEDIDCustom->setObjectName(QString::fromUtf8("horizontalLayoutEDIDCustom"));
        horizontalLayoutEDIDCustom->setSizeConstraint(QLayout::SetNoConstraint);
        radioButtonCustom = new QRadioButton(groupBoxEDID);
        radioButtonCustom->setObjectName(QString::fromUtf8("radioButtonCustom"));

        horizontalLayoutEDIDCustom->addWidget(radioButtonCustom);

        lineEditCustomEDID = new FileField(groupBoxEDID);
        lineEditCustomEDID->setObjectName(QString::fromUtf8("lineEditCustomEDID"));
        sizePolicy3.setHeightForWidth(lineEditCustomEDID->sizePolicy().hasHeightForWidth());
        lineEditCustomEDID->setSizePolicy(sizePolicy3);

        horizontalLayoutEDIDCustom->addWidget(lineEditCustomEDID);


        verticalLayoutGroupBoxEDID->addLayout(horizontalLayoutEDIDCustom);


        gridLayout->addWidget(groupBoxEDID, 4, 0, 1, 3);

        gridLayout->setColumnStretch(0, 2);

        verticalLayoutGeneral->addWidget(widget);

        verticalSpacerGeneral = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutGeneral->addItem(verticalSpacerGeneral);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/general_display.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetDisplay->addTab(tabGeneral, icon, QString());
        tabAccelerators = new QWidget();
        tabAccelerators->setObjectName(QString::fromUtf8("tabAccelerators"));
        verticalLayoutAccelerators = new QVBoxLayout(tabAccelerators);
        verticalLayoutAccelerators->setObjectName(QString::fromUtf8("verticalLayoutAccelerators"));
        widget_2 = new QWidget(tabAccelerators);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxVoodoo = new QCheckBox(widget_2);
        checkBoxVoodoo->setObjectName(QString::fromUtf8("checkBoxVoodoo"));

        gridLayout_2->addWidget(checkBoxVoodoo, 0, 0, 1, 2);

        pushButtonConfigureVoodoo = new QPushButton(widget_2);
        pushButtonConfigureVoodoo->setObjectName(QString::fromUtf8("pushButtonConfigureVoodoo"));

        gridLayout_2->addWidget(pushButtonConfigureVoodoo, 0, 2, 1, 1);

        checkBox8514 = new QCheckBox(widget_2);
        checkBox8514->setObjectName(QString::fromUtf8("checkBox8514"));

        gridLayout_2->addWidget(checkBox8514, 1, 0, 1, 2);

        pushButtonConfigure8514 = new QPushButton(widget_2);
        pushButtonConfigure8514->setObjectName(QString::fromUtf8("pushButtonConfigure8514"));

        gridLayout_2->addWidget(pushButtonConfigure8514, 1, 2, 1, 1);

        checkBoxXga = new QCheckBox(widget_2);
        checkBoxXga->setObjectName(QString::fromUtf8("checkBoxXga"));

        gridLayout_2->addWidget(checkBoxXga, 2, 0, 1, 2);

        pushButtonConfigureXga = new QPushButton(widget_2);
        pushButtonConfigureXga->setObjectName(QString::fromUtf8("pushButtonConfigureXga"));

        gridLayout_2->addWidget(pushButtonConfigureXga, 2, 2, 1, 1);

        checkBoxDa2 = new QCheckBox(widget_2);
        checkBoxDa2->setObjectName(QString::fromUtf8("checkBoxDa2"));

        gridLayout_2->addWidget(checkBoxDa2, 3, 0, 1, 2);

        pushButtonConfigureDa2 = new QPushButton(widget_2);
        pushButtonConfigureDa2->setObjectName(QString::fromUtf8("pushButtonConfigureDa2"));

        gridLayout_2->addWidget(pushButtonConfigureDa2, 3, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);

        verticalLayoutAccelerators->addWidget(widget_2);

        verticalSpacerAccelerators = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutAccelerators->addItem(verticalSpacerAccelerators);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/accelerators.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetDisplay->addTab(tabAccelerators, icon1, QString());

        vboxLayout->addWidget(tabWidgetDisplay);

        QWidget::setTabOrder(comboBoxVideo, pushButtonConfigureVideo);
        QWidget::setTabOrder(pushButtonConfigureVideo, comboBoxVideoSecondary);
        QWidget::setTabOrder(comboBoxVideoSecondary, pushButtonConfigureVideoSecondary);
        QWidget::setTabOrder(pushButtonConfigureVideoSecondary, radioButtonDefault);
        QWidget::setTabOrder(radioButtonDefault, pushButtonExportDefault);
        QWidget::setTabOrder(pushButtonExportDefault, radioButtonCustom);
        QWidget::setTabOrder(radioButtonCustom, checkBoxVoodoo);
        QWidget::setTabOrder(checkBoxVoodoo, pushButtonConfigureVoodoo);
        QWidget::setTabOrder(pushButtonConfigureVoodoo, checkBox8514);
        QWidget::setTabOrder(checkBox8514, pushButtonConfigure8514);
        QWidget::setTabOrder(pushButtonConfigure8514, checkBoxXga);
        QWidget::setTabOrder(checkBoxXga, pushButtonConfigureXga);
        QWidget::setTabOrder(pushButtonConfigureXga, checkBoxDa2);
        QWidget::setTabOrder(checkBoxDa2, pushButtonConfigureDa2);

        retranslateUi(SettingsDisplay);

        tabWidgetDisplay->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDisplay);
    } // setupUi

    void retranslateUi(QWidget *SettingsDisplay)
    {
        SettingsDisplay->setWindowTitle(QCoreApplication::translate("SettingsDisplay", "Form", nullptr));
        labelVideo->setText(QCoreApplication::translate("SettingsDisplay", "Video:", nullptr));
        pushButtonConfigureVideo->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        labelVideoSecondary->setText(QCoreApplication::translate("SettingsDisplay", "Video #2:", nullptr));
        pushButtonConfigureVideoSecondary->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        groupBoxEDID->setTitle(QCoreApplication::translate("SettingsDisplay", "Monitor EDID", nullptr));
        radioButtonDefault->setText(QCoreApplication::translate("SettingsDisplay", "Default", nullptr));
        pushButtonExportDefault->setText(QCoreApplication::translate("SettingsDisplay", "Export\342\200\246", nullptr));
        radioButtonCustom->setText(QCoreApplication::translate("SettingsDisplay", "Custom\342\200\246", nullptr));
        tabWidgetDisplay->setTabText(tabWidgetDisplay->indexOf(tabGeneral), QCoreApplication::translate("SettingsDisplay", "General", nullptr));
        checkBoxVoodoo->setText(QCoreApplication::translate("SettingsDisplay", "Voodoo 1 or 2 Graphics", nullptr));
        pushButtonConfigureVoodoo->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        checkBox8514->setText(QCoreApplication::translate("SettingsDisplay", "IBM 8514/A Graphics", nullptr));
        pushButtonConfigure8514->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        checkBoxXga->setText(QCoreApplication::translate("SettingsDisplay", "XGA Graphics", nullptr));
        pushButtonConfigureXga->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        checkBoxDa2->setText(QCoreApplication::translate("SettingsDisplay", "IBM PS/55 Display Adapter Graphics", nullptr));
        pushButtonConfigureDa2->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        tabWidgetDisplay->setTabText(tabWidgetDisplay->indexOf(tabAccelerators), QCoreApplication::translate("SettingsDisplay", "Accelerators", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDisplay: public Ui_SettingsDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSDISPLAY_H
