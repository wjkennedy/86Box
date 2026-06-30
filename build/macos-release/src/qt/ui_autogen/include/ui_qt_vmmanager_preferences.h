/********************************************************************************
** Form generated from reading UI file 'qt_vmmanager_preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_VMMANAGER_PREFERENCES_H
#define UI_QT_VMMANAGER_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VMManagerPreferences
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelSystemDir;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *systemDirectory;
    QPushButton *dirSelectButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonDefaultSystemDir;
    QLabel *labelLanguage;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxLanguage;
    QPushButton *pushButtonLanguage;
    QCheckBox *rememberSizePositionCheckBox;
    QCheckBox *updateCheckBox;
    QCheckBox *regexSearchCheckBox;
    QGroupBox *groupBoxColorScheme;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonSystem;
    QRadioButton *radioButtonLight;
    QRadioButton *radioButtonDark;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VMManagerPreferences)
    {
        if (VMManagerPreferences->objectName().isEmpty())
            VMManagerPreferences->setObjectName(QString::fromUtf8("VMManagerPreferences"));
        VMManagerPreferences->resize(400, 475);
        verticalLayout = new QVBoxLayout(VMManagerPreferences);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        labelSystemDir = new QLabel(VMManagerPreferences);
        labelSystemDir->setObjectName(QString::fromUtf8("labelSystemDir"));

        verticalLayout->addWidget(labelSystemDir);

        widget = new QWidget(VMManagerPreferences);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        systemDirectory = new QLabel(widget);
        systemDirectory->setObjectName(QString::fromUtf8("systemDirectory"));

        horizontalLayout->addWidget(systemDirectory);

        dirSelectButton = new QPushButton(widget);
        dirSelectButton->setObjectName(QString::fromUtf8("dirSelectButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dirSelectButton->sizePolicy().hasHeightForWidth());
        dirSelectButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dirSelectButton);


        verticalLayout->addWidget(widget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonDefaultSystemDir = new QPushButton(VMManagerPreferences);
        pushButtonDefaultSystemDir->setObjectName(QString::fromUtf8("pushButtonDefaultSystemDir"));

        horizontalLayout_3->addWidget(pushButtonDefaultSystemDir);


        verticalLayout->addLayout(horizontalLayout_3);

        labelLanguage = new QLabel(VMManagerPreferences);
        labelLanguage->setObjectName(QString::fromUtf8("labelLanguage"));

        verticalLayout->addWidget(labelLanguage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxLanguage = new QComboBox(VMManagerPreferences);
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->setObjectName(QString::fromUtf8("comboBoxLanguage"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxLanguage->sizePolicy().hasHeightForWidth());
        comboBoxLanguage->setSizePolicy(sizePolicy1);
        comboBoxLanguage->setMaxVisibleItems(30);

        horizontalLayout_2->addWidget(comboBoxLanguage);

        pushButtonLanguage = new QPushButton(VMManagerPreferences);
        pushButtonLanguage->setObjectName(QString::fromUtf8("pushButtonLanguage"));

        horizontalLayout_2->addWidget(pushButtonLanguage);


        verticalLayout->addLayout(horizontalLayout_2);

        rememberSizePositionCheckBox = new QCheckBox(VMManagerPreferences);
        rememberSizePositionCheckBox->setObjectName(QString::fromUtf8("rememberSizePositionCheckBox"));

        verticalLayout->addWidget(rememberSizePositionCheckBox);

        updateCheckBox = new QCheckBox(VMManagerPreferences);
        updateCheckBox->setObjectName(QString::fromUtf8("updateCheckBox"));

        verticalLayout->addWidget(updateCheckBox);

        regexSearchCheckBox = new QCheckBox(VMManagerPreferences);
        regexSearchCheckBox->setObjectName(QString::fromUtf8("regexSearchCheckBox"));

        verticalLayout->addWidget(regexSearchCheckBox);

        groupBoxColorScheme = new QGroupBox(VMManagerPreferences);
        groupBoxColorScheme->setObjectName(QString::fromUtf8("groupBoxColorScheme"));
        verticalLayout_2 = new QVBoxLayout(groupBoxColorScheme);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButtonSystem = new QRadioButton(groupBoxColorScheme);
        radioButtonSystem->setObjectName(QString::fromUtf8("radioButtonSystem"));

        verticalLayout_2->addWidget(radioButtonSystem);

        radioButtonLight = new QRadioButton(groupBoxColorScheme);
        radioButtonLight->setObjectName(QString::fromUtf8("radioButtonLight"));

        verticalLayout_2->addWidget(radioButtonLight);

        radioButtonDark = new QRadioButton(groupBoxColorScheme);
        radioButtonDark->setObjectName(QString::fromUtf8("radioButtonDark"));

        verticalLayout_2->addWidget(radioButtonDark);


        verticalLayout->addWidget(groupBoxColorScheme);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(VMManagerPreferences);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(dirSelectButton, pushButtonDefaultSystemDir);
        QWidget::setTabOrder(pushButtonDefaultSystemDir, comboBoxLanguage);
        QWidget::setTabOrder(comboBoxLanguage, pushButtonLanguage);
        QWidget::setTabOrder(pushButtonLanguage, rememberSizePositionCheckBox);
        QWidget::setTabOrder(rememberSizePositionCheckBox, updateCheckBox);
        QWidget::setTabOrder(updateCheckBox, regexSearchCheckBox);

        retranslateUi(VMManagerPreferences);
        QObject::connect(buttonBox, SIGNAL(accepted()), VMManagerPreferences, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VMManagerPreferences, SLOT(reject()));

        QMetaObject::connectSlotsByName(VMManagerPreferences);
    } // setupUi

    void retranslateUi(QDialog *VMManagerPreferences)
    {
        VMManagerPreferences->setWindowTitle(QCoreApplication::translate("VMManagerPreferences", "Preferences", nullptr));
        labelSystemDir->setText(QCoreApplication::translate("VMManagerPreferences", "System Directory:", nullptr));
        systemDirectory->setText(QString());
        dirSelectButton->setText(QString());
        pushButtonDefaultSystemDir->setText(QCoreApplication::translate("VMManagerPreferences", "Default", nullptr));
        labelLanguage->setText(QCoreApplication::translate("VMManagerPreferences", "Language:", nullptr));
        comboBoxLanguage->setItemText(0, QCoreApplication::translate("VMManagerPreferences", "(System Default)", nullptr));

        pushButtonLanguage->setText(QCoreApplication::translate("VMManagerPreferences", "Default", nullptr));
        rememberSizePositionCheckBox->setText(QCoreApplication::translate("VMManagerPreferences", "Remember size && position", nullptr));
        updateCheckBox->setText(QCoreApplication::translate("VMManagerPreferences", "Check for updates on startup", nullptr));
        regexSearchCheckBox->setText(QCoreApplication::translate("VMManagerPreferences", "Use regular expressions in search box", nullptr));
        groupBoxColorScheme->setTitle(QCoreApplication::translate("VMManagerPreferences", "Color scheme", nullptr));
        radioButtonSystem->setText(QCoreApplication::translate("VMManagerPreferences", "System", nullptr));
        radioButtonLight->setText(QCoreApplication::translate("VMManagerPreferences", "Light", nullptr));
        radioButtonDark->setText(QCoreApplication::translate("VMManagerPreferences", "Dark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VMManagerPreferences: public Ui_VMManagerPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_VMMANAGER_PREFERENCES_H
