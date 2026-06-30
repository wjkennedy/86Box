/********************************************************************************
** Form generated from reading UI file 'qt_vmmanager_main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_VMMANAGER_MAIN_H
#define UI_QT_VMMANAGER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VMManagerMain
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *searchBar;
    QListView *listView;
    QWidget *detailsArea;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *VMManagerMain)
    {
        if (VMManagerMain->objectName().isEmpty())
            VMManagerMain->setObjectName(QString::fromUtf8("VMManagerMain"));
        VMManagerMain->resize(820, 472);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VMManagerMain->sizePolicy().hasHeightForWidth());
        VMManagerMain->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(VMManagerMain);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(VMManagerMain);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        searchBar = new QLineEdit(widget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setFocusPolicy(Qt::ClickFocus);
        searchBar->setClearButtonEnabled(true);

        verticalLayout->addWidget(searchBar);

        listView = new QListView(widget);
        listView->setObjectName(QString::fromUtf8("listView"));
        sizePolicy1.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy1);
        listView->setMinimumSize(QSize(125, 0));

        verticalLayout->addWidget(listView);

        splitter->addWidget(widget);
        detailsArea = new QWidget(splitter);
        detailsArea->setObjectName(QString::fromUtf8("detailsArea"));
        horizontalLayout_2 = new QHBoxLayout(detailsArea);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(detailsArea);

        horizontalLayout->addWidget(splitter);


        retranslateUi(VMManagerMain);

        QMetaObject::connectSlotsByName(VMManagerMain);
    } // setupUi

    void retranslateUi(QWidget *VMManagerMain)
    {
        searchBar->setPlaceholderText(QCoreApplication::translate("VMManagerMain", "Search", nullptr));
        (void)VMManagerMain;
    } // retranslateUi

};

namespace Ui {
    class VMManagerMain: public Ui_VMManagerMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_VMMANAGER_MAIN_H
