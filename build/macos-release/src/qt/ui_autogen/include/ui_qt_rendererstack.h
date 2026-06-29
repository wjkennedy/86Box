/********************************************************************************
** Form generated from reading UI file 'qt_rendererstack.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_RENDERERSTACK_H
#define UI_QT_RENDERERSTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RendererStack
{
public:

    void setupUi(QWidget *RendererStack)
    {
        if (RendererStack->objectName().isEmpty())
            RendererStack->setObjectName(QString::fromUtf8("RendererStack"));
        RendererStack->resize(400, 300);

        retranslateUi(RendererStack);

        QMetaObject::connectSlotsByName(RendererStack);
    } // setupUi

    void retranslateUi(QWidget *RendererStack)
    {
        RendererStack->setWindowTitle(QCoreApplication::translate("RendererStack", "RendererWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RendererStack: public Ui_RendererStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_RENDERERSTACK_H
