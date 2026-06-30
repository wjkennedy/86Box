/********************************************************************************
** Form generated from reading UI file 'qt_settingskeybindings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSKEYBINDINGS_H
#define UI_QT_SETTINGSKEYBINDINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsKeyBindings
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTableWidget *tableKeys;
    QHBoxLayout *keybindButtonsLayout;
    QSpacerItem *keybindButtonsHorizontalSpacer;
    QPushButton *pushButtonClearBind;
    QPushButton *pushButtonBind;

    void setupUi(QWidget *SettingsKeyBindings)
    {
        if (SettingsKeyBindings->objectName().isEmpty())
            SettingsKeyBindings->setObjectName(QString::fromUtf8("SettingsKeyBindings"));
        SettingsKeyBindings->resize(400, 300);
        verticalLayout = new QVBoxLayout(SettingsKeyBindings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, -1);
        tableKeys = new QTableWidget(SettingsKeyBindings);
        tableKeys->setObjectName(QString::fromUtf8("tableKeys"));
        tableKeys->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableKeys->setTabKeyNavigation(false);
        tableKeys->setProperty("showDropIndicator", QVariant(false));
        tableKeys->setAlternatingRowColors(true);
        tableKeys->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableKeys, 0, 0, 1, 3);

        keybindButtonsLayout = new QHBoxLayout();
        keybindButtonsLayout->setObjectName(QString::fromUtf8("keybindButtonsLayout"));
        keybindButtonsHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        keybindButtonsLayout->addItem(keybindButtonsHorizontalSpacer);

        pushButtonClearBind = new QPushButton(SettingsKeyBindings);
        pushButtonClearBind->setObjectName(QString::fromUtf8("pushButtonClearBind"));
        pushButtonClearBind->setEnabled(false);
        pushButtonClearBind->setMinimumSize(QSize(100, 0));

        keybindButtonsLayout->addWidget(pushButtonClearBind);

        pushButtonBind = new QPushButton(SettingsKeyBindings);
        pushButtonBind->setObjectName(QString::fromUtf8("pushButtonBind"));
        pushButtonBind->setEnabled(false);
        pushButtonBind->setMinimumSize(QSize(100, 0));

        keybindButtonsLayout->addWidget(pushButtonBind);


        gridLayout->addLayout(keybindButtonsLayout, 1, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(SettingsKeyBindings);

        QMetaObject::connectSlotsByName(SettingsKeyBindings);
    } // setupUi

    void retranslateUi(QWidget *SettingsKeyBindings)
    {
        SettingsKeyBindings->setWindowTitle(QCoreApplication::translate("SettingsKeyBindings", "Form", nullptr));
        pushButtonClearBind->setText(QCoreApplication::translate("SettingsKeyBindings", "Clear binding", nullptr));
        pushButtonBind->setText(QCoreApplication::translate("SettingsKeyBindings", "Bind", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsKeyBindings: public Ui_SettingsKeyBindings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSKEYBINDINGS_H
