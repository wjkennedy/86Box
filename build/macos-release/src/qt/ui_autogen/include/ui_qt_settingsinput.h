/********************************************************************************
** Form generated from reading UI file 'qt_settingsinput.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSINPUT_H
#define UI_QT_SETTINGSINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsInput
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelKeyboard;
    QComboBox *comboBoxKeyboard;
    QPushButton *pushButtonConfigureKeyboard;
    QLabel *labelMouse;
    QComboBox *comboBoxMouse;
    QPushButton *pushButtonConfigureMouse;
    QLabel *labelJoystick0;
    QComboBox *comboBoxJoystick0;
    QHBoxLayout *joystickButtonsLayout;
    QPushButton *pushButtonJoystick01;
    QPushButton *pushButtonJoystick02;
    QPushButton *pushButtonJoystick03;
    QPushButton *pushButtonJoystick04;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsInput)
    {
        if (SettingsInput->objectName().isEmpty())
            SettingsInput->setObjectName(QString::fromUtf8("SettingsInput"));
        SettingsInput->resize(400, 300);
        verticalLayout = new QVBoxLayout(SettingsInput);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, -1);
        labelKeyboard = new QLabel(SettingsInput);
        labelKeyboard->setObjectName(QString::fromUtf8("labelKeyboard"));

        gridLayout->addWidget(labelKeyboard, 0, 0, 1, 1);

        comboBoxKeyboard = new QComboBox(SettingsInput);
        comboBoxKeyboard->setObjectName(QString::fromUtf8("comboBoxKeyboard"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxKeyboard->sizePolicy().hasHeightForWidth());
        comboBoxKeyboard->setSizePolicy(sizePolicy);
        comboBoxKeyboard->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxKeyboard, 0, 1, 1, 1);

        pushButtonConfigureKeyboard = new QPushButton(SettingsInput);
        pushButtonConfigureKeyboard->setObjectName(QString::fromUtf8("pushButtonConfigureKeyboard"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonConfigureKeyboard->sizePolicy().hasHeightForWidth());
        pushButtonConfigureKeyboard->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonConfigureKeyboard, 0, 2, 1, 1);

        labelMouse = new QLabel(SettingsInput);
        labelMouse->setObjectName(QString::fromUtf8("labelMouse"));

        gridLayout->addWidget(labelMouse, 1, 0, 1, 1);

        comboBoxMouse = new QComboBox(SettingsInput);
        comboBoxMouse->setObjectName(QString::fromUtf8("comboBoxMouse"));
        sizePolicy.setHeightForWidth(comboBoxMouse->sizePolicy().hasHeightForWidth());
        comboBoxMouse->setSizePolicy(sizePolicy);
        comboBoxMouse->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxMouse, 1, 1, 1, 1);

        pushButtonConfigureMouse = new QPushButton(SettingsInput);
        pushButtonConfigureMouse->setObjectName(QString::fromUtf8("pushButtonConfigureMouse"));
        sizePolicy1.setHeightForWidth(pushButtonConfigureMouse->sizePolicy().hasHeightForWidth());
        pushButtonConfigureMouse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonConfigureMouse, 1, 2, 1, 1);

        labelJoystick0 = new QLabel(SettingsInput);
        labelJoystick0->setObjectName(QString::fromUtf8("labelJoystick0"));

        gridLayout->addWidget(labelJoystick0, 2, 0, 1, 1);

        comboBoxJoystick0 = new QComboBox(SettingsInput);
        comboBoxJoystick0->setObjectName(QString::fromUtf8("comboBoxJoystick0"));
        comboBoxJoystick0->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxJoystick0->sizePolicy().hasHeightForWidth());
        comboBoxJoystick0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxJoystick0, 2, 1, 1, 1);

        joystickButtonsLayout = new QHBoxLayout();
        joystickButtonsLayout->setObjectName(QString::fromUtf8("joystickButtonsLayout"));
        pushButtonJoystick01 = new QPushButton(SettingsInput);
        pushButtonJoystick01->setObjectName(QString::fromUtf8("pushButtonJoystick01"));

        joystickButtonsLayout->addWidget(pushButtonJoystick01);

        pushButtonJoystick02 = new QPushButton(SettingsInput);
        pushButtonJoystick02->setObjectName(QString::fromUtf8("pushButtonJoystick02"));

        joystickButtonsLayout->addWidget(pushButtonJoystick02);

        pushButtonJoystick03 = new QPushButton(SettingsInput);
        pushButtonJoystick03->setObjectName(QString::fromUtf8("pushButtonJoystick03"));

        joystickButtonsLayout->addWidget(pushButtonJoystick03);

        pushButtonJoystick04 = new QPushButton(SettingsInput);
        pushButtonJoystick04->setObjectName(QString::fromUtf8("pushButtonJoystick04"));

        joystickButtonsLayout->addWidget(pushButtonJoystick04);


        gridLayout->addLayout(joystickButtonsLayout, 3, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SettingsInput);

        QMetaObject::connectSlotsByName(SettingsInput);
    } // setupUi

    void retranslateUi(QWidget *SettingsInput)
    {
        SettingsInput->setWindowTitle(QCoreApplication::translate("SettingsInput", "Form", nullptr));
        labelKeyboard->setText(QCoreApplication::translate("SettingsInput", "Keyboard:", nullptr));
        pushButtonConfigureKeyboard->setText(QCoreApplication::translate("SettingsInput", "Configure", nullptr));
        labelMouse->setText(QCoreApplication::translate("SettingsInput", "Mouse:", nullptr));
        pushButtonConfigureMouse->setText(QCoreApplication::translate("SettingsInput", "Configure", nullptr));
        labelJoystick0->setText(QCoreApplication::translate("SettingsInput", "Joystick:", nullptr));
        pushButtonJoystick01->setText(QCoreApplication::translate("SettingsInput", "Joystick 1\342\200\246", nullptr));
        pushButtonJoystick02->setText(QCoreApplication::translate("SettingsInput", "Joystick 2\342\200\246", nullptr));
        pushButtonJoystick03->setText(QCoreApplication::translate("SettingsInput", "Joystick 3\342\200\246", nullptr));
        pushButtonJoystick04->setText(QCoreApplication::translate("SettingsInput", "Joystick 4\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsInput: public Ui_SettingsInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSINPUT_H
