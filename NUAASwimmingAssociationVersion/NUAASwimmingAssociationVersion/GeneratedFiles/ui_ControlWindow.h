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
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *Line3Min;
    QLabel *label_17;
    QTextEdit *Line3Sec;
    QLabel *label_18;
    QTextEdit *Line3HunMSec;
    QLabel *label_19;
    QLabel *Line1Team;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *Line4Q;
    QRadioButton *Line4DQ;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *Line4Min;
    QLabel *label_20;
    QTextEdit *Line4Sec;
    QLabel *label_21;
    QTextEdit *Line4HunMSec;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *Line1Q;
    QRadioButton *Line1DQ;
    QLabel *label_27;
    QLabel *Line7Name;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *Line3Q;
    QRadioButton *Line3DQ;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *Line5Q;
    QRadioButton *Line5DQ;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *Line2Q;
    QRadioButton *Line2DQ;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *Line0Min;
    QLabel *label_40;
    QTextEdit *Line0Sec;
    QLabel *label_41;
    QTextEdit *Line0HunMSec;
    QLabel *label_42;
    QHBoxLayout *horizontalLayout;
    QTextEdit *Line1Min;
    QLabel *label;
    QTextEdit *Line1Sec;
    QLabel *label_2;
    QTextEdit *Line1HunMSec;
    QLabel *label_13;
    QLabel *Line5Team;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *Line2Min;
    QLabel *label_14;
    QTextEdit *Line2Sec;
    QLabel *label_15;
    QTextEdit *Line2HunMSec;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *Line5Min;
    QLabel *label_23;
    QTextEdit *Line5Sec;
    QLabel *label_24;
    QTextEdit *Line5HunMSec;
    QLabel *label_25;
    QLabel *Line0Name;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *Line1Name;
    QLabel *label_4;
    QLabel *Line3Name;
    QLabel *label_7;
    QLabel *Line4Team;
    QLabel *Line5Name;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *Line2Name;
    QLabel *Line3Team;
    QLabel *Line4Name;
    QLabel *Line2Team;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *Line7Q;
    QRadioButton *Line7DQ;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *Line8Q;
    QRadioButton *Line8DQ;
    QLabel *Line6Name;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *Line6Q;
    QRadioButton *Line6DQ;
    QLabel *Line8Team;
    QLabel *Line7Team;
    QLabel *Line6Team;
    QLabel *Line8Name;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *Line6Min;
    QLabel *label_30;
    QTextEdit *Line6Sec;
    QLabel *label_31;
    QTextEdit *Line6HunMSec;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_8;
    QTextEdit *Line7Min;
    QLabel *label_33;
    QTextEdit *Line7Sec;
    QLabel *label_34;
    QTextEdit *Line7HunMSec;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_9;
    QTextEdit *Line8Min;
    QLabel *label_36;
    QTextEdit *Line8Sec;
    QLabel *label_37;
    QTextEdit *Line8HunMSec;
    QLabel *label_38;
    QLabel *Line0Team;
    QLabel *label_39;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *Line0Q;
    QRadioButton *Line0DQ;
    QLabel *label_43;
    QLabel *Line9Name;
    QLabel *Line9Team;
    QVBoxLayout *verticalLayout_12;
    QRadioButton *Line9Q;
    QRadioButton *Line9DQ;
    QHBoxLayout *horizontalLayout_10;
    QTextEdit *Line9Min;
    QLabel *label_44;
    QTextEdit *Line9Sec;
    QLabel *label_45;
    QTextEdit *Line9HunMSec;
    QLabel *label_46;
    QLabel *label_3;
    QLabel *CompetitionName;
    QLabel *label_26;
    QLabel *RegistrationCompetitionName;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *ContinueBtn;
    QPushButton *StopBtn;
    QPushButton *StartBtn;
    QPushButton *Whistle;
    QPushButton *Next;
    QPushButton *Refresh;
    QPushButton *NextLoad;
    QPushButton *LastLoad;

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
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        Line1Team->setFont(font);
        Line1Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Team, 2, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Line4Q = new QRadioButton(gridLayoutWidget);
        Line4Q->setObjectName(QStringLiteral("Line4Q"));
        Line4Q->setMinimumSize(QSize(0, 16));
        Line4Q->setMaximumSize(QSize(16777215, 16));
        Line4Q->setAutoExclusive(false);

        verticalLayout_6->addWidget(Line4Q);

        Line4DQ = new QRadioButton(gridLayoutWidget);
        Line4DQ->setObjectName(QStringLiteral("Line4DQ"));
        Line4DQ->setMinimumSize(QSize(0, 16));
        Line4DQ->setMaximumSize(QSize(16777215, 16));
        Line4DQ->setAutoExclusive(false);

        verticalLayout_6->addWidget(Line4DQ);


        gridLayout->addLayout(verticalLayout_6, 5, 4, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(0, 40));
        label_12->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\200\240\345\255\227\345\267\245\346\210\277\346\202\246\345\234\206\346\274\224\347\244\272\347\211\210\345\270\270\350\247\204\344\275\223"));
        font1.setPointSize(14);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 7, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Line4Min = new QTextEdit(gridLayoutWidget);
        Line4Min->setObjectName(QStringLiteral("Line4Min"));
        Line4Min->setMinimumSize(QSize(30, 25));
        Line4Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_4->addWidget(Line4Min);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(12, 25));
        label_20->setMaximumSize(QSize(12, 25));

        horizontalLayout_4->addWidget(label_20);

        Line4Sec = new QTextEdit(gridLayoutWidget);
        Line4Sec->setObjectName(QStringLiteral("Line4Sec"));
        Line4Sec->setMinimumSize(QSize(30, 25));
        Line4Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_4->addWidget(Line4Sec);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(12, 25));
        label_21->setMaximumSize(QSize(12, 25));

        horizontalLayout_4->addWidget(label_21);

        Line4HunMSec = new QTextEdit(gridLayoutWidget);
        Line4HunMSec->setObjectName(QStringLiteral("Line4HunMSec"));
        Line4HunMSec->setMinimumSize(QSize(60, 25));
        Line4HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_4->addWidget(Line4HunMSec);

        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(40, 25));
        label_22->setMaximumSize(QSize(40, 25));

        horizontalLayout_4->addWidget(label_22);


        gridLayout->addLayout(horizontalLayout_4, 5, 7, 1, 1);

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

        label_27 = new QLabel(gridLayoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(0, 25));
        label_27->setMaximumSize(QSize(16777215, 25));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_27, 7, 0, 1, 1);

        Line7Name = new QLabel(gridLayoutWidget);
        Line7Name->setObjectName(QStringLiteral("Line7Name"));
        Line7Name->setMinimumSize(QSize(250, 25));
        Line7Name->setMaximumSize(QSize(195, 25));
        Line7Name->setFont(font);
        Line7Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Name, 8, 1, 1, 1);

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

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Line5Q = new QRadioButton(gridLayoutWidget);
        Line5Q->setObjectName(QStringLiteral("Line5Q"));
        Line5Q->setMinimumSize(QSize(0, 16));
        Line5Q->setMaximumSize(QSize(16777215, 16));
        Line5Q->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line5Q->setAutoExclusive(false);

        verticalLayout_7->addWidget(Line5Q);

        Line5DQ = new QRadioButton(gridLayoutWidget);
        Line5DQ->setObjectName(QStringLiteral("Line5DQ"));
        Line5DQ->setMinimumSize(QSize(0, 16));
        Line5DQ->setMaximumSize(QSize(16777215, 16));
        Line5DQ->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line5DQ->setAutoExclusive(false);

        verticalLayout_7->addWidget(Line5DQ);


        gridLayout->addLayout(verticalLayout_7, 6, 4, 1, 1);

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

        Line5Team = new QLabel(gridLayoutWidget);
        Line5Team->setObjectName(QStringLiteral("Line5Team"));
        Line5Team->setMinimumSize(QSize(250, 25));
        Line5Team->setMaximumSize(QSize(195, 25));
        Line5Team->setFont(font);
        Line5Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Team, 6, 2, 1, 1);

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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Line5Min = new QTextEdit(gridLayoutWidget);
        Line5Min->setObjectName(QStringLiteral("Line5Min"));
        Line5Min->setMinimumSize(QSize(30, 25));
        Line5Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_5->addWidget(Line5Min);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(12, 25));
        label_23->setMaximumSize(QSize(12, 25));
        label_23->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_5->addWidget(label_23);

        Line5Sec = new QTextEdit(gridLayoutWidget);
        Line5Sec->setObjectName(QStringLiteral("Line5Sec"));
        Line5Sec->setMinimumSize(QSize(30, 25));
        Line5Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_5->addWidget(Line5Sec);

        label_24 = new QLabel(gridLayoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(12, 25));
        label_24->setMaximumSize(QSize(12, 25));
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_5->addWidget(label_24);

        Line5HunMSec = new QTextEdit(gridLayoutWidget);
        Line5HunMSec->setObjectName(QStringLiteral("Line5HunMSec"));
        Line5HunMSec->setMinimumSize(QSize(60, 25));
        Line5HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_5->addWidget(Line5HunMSec);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(40, 25));
        label_25->setMaximumSize(QSize(40, 25));
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_5->addWidget(label_25);


        gridLayout->addLayout(horizontalLayout_5, 6, 7, 1, 1);

        Line0Name = new QLabel(gridLayoutWidget);
        Line0Name->setObjectName(QStringLiteral("Line0Name"));
        Line0Name->setMinimumSize(QSize(250, 25));
        Line0Name->setMaximumSize(QSize(250, 25));
        Line0Name->setFont(font);
        Line0Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Name, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 25));
        label_5->setMaximumSize(QSize(16777215, 25));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 25));
        label_8->setMaximumSize(QSize(16777215, 25));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        Line1Name = new QLabel(gridLayoutWidget);
        Line1Name->setObjectName(QStringLiteral("Line1Name"));
        Line1Name->setMinimumSize(QSize(250, 25));
        Line1Name->setMaximumSize(QSize(250, 25));
        Line1Name->setFont(font);
        Line1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Name, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setMaximumSize(QSize(16777215, 40));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        Line3Name = new QLabel(gridLayoutWidget);
        Line3Name->setObjectName(QStringLiteral("Line3Name"));
        Line3Name->setMinimumSize(QSize(250, 25));
        Line3Name->setMaximumSize(QSize(195, 25));
        Line3Name->setFont(font);
        Line3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Name, 4, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 25));
        label_7->setMaximumSize(QSize(16777215, 25));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        Line4Team = new QLabel(gridLayoutWidget);
        Line4Team->setObjectName(QStringLiteral("Line4Team"));
        Line4Team->setMinimumSize(QSize(250, 25));
        Line4Team->setMaximumSize(QSize(195, 25));
        Line4Team->setFont(font);
        Line4Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Team, 5, 2, 1, 1);

        Line5Name = new QLabel(gridLayoutWidget);
        Line5Name->setObjectName(QStringLiteral("Line5Name"));
        Line5Name->setMinimumSize(QSize(250, 25));
        Line5Name->setMaximumSize(QSize(195, 25));
        Line5Name->setFont(font);
        Line5Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Name, 6, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setMaximumSize(QSize(16777215, 25));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 40));
        label_10->setMaximumSize(QSize(16777215, 40));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 25));
        label_9->setMaximumSize(QSize(16777215, 25));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 40));
        label_11->setMaximumSize(QSize(16777215, 40));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 2, 1, 1);

        Line2Name = new QLabel(gridLayoutWidget);
        Line2Name->setObjectName(QStringLiteral("Line2Name"));
        Line2Name->setMinimumSize(QSize(250, 25));
        Line2Name->setMaximumSize(QSize(195, 25));
        Line2Name->setFont(font);
        Line2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Name, 3, 1, 1, 1);

        Line3Team = new QLabel(gridLayoutWidget);
        Line3Team->setObjectName(QStringLiteral("Line3Team"));
        Line3Team->setMinimumSize(QSize(250, 25));
        Line3Team->setMaximumSize(QSize(195, 25));
        Line3Team->setFont(font);
        Line3Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Team, 4, 2, 1, 1);

        Line4Name = new QLabel(gridLayoutWidget);
        Line4Name->setObjectName(QStringLiteral("Line4Name"));
        Line4Name->setMinimumSize(QSize(250, 25));
        Line4Name->setMaximumSize(QSize(195, 25));
        Line4Name->setFont(font);
        Line4Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Name, 5, 1, 1, 1);

        Line2Team = new QLabel(gridLayoutWidget);
        Line2Team->setObjectName(QStringLiteral("Line2Team"));
        Line2Team->setMinimumSize(QSize(250, 25));
        Line2Team->setMaximumSize(QSize(195, 25));
        Line2Team->setFont(font);
        Line2Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Team, 3, 2, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        Line7Q = new QRadioButton(gridLayoutWidget);
        Line7Q->setObjectName(QStringLiteral("Line7Q"));
        Line7Q->setMinimumSize(QSize(0, 16));
        Line7Q->setMaximumSize(QSize(16777215, 16));
        Line7Q->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line7Q->setAutoExclusive(false);

        verticalLayout_9->addWidget(Line7Q);

        Line7DQ = new QRadioButton(gridLayoutWidget);
        Line7DQ->setObjectName(QStringLiteral("Line7DQ"));
        Line7DQ->setMinimumSize(QSize(0, 16));
        Line7DQ->setMaximumSize(QSize(16777215, 16));
        Line7DQ->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line7DQ->setAutoExclusive(false);

        verticalLayout_9->addWidget(Line7DQ);


        gridLayout->addLayout(verticalLayout_9, 8, 4, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        Line8Q = new QRadioButton(gridLayoutWidget);
        Line8Q->setObjectName(QStringLiteral("Line8Q"));
        Line8Q->setMinimumSize(QSize(0, 16));
        Line8Q->setMaximumSize(QSize(16777215, 16));
        Line8Q->setAutoExclusive(false);

        verticalLayout_10->addWidget(Line8Q);

        Line8DQ = new QRadioButton(gridLayoutWidget);
        Line8DQ->setObjectName(QStringLiteral("Line8DQ"));
        Line8DQ->setMinimumSize(QSize(0, 16));
        Line8DQ->setMaximumSize(QSize(16777215, 16));
        Line8DQ->setAutoExclusive(false);

        verticalLayout_10->addWidget(Line8DQ);


        gridLayout->addLayout(verticalLayout_10, 9, 4, 1, 1);

        Line6Name = new QLabel(gridLayoutWidget);
        Line6Name->setObjectName(QStringLiteral("Line6Name"));
        Line6Name->setMinimumSize(QSize(250, 25));
        Line6Name->setMaximumSize(QSize(195, 25));
        Line6Name->setFont(font);
        Line6Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Name, 7, 1, 1, 1);

        label_29 = new QLabel(gridLayoutWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(0, 25));
        label_29->setMaximumSize(QSize(16777215, 25));
        label_29->setFont(font1);
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_29, 9, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        Line6Q = new QRadioButton(gridLayoutWidget);
        Line6Q->setObjectName(QStringLiteral("Line6Q"));
        Line6Q->setMinimumSize(QSize(0, 16));
        Line6Q->setMaximumSize(QSize(16777215, 16));
        Line6Q->setAutoExclusive(false);

        verticalLayout_8->addWidget(Line6Q);

        Line6DQ = new QRadioButton(gridLayoutWidget);
        Line6DQ->setObjectName(QStringLiteral("Line6DQ"));
        Line6DQ->setMinimumSize(QSize(0, 16));
        Line6DQ->setMaximumSize(QSize(16777215, 16));
        Line6DQ->setAutoExclusive(false);

        verticalLayout_8->addWidget(Line6DQ);


        gridLayout->addLayout(verticalLayout_8, 7, 4, 1, 1);

        Line8Team = new QLabel(gridLayoutWidget);
        Line8Team->setObjectName(QStringLiteral("Line8Team"));
        Line8Team->setMinimumSize(QSize(250, 25));
        Line8Team->setMaximumSize(QSize(195, 25));
        Line8Team->setFont(font);
        Line8Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Team, 9, 2, 1, 1);

        Line7Team = new QLabel(gridLayoutWidget);
        Line7Team->setObjectName(QStringLiteral("Line7Team"));
        Line7Team->setMinimumSize(QSize(250, 25));
        Line7Team->setMaximumSize(QSize(195, 25));
        Line7Team->setFont(font);
        Line7Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Team, 8, 2, 1, 1);

        Line6Team = new QLabel(gridLayoutWidget);
        Line6Team->setObjectName(QStringLiteral("Line6Team"));
        Line6Team->setMinimumSize(QSize(250, 25));
        Line6Team->setMaximumSize(QSize(195, 25));
        Line6Team->setFont(font);
        Line6Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Team, 7, 2, 1, 1);

        Line8Name = new QLabel(gridLayoutWidget);
        Line8Name->setObjectName(QStringLiteral("Line8Name"));
        Line8Name->setMinimumSize(QSize(250, 25));
        Line8Name->setMaximumSize(QSize(195, 25));
        Line8Name->setFont(font);
        Line8Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Name, 9, 1, 1, 1);

        label_28 = new QLabel(gridLayoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(0, 25));
        label_28->setMaximumSize(QSize(16777215, 25));
        label_28->setFont(font1);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_28, 8, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Line6Min = new QTextEdit(gridLayoutWidget);
        Line6Min->setObjectName(QStringLiteral("Line6Min"));
        Line6Min->setMinimumSize(QSize(30, 25));
        Line6Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_7->addWidget(Line6Min);

        label_30 = new QLabel(gridLayoutWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(12, 25));
        label_30->setMaximumSize(QSize(12, 25));

        horizontalLayout_7->addWidget(label_30);

        Line6Sec = new QTextEdit(gridLayoutWidget);
        Line6Sec->setObjectName(QStringLiteral("Line6Sec"));
        Line6Sec->setMinimumSize(QSize(30, 25));
        Line6Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_7->addWidget(Line6Sec);

        label_31 = new QLabel(gridLayoutWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(12, 25));
        label_31->setMaximumSize(QSize(12, 25));

        horizontalLayout_7->addWidget(label_31);

        Line6HunMSec = new QTextEdit(gridLayoutWidget);
        Line6HunMSec->setObjectName(QStringLiteral("Line6HunMSec"));
        Line6HunMSec->setMinimumSize(QSize(60, 25));
        Line6HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_7->addWidget(Line6HunMSec);

        label_32 = new QLabel(gridLayoutWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(40, 25));
        label_32->setMaximumSize(QSize(40, 25));

        horizontalLayout_7->addWidget(label_32);


        gridLayout->addLayout(horizontalLayout_7, 7, 7, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Line7Min = new QTextEdit(gridLayoutWidget);
        Line7Min->setObjectName(QStringLiteral("Line7Min"));
        Line7Min->setMinimumSize(QSize(30, 25));
        Line7Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_8->addWidget(Line7Min);

        label_33 = new QLabel(gridLayoutWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMinimumSize(QSize(12, 25));
        label_33->setMaximumSize(QSize(12, 25));
        label_33->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_8->addWidget(label_33);

        Line7Sec = new QTextEdit(gridLayoutWidget);
        Line7Sec->setObjectName(QStringLiteral("Line7Sec"));
        Line7Sec->setMinimumSize(QSize(30, 25));
        Line7Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_8->addWidget(Line7Sec);

        label_34 = new QLabel(gridLayoutWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(12, 25));
        label_34->setMaximumSize(QSize(12, 25));
        label_34->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_8->addWidget(label_34);

        Line7HunMSec = new QTextEdit(gridLayoutWidget);
        Line7HunMSec->setObjectName(QStringLiteral("Line7HunMSec"));
        Line7HunMSec->setMinimumSize(QSize(60, 25));
        Line7HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_8->addWidget(Line7HunMSec);

        label_35 = new QLabel(gridLayoutWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMinimumSize(QSize(40, 25));
        label_35->setMaximumSize(QSize(40, 25));
        label_35->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_8->addWidget(label_35);


        gridLayout->addLayout(horizontalLayout_8, 8, 7, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Line8Min = new QTextEdit(gridLayoutWidget);
        Line8Min->setObjectName(QStringLiteral("Line8Min"));
        Line8Min->setMinimumSize(QSize(30, 25));
        Line8Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_9->addWidget(Line8Min);

        label_36 = new QLabel(gridLayoutWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(12, 25));
        label_36->setMaximumSize(QSize(12, 25));

        horizontalLayout_9->addWidget(label_36);

        Line8Sec = new QTextEdit(gridLayoutWidget);
        Line8Sec->setObjectName(QStringLiteral("Line8Sec"));
        Line8Sec->setMinimumSize(QSize(30, 25));
        Line8Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_9->addWidget(Line8Sec);

        label_37 = new QLabel(gridLayoutWidget);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setMinimumSize(QSize(12, 25));
        label_37->setMaximumSize(QSize(12, 25));

        horizontalLayout_9->addWidget(label_37);

        Line8HunMSec = new QTextEdit(gridLayoutWidget);
        Line8HunMSec->setObjectName(QStringLiteral("Line8HunMSec"));
        Line8HunMSec->setMinimumSize(QSize(60, 25));
        Line8HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_9->addWidget(Line8HunMSec);

        label_38 = new QLabel(gridLayoutWidget);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMinimumSize(QSize(40, 25));
        label_38->setMaximumSize(QSize(40, 25));

        horizontalLayout_9->addWidget(label_38);


        gridLayout->addLayout(horizontalLayout_9, 9, 7, 1, 1);

        Line0Team = new QLabel(gridLayoutWidget);
        Line0Team->setObjectName(QStringLiteral("Line0Team"));
        Line0Team->setMinimumSize(QSize(250, 25));
        Line0Team->setMaximumSize(QSize(195, 25));
        Line0Team->setFont(font);
        Line0Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Team, 1, 2, 1, 1);

        label_39 = new QLabel(gridLayoutWidget);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(0, 25));
        label_39->setMaximumSize(QSize(16777215, 25));
        label_39->setFont(font1);
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_39, 1, 0, 1, 1);

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

        label_43 = new QLabel(gridLayoutWidget);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(0, 25));
        label_43->setMaximumSize(QSize(16777215, 25));
        label_43->setFont(font1);
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_43, 10, 0, 1, 1);

        Line9Name = new QLabel(gridLayoutWidget);
        Line9Name->setObjectName(QStringLiteral("Line9Name"));
        Line9Name->setMinimumSize(QSize(250, 25));
        Line9Name->setMaximumSize(QSize(195, 25));
        Line9Name->setFont(font);
        Line9Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Name, 10, 1, 1, 1);

        Line9Team = new QLabel(gridLayoutWidget);
        Line9Team->setObjectName(QStringLiteral("Line9Team"));
        Line9Team->setMinimumSize(QSize(250, 25));
        Line9Team->setMaximumSize(QSize(195, 25));
        Line9Team->setFont(font);
        Line9Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Team, 10, 2, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        Line9Q = new QRadioButton(gridLayoutWidget);
        Line9Q->setObjectName(QStringLiteral("Line9Q"));
        Line9Q->setMinimumSize(QSize(0, 16));
        Line9Q->setMaximumSize(QSize(16777215, 16));
        Line9Q->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line9Q->setAutoExclusive(false);

        verticalLayout_12->addWidget(Line9Q);

        Line9DQ = new QRadioButton(gridLayoutWidget);
        Line9DQ->setObjectName(QStringLiteral("Line9DQ"));
        Line9DQ->setMinimumSize(QSize(0, 16));
        Line9DQ->setMaximumSize(QSize(16777215, 16));
        Line9DQ->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));
        Line9DQ->setAutoExclusive(false);

        verticalLayout_12->addWidget(Line9DQ);


        gridLayout->addLayout(verticalLayout_12, 10, 4, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Line9Min = new QTextEdit(gridLayoutWidget);
        Line9Min->setObjectName(QStringLiteral("Line9Min"));
        Line9Min->setMinimumSize(QSize(30, 25));
        Line9Min->setMaximumSize(QSize(30, 25));

        horizontalLayout_10->addWidget(Line9Min);

        label_44 = new QLabel(gridLayoutWidget);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setMinimumSize(QSize(12, 25));
        label_44->setMaximumSize(QSize(12, 25));
        label_44->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_10->addWidget(label_44);

        Line9Sec = new QTextEdit(gridLayoutWidget);
        Line9Sec->setObjectName(QStringLiteral("Line9Sec"));
        Line9Sec->setMinimumSize(QSize(30, 25));
        Line9Sec->setMaximumSize(QSize(30, 25));

        horizontalLayout_10->addWidget(Line9Sec);

        label_45 = new QLabel(gridLayoutWidget);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setMinimumSize(QSize(12, 25));
        label_45->setMaximumSize(QSize(12, 25));
        label_45->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_10->addWidget(label_45);

        Line9HunMSec = new QTextEdit(gridLayoutWidget);
        Line9HunMSec->setObjectName(QStringLiteral("Line9HunMSec"));
        Line9HunMSec->setMinimumSize(QSize(60, 25));
        Line9HunMSec->setMaximumSize(QSize(30, 25));

        horizontalLayout_10->addWidget(Line9HunMSec);

        label_46 = new QLabel(gridLayoutWidget);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMinimumSize(QSize(40, 25));
        label_46->setMaximumSize(QSize(40, 25));
        label_46->setStyleSheet(QStringLiteral("background-color: rgb(167, 167, 167);"));

        horizontalLayout_10->addWidget(label_46);


        gridLayout->addLayout(horizontalLayout_10, 10, 7, 1, 1);

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
        label_26 = new QLabel(ControlWindow);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(40, 80, 91, 21));
        label_26->setFont(font2);
        RegistrationCompetitionName = new QLabel(ControlWindow);
        RegistrationCompetitionName->setObjectName(QStringLiteral("RegistrationCompetitionName"));
        RegistrationCompetitionName->setGeometry(QRect(140, 80, 701, 21));
        RegistrationCompetitionName->setFont(font2);
        gridLayoutWidget_2 = new QWidget(ControlWindow);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(310, 10, 576, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ContinueBtn = new QPushButton(gridLayoutWidget_2);
        ContinueBtn->setObjectName(QStringLiteral("ContinueBtn"));

        gridLayout_2->addWidget(ContinueBtn, 0, 2, 1, 1);

        StopBtn = new QPushButton(gridLayoutWidget_2);
        StopBtn->setObjectName(QStringLiteral("StopBtn"));

        gridLayout_2->addWidget(StopBtn, 0, 3, 1, 1);

        StartBtn = new QPushButton(gridLayoutWidget_2);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));

        gridLayout_2->addWidget(StartBtn, 0, 1, 1, 1);

        Whistle = new QPushButton(gridLayoutWidget_2);
        Whistle->setObjectName(QStringLiteral("Whistle"));

        gridLayout_2->addWidget(Whistle, 0, 0, 1, 1);

        Next = new QPushButton(gridLayoutWidget_2);
        Next->setObjectName(QStringLiteral("Next"));

        gridLayout_2->addWidget(Next, 0, 5, 1, 1);

        Refresh = new QPushButton(gridLayoutWidget_2);
        Refresh->setObjectName(QStringLiteral("Refresh"));

        gridLayout_2->addWidget(Refresh, 0, 4, 1, 1);

        NextLoad = new QPushButton(gridLayoutWidget_2);
        NextLoad->setObjectName(QStringLiteral("NextLoad"));

        gridLayout_2->addWidget(NextLoad, 1, 5, 1, 1);

        LastLoad = new QPushButton(gridLayoutWidget_2);
        LastLoad->setObjectName(QStringLiteral("LastLoad"));

        gridLayout_2->addWidget(LastLoad, 1, 4, 1, 1);


        retranslateUi(ControlWindow);

        QMetaObject::connectSlotsByName(ControlWindow);
    } // setupUi

    void retranslateUi(QWidget *ControlWindow)
    {
        ControlWindow->setWindowTitle(QApplication::translate("ControlWindow", "SwimmingCompetionScreenAndGradeSystemControlWindow", Q_NULLPTR));
        label_17->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_18->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_19->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line1Team->setText(QString());
        Line4Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line4DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label_12->setText(QApplication::translate("ControlWindow", "\351\200\211\346\211\213\346\210\220\347\273\251", Q_NULLPTR));
        label_20->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_21->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_22->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line1Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line1DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label_27->setText(QApplication::translate("ControlWindow", "6", Q_NULLPTR));
        Line7Name->setText(QString());
        Line3Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line3DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line5Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line5DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line2Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line2DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label_40->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_41->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_42->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        label->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_13->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line5Team->setText(QString());
        label_14->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_15->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_16->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        label_23->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_24->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_25->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line0Name->setText(QString());
        label_5->setText(QApplication::translate("ControlWindow", "1", Q_NULLPTR));
        label_8->setText(QApplication::translate("ControlWindow", "4", Q_NULLPTR));
        Line1Name->setText(QString());
        label_4->setText(QApplication::translate("ControlWindow", "\351\201\223\346\254\241", Q_NULLPTR));
        Line3Name->setText(QString());
        label_7->setText(QApplication::translate("ControlWindow", "3", Q_NULLPTR));
        Line4Team->setText(QString());
        Line5Name->setText(QString());
        label_6->setText(QApplication::translate("ControlWindow", "2", Q_NULLPTR));
        label_10->setText(QApplication::translate("ControlWindow", "\351\200\211\346\211\213\345\247\223\345\220\215", Q_NULLPTR));
        label_9->setText(QApplication::translate("ControlWindow", "5", Q_NULLPTR));
        label_11->setText(QApplication::translate("ControlWindow", "\344\273\243\350\241\250\351\230\237\344\274\215", Q_NULLPTR));
        Line2Name->setText(QString());
        Line3Team->setText(QString());
        Line4Name->setText(QString());
        Line2Team->setText(QString());
        Line7Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line7DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line8Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line8DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line6Name->setText(QString());
        label_29->setText(QApplication::translate("ControlWindow", "8", Q_NULLPTR));
        Line6Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line6DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        Line8Team->setText(QString());
        Line7Team->setText(QString());
        Line6Team->setText(QString());
        Line8Name->setText(QString());
        label_28->setText(QApplication::translate("ControlWindow", "7", Q_NULLPTR));
        label_30->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_31->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_32->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        label_33->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_34->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_35->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        label_36->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_37->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_38->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        Line0Team->setText(QString());
        label_39->setText(QApplication::translate("ControlWindow", "0", Q_NULLPTR));
        Line0Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line0DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label_43->setText(QApplication::translate("ControlWindow", "9", Q_NULLPTR));
        Line9Name->setText(QString());
        Line9Team->setText(QString());
        Line9Q->setText(QApplication::translate("ControlWindow", "\347\212\257\350\247\204", Q_NULLPTR));
        Line9DQ->setText(QApplication::translate("ControlWindow", "\345\274\203\346\235\203", Q_NULLPTR));
        label_44->setText(QApplication::translate("ControlWindow", "\345\210\206", Q_NULLPTR));
        label_45->setText(QApplication::translate("ControlWindow", "\347\247\222", Q_NULLPTR));
        label_46->setText(QApplication::translate("ControlWindow", "\347\231\276\346\257\253\347\247\222", Q_NULLPTR));
        label_3->setText(QApplication::translate("ControlWindow", "\346\234\254\347\273\204\346\257\224\350\265\233\357\274\232", Q_NULLPTR));
        CompetitionName->setText(QString());
        label_26->setText(QApplication::translate("ControlWindow", "\346\255\243\345\234\250\346\243\200\345\275\225\357\274\232", Q_NULLPTR));
        RegistrationCompetitionName->setText(QString());
        ContinueBtn->setText(QApplication::translate("ControlWindow", "\347\273\247\347\273\255\346\257\224\350\265\233", Q_NULLPTR));
        StopBtn->setText(QApplication::translate("ControlWindow", "\346\232\202\345\201\234\346\257\224\350\265\233", Q_NULLPTR));
        StartBtn->setText(QApplication::translate("ControlWindow", "\345\274\200\345\247\213\346\257\224\350\265\233", Q_NULLPTR));
        Whistle->setText(QApplication::translate("ControlWindow", "\346\222\255\346\224\276\345\223\250\351\237\263", Q_NULLPTR));
        Next->setText(QApplication::translate("ControlWindow", "\350\277\233\345\205\245\344\270\213\344\270\200\347\273\204\346\257\224\350\265\233", Q_NULLPTR));
        Refresh->setText(QApplication::translate("ControlWindow", "\357\274\210\346\210\220\347\273\251\345\275\225\345\205\245\345\256\214\346\210\220\357\274\211\345\210\267\346\226\260\345\261\217\345\271\225", Q_NULLPTR));
        NextLoad->setText(QApplication::translate("ControlWindow", "\344\270\213\347\273\204\346\243\200\345\275\225", Q_NULLPTR));
        LastLoad->setText(QApplication::translate("ControlWindow", "\344\270\212\347\273\204\346\243\200\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ControlWindow: public Ui_ControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWINDOW_H
