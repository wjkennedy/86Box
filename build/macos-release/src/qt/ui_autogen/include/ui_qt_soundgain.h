/********************************************************************************
** Form generated from reading UI file 'qt_soundgain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SOUNDGAIN_H
#define UI_QT_SOUNDGAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SoundGain
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSlider *verticalSlider;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SoundGain)
    {
        if (SoundGain->objectName().isEmpty())
            SoundGain->setObjectName(QString::fromUtf8("SoundGain"));
        SoundGain->resize(200, 250);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SoundGain->sizePolicy().hasHeightForWidth());
        SoundGain->setSizePolicy(sizePolicy);
        SoundGain->setMinimumSize(QSize(200, 250));
        SoundGain->setMaximumSize(QSize(200, 250));
        gridLayout = new QGridLayout(SoundGain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label = new QLabel(SoundGain);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_11 = new QLabel(SoundGain);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_11, 1, 1, 1, 1);

        label_10 = new QLabel(SoundGain);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        label_9 = new QLabel(SoundGain);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_9, 3, 1, 1, 1);

        label_8 = new QLabel(SoundGain);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        label_3 = new QLabel(SoundGain);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        label_2 = new QLabel(SoundGain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        label_4 = new QLabel(SoundGain);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_4, 7, 1, 1, 1);

        label_5 = new QLabel(SoundGain);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_5, 8, 1, 1, 1);

        label_6 = new QLabel(SoundGain);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_6, 9, 1, 1, 1);

        label_7 = new QLabel(SoundGain);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(label_7, 10, 1, 1, 1);

        verticalSlider = new QSlider(SoundGain);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMaximum(18);
        verticalSlider->setSingleStep(2);
        verticalSlider->setPageStep(4);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(false);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(verticalSlider, 1, 0, 10, 1, Qt::AlignHCenter);

        buttonBox = new QDialogButtonBox(SoundGain);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 3, 7, 1);

        gridLayout->setColumnStretch(0, 1);

        retranslateUi(SoundGain);
        QObject::connect(buttonBox, SIGNAL(accepted()), SoundGain, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SoundGain, SLOT(reject()));

        QMetaObject::connectSlotsByName(SoundGain);
    } // setupUi

    void retranslateUi(QDialog *SoundGain)
    {
        SoundGain->setWindowTitle(QCoreApplication::translate("SoundGain", "Sound Gain", nullptr));
        label->setText(QCoreApplication::translate("SoundGain", "Gain", nullptr));
        label_11->setText(QCoreApplication::translate("SoundGain", "+18 dB", nullptr));
        label_10->setText(QCoreApplication::translate("SoundGain", "+16 dB", nullptr));
        label_9->setText(QCoreApplication::translate("SoundGain", "+14 dB", nullptr));
        label_8->setText(QCoreApplication::translate("SoundGain", "+12 dB", nullptr));
        label_3->setText(QCoreApplication::translate("SoundGain", "+10 dB", nullptr));
        label_2->setText(QCoreApplication::translate("SoundGain", "+8 dB", nullptr));
        label_4->setText(QCoreApplication::translate("SoundGain", "+6 dB", nullptr));
        label_5->setText(QCoreApplication::translate("SoundGain", "+4 dB", nullptr));
        label_6->setText(QCoreApplication::translate("SoundGain", "+2 dB", nullptr));
        label_7->setText(QCoreApplication::translate("SoundGain", "0 dB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoundGain: public Ui_SoundGain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SOUNDGAIN_H
