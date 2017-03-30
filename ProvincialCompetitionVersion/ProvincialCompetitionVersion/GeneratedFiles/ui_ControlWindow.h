/********************************************************************************
** Form generated from reading UI file 'ControlWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLWINDOW_H
#define UI_CONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *Line3Min;
    QLabel *label_17;
    QTextEdit *Line3Sec;
    QLabel *label_18;
    QTextEdit *Line3HunMSec;
    QLabel *label_19;
    QLabel *Line1Team;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *Line0Min;
    QLabel *label_40;
    QTextEdit *Line0Sec;
    QLabel *label_41;
    QTextEdit *Line0HunMSec;
    QLabel *label_42;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *Line2Q;
    QRadioButton *Line2DQ;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *Line3Q;
    QRadioButton *Line3DQ;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *Line1Q;
    QRadioButton *Line1DQ;
    QHBoxLayout *horizontalLayout;
    QTextEdit *Line1Min;
    QLabel *label;
    QTextEdit *Line1Sec;
    QLabel *label_2;
    QTextEdit *Line1HunMSec;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *Line2Min;
    QLabel *label_14;
    QTextEdit *Line2Sec;
    QLabel *label_15;
    QTextEdit *Line2HunMSec;
    QLabel *label_16;
    QLabel *Line1Name;
    QLabel *Line3Name;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *Line2Name;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *Line0Name;
    QLabel *Line3Team;
    QLabel *Line2Team;
    QLabel *Line0Team;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *Line0Q;
    QRadioButton *Line0DQ;
    QLabel *label_39;
    QLabel *label_3;
    QLabel *CompetitionName;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *StartBtn;
    QPushButton *StopBtn;
    QPushButton *Next;
    QPushButton *ContinueBtn;
    QPushButton *Refresh;

    void setupUi(QWidget *ControlWindow)
    {
        if (ControlWindow->objectName().isEmpty())
            ControlWindow->setObjectName(QStringLiteral("ControlWindow"));
        ControlWindow->resize(900, 650);
        ControlWindow->setMinimumSize(QSize(900, 650));
        ControlWindow->setMaximumSize(QSize(900, 650));
        gridLayoutWidget = new QWidget(ControlWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 150, 799, 496));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(0, 40));
        label_12->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\200\240\345\255\227\345\267\245\346\210\277\346\202\246\345\234\206\346\274\224\347\244\272\347\211\210\345\270\270\350\247\204\344\275\223"));
        font.setPointSize(14);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 7, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Line3Min = new QTextEdit(gridLayoutWidget);
        Line3Min->setObjectName(QStringLiteral("Line3Min"));
        Line3Min->setMinimumSize(QSize(30, 25));
        Line3Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_3->addWidget(Line3Min);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(12, 25));
        label_17->setMaximumSize(QSize(12, 25));
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_3->addWidget(label_17);

        Line3Sec = new QTextEdit(gridLayoutWidget);
        Line3Sec->setObjectName(QStringLiteral("Line3Sec"));
        Line3Sec->setMinimumSize(QSize(30, 25));
        Line3Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_3->addWidget(Line3Sec);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(12, 25));
        label_18->setMaximumSize(QSize(12, 25));
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_3->addWidget(label_18);

        Line3HunMSec = new QTextEdit(gridLayoutWidget);
        Line3HunMSec->setObjectName(QStringLiteral("Line3HunMSec"));
        Line3HunMSec->setMinimumSize(QSize(60, 25));
        Line3HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_3->addWidget(Line3HunMSec);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(40, 25));
        label_19->setMaximumSize(QSize(40, 25));
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_3->addWidget(label_19);


        gridLayout->addLayout(horizontalLayout_3, 4, 7, 1, 1);

        Line1Team = new QLabel(gridLayoutWidget);
        Line1Team->setObjectName(QStringLiteral("Line1Team"));
        Line1Team->setMinimumSize(QSize(250, 25));
        Line1Team->setMaximumSize(QSize(195, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(14);
        Line1Team->setFont(font1);
        Line1Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Team, 2, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Line0Min = new QTextEdit(gridLayoutWidget);
        Line0Min->setObjectName(QStringLiteral("Line0Min"));
        Line0Min->setMinimumSize(QSize(30, 25));
        Line0Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_6->addWidget(Line0Min);

        label_40 = new QLabel(gridLayoutWidget);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(12, 25));
        label_40->setMaximumSize(QSize(12, 25));

        horizontalLayout_6->addWidget(label_40);

        Line0Sec = new QTextEdit(gridLayoutWidget);
        Line0Sec->setObjectName(QStringLiteral("Line0Sec"));
        Line0Sec->setMinimumSize(QSize(30, 25));
        Line0Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_6->addWidget(Line0Sec);

        label_41 = new QLabel(gridLayoutWidget);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setMinimumSize(QSize(12, 25));
        label_41->setMaximumSize(QSize(12, 25));

        horizontalLayout_6->addWidget(label_41);

        Line0HunMSec = new QTextEdit(gridLayoutWidget);
        Line0HunMSec->setObjectName(QStringLiteral("Line0HunMSec"));
        Line0HunMSec->setMinimumSize(QSize(60, 25));
        Line0HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_6->addWidget(Line0HunMSec);

        label_42 = new QLabel(gridLayoutWidget);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setMinimumSize(QSize(40, 25));
        label_42->setMaximumSize(QSize(40, 25));

        horizontalLayout_6->addWidget(label_42);


        gridLayout->addLayout(horizontalLayout_6, 1, 7, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Line2Q = new QRadioButton(gridLayoutWidget);
        Line2Q->setObjectName(QStringLiteral("Line2Q"));
        Line2Q->setMinimumSize(QSize(0, 16));
        Line2Q->setMaximumSize(QSize(16777215, 16));
        Line2Q->setAutoExclusive(false);

        verticalLayout_5->addWidget(Line2Q);

        Line2DQ = new QRadioButton(gridLayoutWidget);
        Line2DQ->setObjectName(QStringLiteral("Line2DQ"));
        Line2DQ->setMinimumSize(QSize(0, 16));
        Line2DQ->setMaximumSize(QSize(16777215, 16));
        Line2DQ->setAutoExclusive(false);

        verticalLayout_5->addWidget(Line2DQ);


        gridLayout->addLayout(verticalLayout_5, 3, 4, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Line3Q = new QRadioButton(gridLayoutWidget);
        Line3Q->setObjectName(QStringLiteral("Line3Q"));
        Line3Q->setMinimumSize(QSize(0, 16));
        Line3Q->setMaximumSize(QSize(16777215, 16));
        Line3Q->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line3Q->setAutoExclusive(false);

        verticalLayout_3->addWidget(Line3Q);

        Line3DQ = new QRadioButton(gridLayoutWidget);
        Line3DQ->setObjectName(QStringLiteral("Line3DQ"));
        Line3DQ->setMinimumSize(QSize(0, 16));
        Line3DQ->setMaximumSize(QSize(16777215, 16));
        Line3DQ->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line3DQ->setAutoExclusive(false);

        verticalLayout_3->addWidget(Line3DQ);


        gridLayout->addLayout(verticalLayout_3, 4, 4, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Line1Q = new QRadioButton(gridLayoutWidget);
        Line1Q->setObjectName(QStringLiteral("Line1Q"));
        Line1Q->setMinimumSize(QSize(0, 16));
        Line1Q->setMaximumSize(QSize(16777215, 16));
        Line1Q->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line1Q->setAutoExclusive(false);

        verticalLayout_4->addWidget(Line1Q);

        Line1DQ = new QRadioButton(gridLayoutWidget);
        Line1DQ->setObjectName(QStringLiteral("Line1DQ"));
        Line1DQ->setMinimumSize(QSize(0, 16));
        Line1DQ->setMaximumSize(QSize(16777215, 16));
        Line1DQ->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line1DQ->setAutoExclusive(false);

        verticalLayout_4->addWidget(Line1DQ);


        gridLayout->addLayout(verticalLayout_4, 2, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Line1Min = new QTextEdit(gridLayoutWidget);
        Line1Min->setObjectName(QStringLiteral("Line1Min"));
        Line1Min->setMinimumSize(QSize(30, 25));
        Line1Min->setMaximumSize(QSize(30, 25));

        horizontalLayout->addWidget(Line1Min);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(12, 25));
        label->setMaximumSize(QSize(12, 25));
        label->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout->addWidget(label);

        Line1Sec = new QTextEdit(gridLayoutWidget);
        Line1Sec->setObjectName(QStringLiteral("Line1Sec"));
        Line1Sec->setMinimumSize(QSize(30, 25));
        Line1Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout->addWidget(Line1Sec);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(12, 25));
        label_2->setMaximumSize(QSize(12, 25));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout->addWidget(label_2);

        Line1HunMSec = new QTextEdit(gridLayoutWidget);
        Line1HunMSec->setObjectName(QStringLiteral("Line1HunMSec"));
        Line1HunMSec->setMinimumSize(QSize(60, 25));
        Line1HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout->addWidget(Line1HunMSec);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(40, 25));
        label_13->setMaximumSize(QSize(40, 25));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout->addWidget(label_13);


        gridLayout->addLayout(horizontalLayout, 2, 7, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Line2Min = new QTextEdit(gridLayoutWidget);
        Line2Min->setObjectName(QStringLiteral("Line2Min"));
        Line2Min->setMinimumSize(QSize(30, 25));
        Line2Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_2->addWidget(Line2Min);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(12, 25));
        label_14->setMaximumSize(QSize(12, 25));

        horizontalLayout_2->addWidget(label_14);

        Line2Sec = new QTextEdit(gridLayoutWidget);
        Line2Sec->setObjectName(QStringLiteral("Line2Sec"));
        Line2Sec->setMinimumSize(QSize(30, 25));
        Line2Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_2->addWidget(Line2Sec);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(12, 25));
        label_15->setMaximumSize(QSize(12, 25));

        horizontalLayout_2->addWidget(label_15);

        Line2HunMSec = new QTextEdit(gridLayoutWidget);
        Line2HunMSec->setObjectName(QStringLiteral("Line2HunMSec"));
        Line2HunMSec->setMinimumSize(QSize(60, 25));
        Line2HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_2->addWidget(Line2HunMSec);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(40, 25));
        label_16->setMaximumSize(QSize(40, 25));

        horizontalLayout_2->addWidget(label_16);


        gridLayout->addLayout(horizontalLayout_2, 3, 7, 1, 1);

        Line1Name = new QLabel(gridLayoutWidget);
        Line1Name->setObjectName(QStringLiteral("Line1Name"));
        Line1Name->setMinimumSize(QSize(250, 25));
        Line1Name->setMaximumSize(QSize(250, 25));
        Line1Name->setFont(font1);
        Line1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Name, 2, 1, 1, 1);

        Line3Name = new QLabel(gridLayoutWidget);
        Line3Name->setObjectName(QStringLiteral("Line3Name"));
        Line3Name->setMinimumSize(QSize(250, 25));
        Line3Name->setMaximumSize(QSize(195, 25));
        Line3Name->setFont(font1);
        Line3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Name, 4, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 25));
        label_7->setMaximumSize(QSize(16777215, 25));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setMaximumSize(QSize(16777215, 25));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        Line2Name = new QLabel(gridLayoutWidget);
        Line2Name->setObjectName(QStringLiteral("Line2Name"));
        Line2Name->setMinimumSize(QSize(250, 25));
        Line2Name->setMaximumSize(QSize(195, 25));
        Line2Name->setFont(font1);
        Line2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Name, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setMaximumSize(QSize(16777215, 40));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 25));
        label_5->setMaximumSize(QSize(16777215, 25));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 40));
        label_11->setMaximumSize(QSize(16777215, 40));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 40));
        label_10->setMaximumSize(QSize(16777215, 40));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        Line0Name = new QLabel(gridLayoutWidget);
        Line0Name->setObjectName(QStringLiteral("Line0Name"));
        Line0Name->setMinimumSize(QSize(250, 25));
        Line0Name->setMaximumSize(QSize(250, 25));
        Line0Name->setFont(font1);
        Line0Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Name, 1, 1, 1, 1);

        Line3Team = new QLabel(gridLayoutWidget);
        Line3Team->setObjectName(QStringLiteral("Line3Team"));
        Line3Team->setMinimumSize(QSize(250, 25));
        Line3Team->setMaximumSize(QSize(195, 25));
        Line3Team->setFont(font1);
        Line3Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Team, 4, 2, 1, 1);

        Line2Team = new QLabel(gridLayoutWidget);
        Line2Team->setObjectName(QStringLiteral("Line2Team"));
        Line2Team->setMinimumSize(QSize(250, 25));
        Line2Team->setMaximumSize(QSize(195, 25));
        Line2Team->setFont(font1);
        Line2Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Team, 3, 2, 1, 1);

        Line0Team = new QLabel(gridLayoutWidget);
        Line0Team->setObjectName(QStringLiteral("Line0Team"));
        Line0Team->setMinimumSize(QSize(250, 25));
        Line0Team->setMaximumSize(QSize(195, 25));
        Line0Team->setFont(font1);
        Line0Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Team, 1, 2, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        Line0Q = new QRadioButton(gridLayoutWidget);
        Line0Q->setObjectName(QStringLiteral("Line0Q"));
        Line0Q->setMinimumSize(QSize(0, 16));
        Line0Q->setMaximumSize(QSize(16777215, 16));
        Line0Q->setAutoExclusive(false);

        verticalLayout_11->addWidget(Line0Q);

        Line0DQ = new QRadioButton(gridLayoutWidget);
        Line0DQ->setObjectName(QStringLiteral("Line0DQ"));
        Line0DQ->setMinimumSize(QSize(0, 16));
        Line0DQ->setMaximumSize(QSize(16777215, 16));
        Line0DQ->setAutoExclusive(false);

        verticalLayout_11->addWidget(Line0DQ);


        gridLayout->addLayout(verticalLayout_11, 1, 4, 1, 1);

        label_39 = new QLabel(gridLayoutWidget);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(0, 25));
        label_39->setMaximumSize(QSize(16777215, 25));
        label_39->setFont(font);
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_39, 1, 0, 1, 1);

        label_3 = new QLabel(ControlWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 120, 91, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\200\240\345\255\227\345\267\245\346\210\277\346\202\246\345\234\206\346\274\224\347\244\272\347\211\210\345\270\270\350\247\204\344\275\223"));
        font2.setPointSize(16);
        label_3->setFont(font2);
        CompetitionName = new QLabel(ControlWindow);
        CompetitionName->setObjectName(QStringLiteral("CompetitionName"));
        CompetitionName->setGeometry(QRect(140, 120, 701, 21));
        CompetitionName->setFont(font2);
        gridLayoutWidget_2 = new QWidget(ControlWindow);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(300, 10, 576, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        StartBtn = new QPushButton(gridLayoutWidget_2);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));

        gridLayout_2->addWidget(StartBtn, 0, 0, 1, 1);

        StopBtn = new QPushButton(gridLayoutWidget_2);
        StopBtn->setObjectName(QStringLiteral("StopBtn"));

        gridLayout_2->addWidget(StopBtn, 0, 2, 1, 1);

        Next = new QPushButton(gridLayoutWidget_2);
        Next->setObjectName(QStringLiteral("Next"));

        gridLayout_2->addWidget(Next, 0, 4, 1, 1);

        ContinueBtn = new QPushButton(gridLayoutWidget_2);
        ContinueBtn->setObjectName(QStringLiteral("ContinueBtn"));

        gridLayout_2->addWidget(ContinueBtn, 0, 1, 1, 1);

        Refresh = new QPushButton(gridLayoutWidget_2);
        Refresh->setObjectName(QStringLiteral("Refresh"));

        gridLayout_2->addWidget(Refresh, 0, 3, 1, 1);


        retranslateUi(ControlWindow);

        QMetaObject::connectSlotsByName(ControlWindow);
    } // setupUi

    void retranslateUi(QWidget *ControlWindow)
    {
        ControlWindow->setWindowTitle(QApplication::translate("ControlWindow", "SwimmingCompetionScreenAndGradeSystemControlWindow", Q_NULLPTR));
        label_12->setText(QApplication::translate("ControlWindow", "\351\200\211\346\211\213\346\210\220\347\273\251", Q_NULLPTR));
        label_17->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_18->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_19->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line1Team->setText(QString());
        label_40->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_41->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_42->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line2Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line2DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line3Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line3DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line1Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line1DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_13->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        label_14->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_15->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_16->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line1Name->setText(QString());
        Line3Name->setText(QString());
        label_7->setText(QApplication::translate("ControlWindow", "9", Q_NULLPTR));
        label_6->setText(QApplication::translate("ControlWindow", "8", Q_NULLPTR));
        Line2Name->setText(QString());
        label_4->setText(QApplication::translate("ControlWindow", "\351\201\223\346\254\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("ControlWindow", "7", Q_NULLPTR));
        label_11->setText(QApplication::translate("ControlWindow", "\344\273\243\350\241\250\351\230\237\344\274\215", Q_NULLPTR));
        label_10->setText(QApplication::translate("ControlWindow", "\351\200\211\346\211\213\345\247\223\345\220\215", Q_NULLPTR));
        Line0Name->setText(QString());
        Line3Team->setText(QString());
        Line2Team->setText(QString());
        Line0Team->setText(QString());
        Line0Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line0DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label_39->setText(QApplication::translate("ControlWindow", "6", Q_NULLPTR));
        label_3->setText(QApplication::translate("ControlWindow", "\346\234\254\347\273\204\346\257\224\350\265\233\357\274\232", Q_NULLPTR));
        CompetitionName->setText(QString());
        StartBtn->setText(QApplication::translate("ControlWindow", "\345\274\200\345\247\213\346\257\224\350\265\233", Q_NULLPTR));
        StopBtn->setText(QApplication::translate("ControlWindow", "\346\232\202\345\201\234\346\257\224\350\265\233", Q_NULLPTR));
        Next->setText(QApplication::translate("ControlWindow", "\350\277\233\345\205\245\344\270\213\344\270\200\347\273\204\346\257\224\350\265\233", Q_NULLPTR));
        ContinueBtn->setText(QApplication::translate("ControlWindow", "\347\273\247\347\273\255\346\257\224\350\265\233", Q_NULLPTR));
        Refresh->setText(QApplication::translate("ControlWindow", "\357\274\210\346\210\220\347\273\251\345\275\225\345\205\245\345\256\214\346\210\220\357\274\211\345\210\267\346\226\260\345\261\217\345\271\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ControlWindow: public Ui_ControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWINDOW_H
