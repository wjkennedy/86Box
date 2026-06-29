/********************************************************************************
** Form generated from reading UI file 'qt_cgasettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_CGASETTINGSDIALOG_H
#define UI_QT_CGASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_CGASettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *labelHue;
    QSlider *horizontalSliderHue;
    QLabel *labelSaturation;
    QSlider *horizontalSliderSaturation;
    QLabel *labelBrightness;
    QSlider *horizontalSliderBrightness;
    QLabel *labelContrast;
    QSlider *horizontalSliderContrast;
    QLabel *labelSharpness;
    QSlider *horizontalSliderSharpness;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CGASettingsDialog)
    {
        if (CGASettingsDialog->objectName().isEmpty())
            CGASettingsDialog->setObjectName(QString::fromUtf8("CGASettingsDialog"));
        CGASettingsDialog->resize(400, 300);
        gridLayout_2 = new QGridLayout(CGASettingsDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        labelHue = new QLabel(CGASettingsDialog);
        labelHue->setObjectName(QString::fromUtf8("labelHue"));

        gridLayout_2->addWidget(labelHue, 0, 0, 1, 2);

        horizontalSliderHue = new QSlider(CGASettingsDialog);
        horizontalSliderHue->setObjectName(QString::fromUtf8("horizontalSliderHue"));
        horizontalSliderHue->setMinimum(-360);
        horizontalSliderHue->setMaximum(360);
        horizontalSliderHue->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderHue, 0, 2, 1, 1);

        labelSaturation = new QLabel(CGASettingsDialog);
        labelSaturation->setObjectName(QString::fromUtf8("labelSaturation"));

        gridLayout_2->addWidget(labelSaturation, 1, 0, 1, 2);

        horizontalSliderSaturation = new QSlider(CGASettingsDialog);
        horizontalSliderSaturation->setObjectName(QString::fromUtf8("horizontalSliderSaturation"));
        horizontalSliderSaturation->setMaximum(360);
        horizontalSliderSaturation->setValue(100);
        horizontalSliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderSaturation, 1, 2, 1, 1);

        labelBrightness = new QLabel(CGASettingsDialog);
        labelBrightness->setObjectName(QString::fromUtf8("labelBrightness"));

        gridLayout_2->addWidget(labelBrightness, 2, 0, 1, 1);

        horizontalSliderBrightness = new QSlider(CGASettingsDialog);
        horizontalSliderBrightness->setObjectName(QString::fromUtf8("horizontalSliderBrightness"));
        horizontalSliderBrightness->setMinimum(-100);
        horizontalSliderBrightness->setMaximum(100);
        horizontalSliderBrightness->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderBrightness, 2, 2, 1, 1);

        labelContrast = new QLabel(CGASettingsDialog);
        labelContrast->setObjectName(QString::fromUtf8("labelContrast"));

        gridLayout_2->addWidget(labelContrast, 3, 0, 1, 1);

        horizontalSliderContrast = new QSlider(CGASettingsDialog);
        horizontalSliderContrast->setObjectName(QString::fromUtf8("horizontalSliderContrast"));
        horizontalSliderContrast->setMaximum(360);
        horizontalSliderContrast->setValue(100);
        horizontalSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderContrast, 3, 2, 1, 1);

        labelSharpness = new QLabel(CGASettingsDialog);
        labelSharpness->setObjectName(QString::fromUtf8("labelSharpness"));

        gridLayout_2->addWidget(labelSharpness, 4, 0, 1, 1);

        horizontalSliderSharpness = new QSlider(CGASettingsDialog);
        horizontalSliderSharpness->setObjectName(QString::fromUtf8("horizontalSliderSharpness"));
        horizontalSliderSharpness->setMinimum(-50);
        horizontalSliderSharpness->setMaximum(50);
        horizontalSliderSharpness->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderSharpness, 4, 2, 1, 1);

        buttonBox = new QDialogButtonBox(CGASettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        gridLayout_2->addWidget(buttonBox, 5, 2, 1, 1);


        retranslateUi(CGASettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CGASettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CGASettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CGASettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *CGASettingsDialog)
    {
        CGASettingsDialog->setWindowTitle(QCoreApplication::translate("CGASettingsDialog", "CGA composite settings", nullptr));
        labelHue->setText(QCoreApplication::translate("CGASettingsDialog", "Hue", nullptr));
        labelSaturation->setText(QCoreApplication::translate("CGASettingsDialog", "Saturation", nullptr));
        labelBrightness->setText(QCoreApplication::translate("CGASettingsDialog", "Brightness", nullptr));
        labelContrast->setText(QCoreApplication::translate("CGASettingsDialog", "Contrast", nullptr));
        labelSharpness->setText(QCoreApplication::translate("CGASettingsDialog", "Sharpness", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CGASettingsDialog: public Ui_CGASettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_CGASETTINGSDIALOG_H
