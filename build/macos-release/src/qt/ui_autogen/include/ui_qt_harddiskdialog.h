/********************************************************************************
** Form generated from reading UI file 'qt_harddiskdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_HARDDISKDIALOG_H
#define UI_QT_HARDDISKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include "qt_filefield.hpp"

QT_BEGIN_NAMESPACE

class Ui_HarddiskDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelFileName;
    FileField *fileField;
    QLabel *labelCylinders;
    QLineEdit *lineEditCylinders;
    QLabel *labelHeads;
    QLineEdit *lineEditHeads;
    QLabel *labelSectors;
    QLineEdit *lineEditSectors;
    QLabel *labelSize;
    QLineEdit *lineEditSize;
    QLabel *labelType;
    QComboBox *comboBoxType;
    QLabel *labelBus;
    QComboBox *comboBoxBus;
    QLabel *labelChannel;
    QComboBox *comboBoxChannel;
    QLabel *labelSpeed;
    QComboBox *comboBoxSpeed;
    QLabel *labelFormat;
    QComboBox *comboBoxFormat;
    QLabel *labelBlockSize;
    QComboBox *comboBoxBlockSize;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HarddiskDialog)
    {
        if (HarddiskDialog->objectName().isEmpty())
            HarddiskDialog->setObjectName(QString::fromUtf8("HarddiskDialog"));
        HarddiskDialog->resize(421, 269);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HarddiskDialog->sizePolicy().hasHeightForWidth());
        HarddiskDialog->setSizePolicy(sizePolicy);
        HarddiskDialog->setMinimumSize(QSize(421, 269));
        HarddiskDialog->setMaximumSize(QSize(421, 269));
        gridLayout = new QGridLayout(HarddiskDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelFileName = new QLabel(HarddiskDialog);
        labelFileName->setObjectName(QString::fromUtf8("labelFileName"));

        gridLayout->addWidget(labelFileName, 0, 0, 1, 1);

        fileField = new FileField(HarddiskDialog);
        fileField->setObjectName(QString::fromUtf8("fileField"));

        gridLayout->addWidget(fileField, 0, 1, 1, 5);

        labelCylinders = new QLabel(HarddiskDialog);
        labelCylinders->setObjectName(QString::fromUtf8("labelCylinders"));

        gridLayout->addWidget(labelCylinders, 1, 0, 1, 1);

        lineEditCylinders = new QLineEdit(HarddiskDialog);
        lineEditCylinders->setObjectName(QString::fromUtf8("lineEditCylinders"));
        sizePolicy.setHeightForWidth(lineEditCylinders->sizePolicy().hasHeightForWidth());
        lineEditCylinders->setSizePolicy(sizePolicy);
        lineEditCylinders->setMaximumSize(QSize(64, 16777215));

        gridLayout->addWidget(lineEditCylinders, 1, 1, 1, 1);

        labelHeads = new QLabel(HarddiskDialog);
        labelHeads->setObjectName(QString::fromUtf8("labelHeads"));

        gridLayout->addWidget(labelHeads, 1, 2, 1, 1);

        lineEditHeads = new QLineEdit(HarddiskDialog);
        lineEditHeads->setObjectName(QString::fromUtf8("lineEditHeads"));
        sizePolicy.setHeightForWidth(lineEditHeads->sizePolicy().hasHeightForWidth());
        lineEditHeads->setSizePolicy(sizePolicy);
        lineEditHeads->setMaximumSize(QSize(64, 16777215));
        lineEditHeads->setMaxLength(32767);

        gridLayout->addWidget(lineEditHeads, 1, 3, 1, 1);

        labelSectors = new QLabel(HarddiskDialog);
        labelSectors->setObjectName(QString::fromUtf8("labelSectors"));

        gridLayout->addWidget(labelSectors, 1, 4, 1, 1);

        lineEditSectors = new QLineEdit(HarddiskDialog);
        lineEditSectors->setObjectName(QString::fromUtf8("lineEditSectors"));
        sizePolicy.setHeightForWidth(lineEditSectors->sizePolicy().hasHeightForWidth());
        lineEditSectors->setSizePolicy(sizePolicy);
        lineEditSectors->setMaximumSize(QSize(64, 16777215));
        lineEditSectors->setMaxLength(32767);

        gridLayout->addWidget(lineEditSectors, 1, 5, 1, 1);

        labelSize = new QLabel(HarddiskDialog);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout->addWidget(labelSize, 2, 0, 1, 1);

        lineEditSize = new QLineEdit(HarddiskDialog);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));
        sizePolicy.setHeightForWidth(lineEditSize->sizePolicy().hasHeightForWidth());
        lineEditSize->setSizePolicy(sizePolicy);
        lineEditSize->setMaximumSize(QSize(64, 16777215));

        gridLayout->addWidget(lineEditSize, 2, 1, 1, 1);

        labelType = new QLabel(HarddiskDialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout->addWidget(labelType, 2, 2, 1, 1);

        comboBoxType = new QComboBox(HarddiskDialog);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        comboBoxType->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxType, 2, 3, 1, 3);

        labelBus = new QLabel(HarddiskDialog);
        labelBus->setObjectName(QString::fromUtf8("labelBus"));

        gridLayout->addWidget(labelBus, 3, 0, 1, 1);

        comboBoxBus = new QComboBox(HarddiskDialog);
        comboBoxBus->setObjectName(QString::fromUtf8("comboBoxBus"));
        comboBoxBus->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxBus, 3, 1, 1, 3);

        labelChannel = new QLabel(HarddiskDialog);
        labelChannel->setObjectName(QString::fromUtf8("labelChannel"));

        gridLayout->addWidget(labelChannel, 3, 4, 1, 1);

        comboBoxChannel = new QComboBox(HarddiskDialog);
        comboBoxChannel->setObjectName(QString::fromUtf8("comboBoxChannel"));
        comboBoxChannel->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxChannel, 3, 5, 1, 1);

        labelSpeed = new QLabel(HarddiskDialog);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));

        gridLayout->addWidget(labelSpeed, 4, 0, 1, 1);

        comboBoxSpeed = new QComboBox(HarddiskDialog);
        comboBoxSpeed->setObjectName(QString::fromUtf8("comboBoxSpeed"));
        comboBoxSpeed->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxSpeed, 4, 1, 1, 5);

        labelFormat = new QLabel(HarddiskDialog);
        labelFormat->setObjectName(QString::fromUtf8("labelFormat"));

        gridLayout->addWidget(labelFormat, 5, 0, 1, 1);

        comboBoxFormat = new QComboBox(HarddiskDialog);
        comboBoxFormat->setObjectName(QString::fromUtf8("comboBoxFormat"));
        comboBoxFormat->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxFormat, 5, 1, 1, 5);

        labelBlockSize = new QLabel(HarddiskDialog);
        labelBlockSize->setObjectName(QString::fromUtf8("labelBlockSize"));

        gridLayout->addWidget(labelBlockSize, 6, 0, 1, 1);

        comboBoxBlockSize = new QComboBox(HarddiskDialog);
        comboBoxBlockSize->setObjectName(QString::fromUtf8("comboBoxBlockSize"));
        comboBoxBlockSize->setMaxVisibleItems(30);

        gridLayout->addWidget(comboBoxBlockSize, 6, 1, 1, 5);

        progressBar = new QProgressBar(HarddiskDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setVisible(false);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);

        gridLayout->addWidget(progressBar, 7, 0, 1, 6);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 6);

        buttonBox = new QDialogButtonBox(HarddiskDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 6);


        retranslateUi(HarddiskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HarddiskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HarddiskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HarddiskDialog);
    } // setupUi

    void retranslateUi(QDialog *HarddiskDialog)
    {
        HarddiskDialog->setWindowTitle(QCoreApplication::translate("HarddiskDialog", "Dialog", nullptr));
        labelFileName->setText(QCoreApplication::translate("HarddiskDialog", "File name:", nullptr));
        labelCylinders->setText(QCoreApplication::translate("HarddiskDialog", "Cylinders:", nullptr));
        labelHeads->setText(QCoreApplication::translate("HarddiskDialog", "Heads:", nullptr));
        labelSectors->setText(QCoreApplication::translate("HarddiskDialog", "Sectors:", nullptr));
        labelSize->setText(QCoreApplication::translate("HarddiskDialog", "Size (MB):", nullptr));
        labelType->setText(QCoreApplication::translate("HarddiskDialog", "Type:", nullptr));
        labelBus->setText(QCoreApplication::translate("HarddiskDialog", "Bus:", nullptr));
        labelChannel->setText(QCoreApplication::translate("HarddiskDialog", "Channel:", nullptr));
        labelSpeed->setText(QCoreApplication::translate("HarddiskDialog", "Model:", nullptr));
        labelFormat->setText(QCoreApplication::translate("HarddiskDialog", "Image Format:", nullptr));
        labelBlockSize->setText(QCoreApplication::translate("HarddiskDialog", "Block Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HarddiskDialog: public Ui_HarddiskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_HARDDISKDIALOG_H
