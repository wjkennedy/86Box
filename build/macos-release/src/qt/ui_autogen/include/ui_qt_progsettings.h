/********************************************************************************
** Form generated from reading UI file 'qt_progsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_PROGSETTINGS_H
#define UI_QT_PROGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProgSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *labelLanguage;
    QComboBox *comboBoxLanguage;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonLanguage;
    QLabel *labelMouseSensitivity;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QCheckBox *openDirUsrPath;
    QCheckBox *checkBoxMultimediaKeys;
    QCheckBox *checkBoxConfirmSave;
    QCheckBox *checkBoxConfirmExit;
    QCheckBox *checkBoxConfirmHardReset;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonSystem;
    QRadioButton *radioButtonLight;
    QRadioButton *radioButtonDark;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProgSettings)
    {
        if (ProgSettings->objectName().isEmpty())
            ProgSettings->setObjectName(QString::fromUtf8("ProgSettings"));
        ProgSettings->resize(458, 508);
        ProgSettings->setMinimumSize(QSize(0, 0));
        ProgSettings->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(ProgSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        labelLanguage = new QLabel(ProgSettings);
        labelLanguage->setObjectName(QString::fromUtf8("labelLanguage"));

        gridLayout->addWidget(labelLanguage, 0, 0, 1, 2);

        comboBoxLanguage = new QComboBox(ProgSettings);
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->setObjectName(QString::fromUtf8("comboBoxLanguage"));
        comboBoxLanguage->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxLanguage, 1, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        pushButtonLanguage = new QPushButton(ProgSettings);
        pushButtonLanguage->setObjectName(QString::fromUtf8("pushButtonLanguage"));

        gridLayout->addWidget(pushButtonLanguage, 2, 1, 1, 1);

        labelMouseSensitivity = new QLabel(ProgSettings);
        labelMouseSensitivity->setObjectName(QString::fromUtf8("labelMouseSensitivity"));

        gridLayout->addWidget(labelMouseSensitivity, 3, 0, 1, 2);

        horizontalSlider = new QSlider(ProgSettings);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setSingleStep(10);
        horizontalSlider->setPageStep(20);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 4, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        pushButton_2 = new QPushButton(ProgSettings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        openDirUsrPath = new QCheckBox(ProgSettings);
        openDirUsrPath->setObjectName(QString::fromUtf8("openDirUsrPath"));

        gridLayout->addWidget(openDirUsrPath, 6, 0, 1, 2);

        checkBoxMultimediaKeys = new QCheckBox(ProgSettings);
        checkBoxMultimediaKeys->setObjectName(QString::fromUtf8("checkBoxMultimediaKeys"));

        gridLayout->addWidget(checkBoxMultimediaKeys, 7, 0, 1, 2);

        checkBoxConfirmSave = new QCheckBox(ProgSettings);
        checkBoxConfirmSave->setObjectName(QString::fromUtf8("checkBoxConfirmSave"));

        gridLayout->addWidget(checkBoxConfirmSave, 8, 0, 1, 2);

        checkBoxConfirmExit = new QCheckBox(ProgSettings);
        checkBoxConfirmExit->setObjectName(QString::fromUtf8("checkBoxConfirmExit"));

        gridLayout->addWidget(checkBoxConfirmExit, 9, 0, 1, 2);

        checkBoxConfirmHardReset = new QCheckBox(ProgSettings);
        checkBoxConfirmHardReset->setObjectName(QString::fromUtf8("checkBoxConfirmHardReset"));

        gridLayout->addWidget(checkBoxConfirmHardReset, 10, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(ProgSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonSystem = new QRadioButton(groupBox);
        radioButtonSystem->setObjectName(QString::fromUtf8("radioButtonSystem"));

        verticalLayout->addWidget(radioButtonSystem);

        radioButtonLight = new QRadioButton(groupBox);
        radioButtonLight->setObjectName(QString::fromUtf8("radioButtonLight"));

        verticalLayout->addWidget(radioButtonLight);

        radioButtonDark = new QRadioButton(groupBox);
        radioButtonDark->setObjectName(QString::fromUtf8("radioButtonDark"));

        verticalLayout->addWidget(radioButtonDark);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 11, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ProgSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 0, 1, 2);


        retranslateUi(ProgSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProgSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProgSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProgSettings);
    } // setupUi

    void retranslateUi(QDialog *ProgSettings)
    {
        ProgSettings->setWindowTitle(QCoreApplication::translate("ProgSettings", "Preferences", nullptr));
        labelLanguage->setText(QCoreApplication::translate("ProgSettings", "Language:", nullptr));
        comboBoxLanguage->setItemText(0, QCoreApplication::translate("ProgSettings", "(System Default)", nullptr));

        pushButtonLanguage->setText(QCoreApplication::translate("ProgSettings", "Default", nullptr));
        labelMouseSensitivity->setText(QCoreApplication::translate("ProgSettings", "Mouse sensitivity:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ProgSettings", "Default", nullptr));
#if QT_CONFIG(tooltip)
        openDirUsrPath->setToolTip(QCoreApplication::translate("ProgSettings", "<html><head/><body><p>When selecting media images (CD-ROM, floppy, etc.) the open dialog will start in the same directory as the 86Box configuration file. This setting will likely only make a difference on macOS.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        openDirUsrPath->setText(QCoreApplication::translate("ProgSettings", "Select media images from program working directory", nullptr));
        checkBoxMultimediaKeys->setText(QCoreApplication::translate("ProgSettings", "Inhibit multimedia keys", nullptr));
        checkBoxConfirmSave->setText(QCoreApplication::translate("ProgSettings", "Ask for confirmation before saving settings", nullptr));
        checkBoxConfirmExit->setText(QCoreApplication::translate("ProgSettings", "Ask for confirmation before quitting", nullptr));
        checkBoxConfirmHardReset->setText(QCoreApplication::translate("ProgSettings", "Ask for confirmation before hard resetting", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProgSettings", "Color scheme", nullptr));
        radioButtonSystem->setText(QCoreApplication::translate("ProgSettings", "System", nullptr));
        radioButtonLight->setText(QCoreApplication::translate("ProgSettings", "Light", nullptr));
        radioButtonDark->setText(QCoreApplication::translate("ProgSettings", "Dark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgSettings: public Ui_ProgSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_PROGSETTINGS_H
