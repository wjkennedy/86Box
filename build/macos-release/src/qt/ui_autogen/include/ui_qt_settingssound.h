/********************************************************************************
** Form generated from reading UI file 'qt_settingssound.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSSOUND_H
#define UI_QT_SETTINGSSOUND_H

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

class Ui_SettingsSound
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidgetSound;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayoutGeneral;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelSoundCard1;
    QComboBox *comboBoxSoundCard1;
    QPushButton *pushButtonConfigureSoundCard1;
    QLabel *labelSoundCard2;
    QComboBox *comboBoxSoundCard2;
    QPushButton *pushButtonConfigureSoundCard2;
    QLabel *labelSoundCard3;
    QComboBox *comboBoxSoundCard3;
    QPushButton *pushButtonConfigureSoundCard3;
    QLabel *labelSoundCard4;
    QComboBox *comboBoxSoundCard4;
    QPushButton *pushButtonConfigureSoundCard4;
    QLabel *labelFM;
    QComboBox *comboBoxFM;
    QCheckBox *checkBoxFloat32;
    QSpacerItem *verticalSpacerGeneral;
    QWidget *tabMIDI;
    QVBoxLayout *verticalLayoutMIDI;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *labelMidiOut;
    QComboBox *comboBoxMidiOut;
    QPushButton *pushButtonConfigureMidiOut;
    QLabel *labelMidiIn;
    QComboBox *comboBoxMidiIn;
    QPushButton *pushButtonConfigureMidiIn;
    QCheckBox *checkBoxMPU401;
    QPushButton *pushButtonConfigureMPU401;
    QSpacerItem *verticalSpacerMIDI;

    void setupUi(QWidget *SettingsSound)
    {
        if (SettingsSound->objectName().isEmpty())
            SettingsSound->setObjectName(QString::fromUtf8("SettingsSound"));
        SettingsSound->resize(387, 332);
        vboxLayout = new QVBoxLayout(SettingsSound);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetSound = new QTabWidget(SettingsSound);
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
        labelSoundCard1 = new QLabel(widget);
        labelSoundCard1->setObjectName(QString::fromUtf8("labelSoundCard1"));

        gridLayout->addWidget(labelSoundCard1, 0, 0, 1, 1);

        comboBoxSoundCard1 = new QComboBox(widget);
        comboBoxSoundCard1->setObjectName(QString::fromUtf8("comboBoxSoundCard1"));
        comboBoxSoundCard1->setMaxVisibleItems(30);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxSoundCard1->sizePolicy().hasHeightForWidth());
        comboBoxSoundCard1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxSoundCard1, 0, 1, 1, 1);

        pushButtonConfigureSoundCard1 = new QPushButton(widget);
        pushButtonConfigureSoundCard1->setObjectName(QString::fromUtf8("pushButtonConfigureSoundCard1"));

        gridLayout->addWidget(pushButtonConfigureSoundCard1, 0, 2, 1, 1);

        labelSoundCard2 = new QLabel(widget);
        labelSoundCard2->setObjectName(QString::fromUtf8("labelSoundCard2"));

        gridLayout->addWidget(labelSoundCard2, 1, 0, 1, 1);

        comboBoxSoundCard2 = new QComboBox(widget);
        comboBoxSoundCard2->setObjectName(QString::fromUtf8("comboBoxSoundCard2"));
        comboBoxSoundCard2->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxSoundCard2->sizePolicy().hasHeightForWidth());
        comboBoxSoundCard2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxSoundCard2, 1, 1, 1, 1);

        pushButtonConfigureSoundCard2 = new QPushButton(widget);
        pushButtonConfigureSoundCard2->setObjectName(QString::fromUtf8("pushButtonConfigureSoundCard2"));

        gridLayout->addWidget(pushButtonConfigureSoundCard2, 1, 2, 1, 1);

        labelSoundCard3 = new QLabel(widget);
        labelSoundCard3->setObjectName(QString::fromUtf8("labelSoundCard3"));

        gridLayout->addWidget(labelSoundCard3, 2, 0, 1, 1);

        comboBoxSoundCard3 = new QComboBox(widget);
        comboBoxSoundCard3->setObjectName(QString::fromUtf8("comboBoxSoundCard3"));
        comboBoxSoundCard3->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxSoundCard3->sizePolicy().hasHeightForWidth());
        comboBoxSoundCard3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxSoundCard3, 2, 1, 1, 1);

        pushButtonConfigureSoundCard3 = new QPushButton(widget);
        pushButtonConfigureSoundCard3->setObjectName(QString::fromUtf8("pushButtonConfigureSoundCard3"));

        gridLayout->addWidget(pushButtonConfigureSoundCard3, 2, 2, 1, 1);

        labelSoundCard4 = new QLabel(widget);
        labelSoundCard4->setObjectName(QString::fromUtf8("labelSoundCard4"));

        gridLayout->addWidget(labelSoundCard4, 3, 0, 1, 1);

        comboBoxSoundCard4 = new QComboBox(widget);
        comboBoxSoundCard4->setObjectName(QString::fromUtf8("comboBoxSoundCard4"));
        comboBoxSoundCard4->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxSoundCard4->sizePolicy().hasHeightForWidth());
        comboBoxSoundCard4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxSoundCard4, 3, 1, 1, 1);

        pushButtonConfigureSoundCard4 = new QPushButton(widget);
        pushButtonConfigureSoundCard4->setObjectName(QString::fromUtf8("pushButtonConfigureSoundCard4"));

        gridLayout->addWidget(pushButtonConfigureSoundCard4, 3, 2, 1, 1);

        labelFM = new QLabel(widget);
        labelFM->setObjectName(QString::fromUtf8("labelFM"));

        gridLayout->addWidget(labelFM, 4, 0, 1, 1);

        comboBoxFM = new QComboBox(widget);
        comboBoxFM->setObjectName(QString::fromUtf8("comboBoxFM"));
        comboBoxFM->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxFM->sizePolicy().hasHeightForWidth());
        comboBoxFM->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxFM, 4, 1, 1, 2);

        checkBoxFloat32 = new QCheckBox(widget);
        checkBoxFloat32->setObjectName(QString::fromUtf8("checkBoxFloat32"));

        gridLayout->addWidget(checkBoxFloat32, 5, 0, 1, 2);


        verticalLayoutGeneral->addWidget(widget);

        verticalSpacerGeneral = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutGeneral->addItem(verticalSpacerGeneral);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/general_sound.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetSound->addTab(tabGeneral, icon, QString());
        tabMIDI = new QWidget();
        tabMIDI->setObjectName(QString::fromUtf8("tabMIDI"));
        verticalLayoutMIDI = new QVBoxLayout(tabMIDI);
        verticalLayoutMIDI->setObjectName(QString::fromUtf8("verticalLayoutMIDI"));
        widget_2 = new QWidget(tabMIDI);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelMidiOut = new QLabel(widget_2);
        labelMidiOut->setObjectName(QString::fromUtf8("labelMidiOut"));

        gridLayout_2->addWidget(labelMidiOut, 0, 0, 1, 1);

        comboBoxMidiOut = new QComboBox(widget_2);
        comboBoxMidiOut->setObjectName(QString::fromUtf8("comboBoxMidiOut"));
        comboBoxMidiOut->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxMidiOut->sizePolicy().hasHeightForWidth());
        comboBoxMidiOut->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxMidiOut, 0, 1, 1, 1);

        pushButtonConfigureMidiOut = new QPushButton(widget_2);
        pushButtonConfigureMidiOut->setObjectName(QString::fromUtf8("pushButtonConfigureMidiOut"));

        gridLayout_2->addWidget(pushButtonConfigureMidiOut, 0, 2, 1, 1);

        labelMidiIn = new QLabel(widget_2);
        labelMidiIn->setObjectName(QString::fromUtf8("labelMidiIn"));

        gridLayout_2->addWidget(labelMidiIn, 1, 0, 1, 1);

        comboBoxMidiIn = new QComboBox(widget_2);
        comboBoxMidiIn->setObjectName(QString::fromUtf8("comboBoxMidiIn"));
        comboBoxMidiIn->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxMidiIn->sizePolicy().hasHeightForWidth());
        comboBoxMidiIn->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxMidiIn, 1, 1, 1, 1);

        pushButtonConfigureMidiIn = new QPushButton(widget_2);
        pushButtonConfigureMidiIn->setObjectName(QString::fromUtf8("pushButtonConfigureMidiIn"));

        gridLayout_2->addWidget(pushButtonConfigureMidiIn, 1, 2, 1, 1);

        checkBoxMPU401 = new QCheckBox(widget_2);
        checkBoxMPU401->setObjectName(QString::fromUtf8("checkBoxMPU401"));

        gridLayout_2->addWidget(checkBoxMPU401, 2, 0, 1, 2);

        pushButtonConfigureMPU401 = new QPushButton(widget_2);
        pushButtonConfigureMPU401->setObjectName(QString::fromUtf8("pushButtonConfigureMPU401"));

        gridLayout_2->addWidget(pushButtonConfigureMPU401, 2, 2, 1, 1);


        verticalLayoutMIDI->addWidget(widget_2);

        verticalSpacerMIDI = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutMIDI->addItem(verticalSpacerMIDI);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/midi.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetSound->addTab(tabMIDI, icon1, QString());

        vboxLayout->addWidget(tabWidgetSound);

        QWidget::setTabOrder(comboBoxSoundCard1, pushButtonConfigureSoundCard1);
        QWidget::setTabOrder(pushButtonConfigureSoundCard1, comboBoxSoundCard2);
        QWidget::setTabOrder(comboBoxSoundCard2, pushButtonConfigureSoundCard2);
        QWidget::setTabOrder(pushButtonConfigureSoundCard2, comboBoxSoundCard3);
        QWidget::setTabOrder(comboBoxSoundCard3, pushButtonConfigureSoundCard3);
        QWidget::setTabOrder(pushButtonConfigureSoundCard3, comboBoxSoundCard4);
        QWidget::setTabOrder(comboBoxSoundCard4, pushButtonConfigureSoundCard4);
        QWidget::setTabOrder(pushButtonConfigureSoundCard4, comboBoxFM);
        QWidget::setTabOrder(comboBoxFM, checkBoxFloat32);
        QWidget::setTabOrder(checkBoxFloat32, comboBoxMidiOut);
        QWidget::setTabOrder(comboBoxMidiOut, pushButtonConfigureMidiOut);
        QWidget::setTabOrder(pushButtonConfigureMidiOut, comboBoxMidiIn);
        QWidget::setTabOrder(comboBoxMidiIn, pushButtonConfigureMidiIn);
        QWidget::setTabOrder(pushButtonConfigureMidiIn, checkBoxMPU401);
        QWidget::setTabOrder(checkBoxMPU401, pushButtonConfigureMPU401);

        retranslateUi(SettingsSound);

        tabWidgetSound->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsSound);
    } // setupUi

    void retranslateUi(QWidget *SettingsSound)
    {
        SettingsSound->setWindowTitle(QCoreApplication::translate("SettingsSound", "Form", nullptr));
        labelSoundCard1->setText(QCoreApplication::translate("SettingsSound", "Sound card #1:", nullptr));
        pushButtonConfigureSoundCard1->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        labelSoundCard2->setText(QCoreApplication::translate("SettingsSound", "Sound card #2:", nullptr));
        pushButtonConfigureSoundCard2->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        labelSoundCard3->setText(QCoreApplication::translate("SettingsSound", "Sound card #3:", nullptr));
        pushButtonConfigureSoundCard3->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        labelSoundCard4->setText(QCoreApplication::translate("SettingsSound", "Sound card #4:", nullptr));
        pushButtonConfigureSoundCard4->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        labelFM->setText(QCoreApplication::translate("SettingsSound", "FM synth driver:", nullptr));
        checkBoxFloat32->setText(QCoreApplication::translate("SettingsSound", "Use FLOAT32 sound", nullptr));
        tabWidgetSound->setTabText(tabWidgetSound->indexOf(tabGeneral), QCoreApplication::translate("SettingsSound", "General", nullptr));
        labelMidiOut->setText(QCoreApplication::translate("SettingsSound", "MIDI Out Device:", nullptr));
        pushButtonConfigureMidiOut->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        labelMidiIn->setText(QCoreApplication::translate("SettingsSound", "MIDI In Device:", nullptr));
        pushButtonConfigureMidiIn->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        checkBoxMPU401->setText(QCoreApplication::translate("SettingsSound", "Standalone MPU-401", nullptr));
        pushButtonConfigureMPU401->setText(QCoreApplication::translate("SettingsSound", "Configure", nullptr));
        tabWidgetSound->setTabText(tabWidgetSound->indexOf(tabMIDI), QCoreApplication::translate("SettingsSound", "MIDI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsSound: public Ui_SettingsSound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSSOUND_H
