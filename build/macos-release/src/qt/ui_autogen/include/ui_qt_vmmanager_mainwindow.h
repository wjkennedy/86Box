/********************************************************************************
** Form generated from reading UI file 'qt_vmmanager_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_VMMANAGER_MAINWINDOW_H
#define UI_QT_VMMANAGER_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VMManagerMainWindow
{
public:
    QAction *actionStartPause;
    QAction *actionHard_Reset;
    QAction *actionForce_Shutdown;
    QAction *actionCtrl_Alt_Del;
    QAction *actionSettings;
    QAction *actionNew_Machine;
    QAction *actionHide_tool_bar;
    QAction *actionPreferences;
    QAction *actionCheck_for_updates;
    QAction *actionExit;
    QAction *actionDocumentation;
    QAction *actionAbout_86Box;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuTools;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *VMManagerMainWindow)
    {
        if (VMManagerMainWindow->objectName().isEmpty())
            VMManagerMainWindow->setObjectName(QString::fromUtf8("VMManagerMainWindow"));
        VMManagerMainWindow->resize(900, 600);
        VMManagerMainWindow->setWindowTitle(QString::fromUtf8("86Box VM Manager"));
        actionStartPause = new QAction(VMManagerMainWindow);
        actionStartPause->setObjectName(QString::fromUtf8("actionStartPause"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuicons/qt/icons/run.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartPause->setIcon(icon);
        actionHard_Reset = new QAction(VMManagerMainWindow);
        actionHard_Reset->setObjectName(QString::fromUtf8("actionHard_Reset"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/menuicons/qt/icons/hard_reset.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHard_Reset->setIcon(icon1);
        actionForce_Shutdown = new QAction(VMManagerMainWindow);
        actionForce_Shutdown->setObjectName(QString::fromUtf8("actionForce_Shutdown"));
        actionForce_Shutdown->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/menuicons/qt/icons/acpi_shutdown.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionForce_Shutdown->setIcon(icon2);
        actionForce_Shutdown->setVisible(true);
        actionCtrl_Alt_Del = new QAction(VMManagerMainWindow);
        actionCtrl_Alt_Del->setObjectName(QString::fromUtf8("actionCtrl_Alt_Del"));
        actionCtrl_Alt_Del->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menuicons/qt/icons/send_cad.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCtrl_Alt_Del->setIcon(icon3);
        actionCtrl_Alt_Del->setVisible(true);
        actionSettings = new QAction(VMManagerMainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/menuicons/qt/icons/settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon4);
        actionSettings->setMenuRole(QAction::NoRole);
        actionNew_Machine = new QAction(VMManagerMainWindow);
        actionNew_Machine->setObjectName(QString::fromUtf8("actionNew_Machine"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/menuicons/qt/icons/new_vm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Machine->setIcon(icon5);
        actionHide_tool_bar = new QAction(VMManagerMainWindow);
        actionHide_tool_bar->setObjectName(QString::fromUtf8("actionHide_tool_bar"));
        actionHide_tool_bar->setCheckable(true);
        actionPreferences = new QAction(VMManagerMainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionCheck_for_updates = new QAction(VMManagerMainWindow);
        actionCheck_for_updates->setObjectName(QString::fromUtf8("actionCheck_for_updates"));
        actionExit = new QAction(VMManagerMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionDocumentation = new QAction(VMManagerMainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionAbout_86Box = new QAction(VMManagerMainWindow);
        actionAbout_86Box->setObjectName(QString::fromUtf8("actionAbout_86Box"));
        actionAbout_86Box->setMenuRole(QAction::AboutRole);
        actionAbout_Qt = new QAction(VMManagerMainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionAbout_Qt->setVisible(false);
        actionAbout_Qt->setMenuRole(QAction::AboutQtRole);
        centralwidget = new QWidget(VMManagerMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        VMManagerMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VMManagerMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        menubar->setContextMenuPolicy(Qt::PreventContextMenu);
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        VMManagerMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VMManagerMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VMManagerMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(VMManagerMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setAutoFillBackground(true);
        toolBar->setWindowTitle(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setIconSize(QSize(32, 32));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        VMManagerMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuTools->addAction(actionPreferences);
        menuTools->addAction(actionCheck_for_updates);
        menuFile->addAction(actionNew_Machine);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionHide_tool_bar);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionAbout_86Box);
        menuHelp->addAction(actionAbout_Qt);
        toolBar->addAction(actionNew_Machine);
        toolBar->addSeparator();
        toolBar->addAction(actionStartPause);
        toolBar->addAction(actionHard_Reset);
        toolBar->addAction(actionForce_Shutdown);
        toolBar->addAction(actionCtrl_Alt_Del);
        toolBar->addAction(actionSettings);

        retranslateUi(VMManagerMainWindow);

        QMetaObject::connectSlotsByName(VMManagerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VMManagerMainWindow)
    {
        actionStartPause->setText(QCoreApplication::translate("VMManagerMainWindow", "&Start", nullptr));
#if QT_CONFIG(tooltip)
        actionStartPause->setToolTip(QCoreApplication::translate("VMManagerMainWindow", "Start", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStartPause->setIconText(QCoreApplication::translate("VMManagerMainWindow", "Start", nullptr));
        actionHard_Reset->setText(QCoreApplication::translate("VMManagerMainWindow", "&Hard reset", nullptr));
#if QT_CONFIG(tooltip)
        actionHard_Reset->setToolTip(QCoreApplication::translate("VMManagerMainWindow", "Hard reset", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHard_Reset->setIconText(QCoreApplication::translate("VMManagerMainWindow", "Hard reset", nullptr));
        actionForce_Shutdown->setText(QCoreApplication::translate("VMManagerMainWindow", "&Force shutdown", nullptr));
#if QT_CONFIG(tooltip)
        actionForce_Shutdown->setToolTip(QCoreApplication::translate("VMManagerMainWindow", "Force shutdown", nullptr));
#endif // QT_CONFIG(tooltip)
        actionForce_Shutdown->setIconText(QCoreApplication::translate("VMManagerMainWindow", "Force shutdown", nullptr));
        actionCtrl_Alt_Del->setText(QCoreApplication::translate("VMManagerMainWindow", "&Ctrl+Alt+Del", nullptr));
#if QT_CONFIG(tooltip)
        actionCtrl_Alt_Del->setToolTip(QCoreApplication::translate("VMManagerMainWindow", "Ctrl+Alt+Del", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCtrl_Alt_Del->setIconText(QCoreApplication::translate("VMManagerMainWindow", "Ctrl+Alt+Del", nullptr));
        actionSettings->setText(QCoreApplication::translate("VMManagerMainWindow", "&Settings\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionSettings->setToolTip(QCoreApplication::translate("VMManagerMainWindow", "Settings\342\200\246", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSettings->setIconText(QCoreApplication::translate("VMManagerMainWindow", "Settings", nullptr));
        actionNew_Machine->setText(QCoreApplication::translate("VMManagerMainWindow", "&New machine\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_Machine->setToolTip(QCoreApplication::translate("VMManagerMainWindow", "New machine\342\200\246", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNew_Machine->setIconText(QCoreApplication::translate("VMManagerMainWindow", "New machine", nullptr));
        actionHide_tool_bar->setText(QCoreApplication::translate("VMManagerMainWindow", "Hide &toolbar", nullptr));
        actionPreferences->setText(QCoreApplication::translate("VMManagerMainWindow", "&Preferences\342\200\246", nullptr));
        actionCheck_for_updates->setText(QCoreApplication::translate("VMManagerMainWindow", "&Check for updates\342\200\246", nullptr));
        actionExit->setText(QCoreApplication::translate("VMManagerMainWindow", "E&xit", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("VMManagerMainWindow", "&Documentation\342\200\246", nullptr));
        actionAbout_86Box->setText(QCoreApplication::translate("VMManagerMainWindow", "&About 86Box\342\200\246", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("VMManagerMainWindow", "About &Qt", nullptr));
        menuTools->setTitle(QCoreApplication::translate("VMManagerMainWindow", "&Tools", nullptr));
        menuFile->setTitle(QCoreApplication::translate("VMManagerMainWindow", "&File", nullptr));
        menuView->setTitle(QCoreApplication::translate("VMManagerMainWindow", "&View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("VMManagerMainWindow", "&Help", nullptr));
        (void)VMManagerMainWindow;
    } // retranslateUi

};

namespace Ui {
    class VMManagerMainWindow: public Ui_VMManagerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_VMMANAGER_MAINWINDOW_H
