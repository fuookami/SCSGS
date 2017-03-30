/********************************************************************************
** Form generated from reading UI file 'ScreenWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENWINDOW_H
#define UI_SCREENWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenWindow
{
public:
    QLabel *CompetitionName;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *Line1Name;
    QLabel *Line3Team;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *Line0Team;
    QLabel *Line1Grade;
    QLabel *Line0Num;
    QLabel *Line3Name;
    QLabel *Line1Num;
    QLabel *Line0Rank;
    QLabel *Line3Class;
    QLabel *label_4;
    QLabel *Line2Rank;
    QLabel *Line2Class;
    QLabel *label_16;
    QLabel *Line1Rank;
    QLabel *Line3Num;
    QLabel *Line0Class;
    QLabel *Line2Name;
    QLabel *Line2Grade;
    QLabel *Line3Rank;
    QLabel *Line2Team;
    QLabel *label_13;
    QLabel *Line1Team;
    QLabel *Line3Grade;
    QLabel *Line0Name;
    QLabel *Line0Grade;
    QLabel *label_12;
    QLabel *Line2Num;
    QLabel *Line1Class;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *Line5Name_2;
    QLabel *Line5Rank_2;
    QLabel *Line5Score_2;
    QLabel *Line5Team_2;
    QLabel *bgi;

    void setupUi(QWidget *ScreenWindow)
    {
        if (ScreenWindow->objectName().isEmpty())
            ScreenWindow->setObjectName(QStringLiteral("ScreenWindow"));
        ScreenWindow->resize(1258, 674);
        ScreenWindow->setMinimumSize(QSize(1258, 674));
        ScreenWindow->setMaximumSize(QSize(1258, 674));
        CompetitionName = new QLabel(ScreenWindow);
        CompetitionName->setObjectName(QStringLiteral("CompetitionName"));
        CompetitionName->setGeometry(QRect(30, 30, 901, 51));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CompetitionName->sizePolicy().hasHeightForWidth());
        CompetitionName->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(217, 60, 63, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        CompetitionName->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(36);
        CompetitionName->setFont(font);
        gridLayoutWidget = new QWidget(ScreenWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 110, 1201, 561));
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(26);
        gridLayoutWidget->setFont(font1);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Line1Name = new QLabel(gridLayoutWidget);
        Line1Name->setObjectName(QStringLiteral("Line1Name"));
        sizePolicy.setHeightForWidth(Line1Name->sizePolicy().hasHeightForWidth());
        Line1Name->setSizePolicy(sizePolicy);
        Line1Name->setMinimumSize(QSize(0, 100));
        Line1Name->setMaximumSize(QSize(16777212, 100));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Name->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(42);
        Line1Name->setFont(font2);
        Line1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Name, 3, 1, 1, 1);

        Line3Team = new QLabel(gridLayoutWidget);
        Line3Team->setObjectName(QStringLiteral("Line3Team"));
        sizePolicy.setHeightForWidth(Line3Team->sizePolicy().hasHeightForWidth());
        Line3Team->setSizePolicy(sizePolicy);
        Line3Team->setMinimumSize(QSize(0, 100));
        Line3Team->setMaximumSize(QSize(16777212, 100));
        QPalette palette2;
        QBrush brush2(QColor(246, 193, 45, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Team->setPalette(palette2);
        Line3Team->setFont(font2);
        Line3Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Team, 5, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(0, 55));
        label_10->setMaximumSize(QSize(16777215, 55));
        QPalette palette3;
        QBrush brush3(QColor(102, 204, 183, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_10->setPalette(palette3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(40);
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(0, 55));
        label_11->setMaximumSize(QSize(16777215, 55));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_11->setPalette(palette4);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 2, 1, 1);

        Line0Team = new QLabel(gridLayoutWidget);
        Line0Team->setObjectName(QStringLiteral("Line0Team"));
        sizePolicy.setHeightForWidth(Line0Team->sizePolicy().hasHeightForWidth());
        Line0Team->setSizePolicy(sizePolicy);
        Line0Team->setMinimumSize(QSize(0, 100));
        Line0Team->setMaximumSize(QSize(16777212, 100));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Team->setPalette(palette5);
        Line0Team->setFont(font2);
        Line0Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Team, 2, 2, 1, 1);

        Line1Grade = new QLabel(gridLayoutWidget);
        Line1Grade->setObjectName(QStringLiteral("Line1Grade"));
        sizePolicy.setHeightForWidth(Line1Grade->sizePolicy().hasHeightForWidth());
        Line1Grade->setSizePolicy(sizePolicy);
        Line1Grade->setMinimumSize(QSize(0, 100));
        Line1Grade->setMaximumSize(QSize(16777212, 100));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Grade->setPalette(palette6);
        Line1Grade->setFont(font2);
        Line1Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Grade, 3, 4, 1, 1);

        Line0Num = new QLabel(gridLayoutWidget);
        Line0Num->setObjectName(QStringLiteral("Line0Num"));
        sizePolicy.setHeightForWidth(Line0Num->sizePolicy().hasHeightForWidth());
        Line0Num->setSizePolicy(sizePolicy);
        Line0Num->setMinimumSize(QSize(0, 100));
        Line0Num->setMaximumSize(QSize(16777212, 100));
        QPalette palette7;
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Num->setPalette(palette7);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(42);
        Line0Num->setFont(font4);
        Line0Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Num, 2, 0, 1, 1);

        Line3Name = new QLabel(gridLayoutWidget);
        Line3Name->setObjectName(QStringLiteral("Line3Name"));
        sizePolicy.setHeightForWidth(Line3Name->sizePolicy().hasHeightForWidth());
        Line3Name->setSizePolicy(sizePolicy);
        Line3Name->setMinimumSize(QSize(0, 100));
        Line3Name->setMaximumSize(QSize(16777212, 100));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Name->setPalette(palette8);
        Line3Name->setFont(font2);
        Line3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Name, 5, 1, 1, 1);

        Line1Num = new QLabel(gridLayoutWidget);
        Line1Num->setObjectName(QStringLiteral("Line1Num"));
        sizePolicy.setHeightForWidth(Line1Num->sizePolicy().hasHeightForWidth());
        Line1Num->setSizePolicy(sizePolicy);
        Line1Num->setMinimumSize(QSize(0, 100));
        Line1Num->setMaximumSize(QSize(16777212, 100));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Num->setPalette(palette9);
        Line1Num->setFont(font4);
        Line1Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Num, 3, 0, 1, 1);

        Line0Rank = new QLabel(gridLayoutWidget);
        Line0Rank->setObjectName(QStringLiteral("Line0Rank"));
        sizePolicy.setHeightForWidth(Line0Rank->sizePolicy().hasHeightForWidth());
        Line0Rank->setSizePolicy(sizePolicy);
        Line0Rank->setMinimumSize(QSize(0, 100));
        Line0Rank->setMaximumSize(QSize(16777212, 100));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Rank->setPalette(palette10);
        Line0Rank->setFont(font2);
        Line0Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Rank, 2, 5, 1, 1);

        Line3Class = new QLabel(gridLayoutWidget);
        Line3Class->setObjectName(QStringLiteral("Line3Class"));
        sizePolicy.setHeightForWidth(Line3Class->sizePolicy().hasHeightForWidth());
        Line3Class->setSizePolicy(sizePolicy);
        Line3Class->setMinimumSize(QSize(0, 100));
        Line3Class->setMaximumSize(QSize(16777212, 100));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Class->setPalette(palette11);
        Line3Class->setFont(font2);
        Line3Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Class, 5, 3, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 55));
        label_4->setMaximumSize(QSize(16777215, 55));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette12);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        Line2Rank = new QLabel(gridLayoutWidget);
        Line2Rank->setObjectName(QStringLiteral("Line2Rank"));
        sizePolicy.setHeightForWidth(Line2Rank->sizePolicy().hasHeightForWidth());
        Line2Rank->setSizePolicy(sizePolicy);
        Line2Rank->setMinimumSize(QSize(0, 100));
        Line2Rank->setMaximumSize(QSize(16777212, 100));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Rank->setPalette(palette13);
        Line2Rank->setFont(font2);
        Line2Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Rank, 4, 5, 1, 1);

        Line2Class = new QLabel(gridLayoutWidget);
        Line2Class->setObjectName(QStringLiteral("Line2Class"));
        sizePolicy.setHeightForWidth(Line2Class->sizePolicy().hasHeightForWidth());
        Line2Class->setSizePolicy(sizePolicy);
        Line2Class->setMinimumSize(QSize(0, 100));
        Line2Class->setMaximumSize(QSize(16777212, 100));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Class->setPalette(palette14);
        Line2Class->setFont(font2);
        Line2Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Class, 4, 3, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(0, 55));
        label_16->setMaximumSize(QSize(16777215, 55));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_16->setPalette(palette15);
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 0, 3, 1, 1);

        Line1Rank = new QLabel(gridLayoutWidget);
        Line1Rank->setObjectName(QStringLiteral("Line1Rank"));
        sizePolicy.setHeightForWidth(Line1Rank->sizePolicy().hasHeightForWidth());
        Line1Rank->setSizePolicy(sizePolicy);
        Line1Rank->setMinimumSize(QSize(0, 100));
        Line1Rank->setMaximumSize(QSize(16777212, 100));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Rank->setPalette(palette16);
        Line1Rank->setFont(font2);
        Line1Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Rank, 3, 5, 1, 1);

        Line3Num = new QLabel(gridLayoutWidget);
        Line3Num->setObjectName(QStringLiteral("Line3Num"));
        sizePolicy.setHeightForWidth(Line3Num->sizePolicy().hasHeightForWidth());
        Line3Num->setSizePolicy(sizePolicy);
        Line3Num->setMinimumSize(QSize(0, 100));
        Line3Num->setMaximumSize(QSize(16777212, 100));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Num->setPalette(palette17);
        Line3Num->setFont(font4);
        Line3Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Num, 5, 0, 1, 1);

        Line0Class = new QLabel(gridLayoutWidget);
        Line0Class->setObjectName(QStringLiteral("Line0Class"));
        sizePolicy.setHeightForWidth(Line0Class->sizePolicy().hasHeightForWidth());
        Line0Class->setSizePolicy(sizePolicy);
        Line0Class->setMinimumSize(QSize(0, 100));
        Line0Class->setMaximumSize(QSize(16777212, 100));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Class->setPalette(palette18);
        Line0Class->setFont(font2);
        Line0Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Class, 2, 3, 1, 1);

        Line2Name = new QLabel(gridLayoutWidget);
        Line2Name->setObjectName(QStringLiteral("Line2Name"));
        sizePolicy.setHeightForWidth(Line2Name->sizePolicy().hasHeightForWidth());
        Line2Name->setSizePolicy(sizePolicy);
        Line2Name->setMinimumSize(QSize(0, 100));
        Line2Name->setMaximumSize(QSize(16777212, 100));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Name->setPalette(palette19);
        Line2Name->setFont(font2);
        Line2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Name, 4, 1, 1, 1);

        Line2Grade = new QLabel(gridLayoutWidget);
        Line2Grade->setObjectName(QStringLiteral("Line2Grade"));
        sizePolicy.setHeightForWidth(Line2Grade->sizePolicy().hasHeightForWidth());
        Line2Grade->setSizePolicy(sizePolicy);
        Line2Grade->setMinimumSize(QSize(0, 100));
        Line2Grade->setMaximumSize(QSize(16777212, 100));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Grade->setPalette(palette20);
        Line2Grade->setFont(font2);
        Line2Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Grade, 4, 4, 1, 1);

        Line3Rank = new QLabel(gridLayoutWidget);
        Line3Rank->setObjectName(QStringLiteral("Line3Rank"));
        sizePolicy.setHeightForWidth(Line3Rank->sizePolicy().hasHeightForWidth());
        Line3Rank->setSizePolicy(sizePolicy);
        Line3Rank->setMinimumSize(QSize(0, 100));
        Line3Rank->setMaximumSize(QSize(16777212, 100));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Rank->setPalette(palette21);
        Line3Rank->setFont(font2);
        Line3Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Rank, 5, 5, 1, 1);

        Line2Team = new QLabel(gridLayoutWidget);
        Line2Team->setObjectName(QStringLiteral("Line2Team"));
        sizePolicy.setHeightForWidth(Line2Team->sizePolicy().hasHeightForWidth());
        Line2Team->setSizePolicy(sizePolicy);
        Line2Team->setMinimumSize(QSize(0, 100));
        Line2Team->setMaximumSize(QSize(16777212, 100));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Team->setPalette(palette22);
        Line2Team->setFont(font2);
        Line2Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Team, 4, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(0, 55));
        label_13->setMaximumSize(QSize(16777215, 55));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_13->setPalette(palette23);
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 0, 5, 1, 1);

        Line1Team = new QLabel(gridLayoutWidget);
        Line1Team->setObjectName(QStringLiteral("Line1Team"));
        sizePolicy.setHeightForWidth(Line1Team->sizePolicy().hasHeightForWidth());
        Line1Team->setSizePolicy(sizePolicy);
        Line1Team->setMinimumSize(QSize(0, 100));
        Line1Team->setMaximumSize(QSize(16777212, 100));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Team->setPalette(palette24);
        Line1Team->setFont(font2);
        Line1Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Team, 3, 2, 1, 1);

        Line3Grade = new QLabel(gridLayoutWidget);
        Line3Grade->setObjectName(QStringLiteral("Line3Grade"));
        sizePolicy.setHeightForWidth(Line3Grade->sizePolicy().hasHeightForWidth());
        Line3Grade->setSizePolicy(sizePolicy);
        Line3Grade->setMinimumSize(QSize(0, 100));
        Line3Grade->setMaximumSize(QSize(16777212, 100));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Grade->setPalette(palette25);
        Line3Grade->setFont(font2);
        Line3Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Grade, 5, 4, 1, 1);

        Line0Name = new QLabel(gridLayoutWidget);
        Line0Name->setObjectName(QStringLiteral("Line0Name"));
        sizePolicy.setHeightForWidth(Line0Name->sizePolicy().hasHeightForWidth());
        Line0Name->setSizePolicy(sizePolicy);
        Line0Name->setMinimumSize(QSize(0, 100));
        Line0Name->setMaximumSize(QSize(16777212, 100));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Name->setPalette(palette26);
        Line0Name->setFont(font2);
        Line0Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Name, 2, 1, 1, 1);

        Line0Grade = new QLabel(gridLayoutWidget);
        Line0Grade->setObjectName(QStringLiteral("Line0Grade"));
        sizePolicy.setHeightForWidth(Line0Grade->sizePolicy().hasHeightForWidth());
        Line0Grade->setSizePolicy(sizePolicy);
        Line0Grade->setMinimumSize(QSize(0, 100));
        Line0Grade->setMaximumSize(QSize(16777212, 100));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Grade->setPalette(palette27);
        Line0Grade->setFont(font2);
        Line0Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Grade, 2, 4, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(0, 55));
        label_12->setMaximumSize(QSize(16777215, 55));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_12->setPalette(palette28);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 4, 1, 1);

        Line2Num = new QLabel(gridLayoutWidget);
        Line2Num->setObjectName(QStringLiteral("Line2Num"));
        sizePolicy.setHeightForWidth(Line2Num->sizePolicy().hasHeightForWidth());
        Line2Num->setSizePolicy(sizePolicy);
        Line2Num->setMinimumSize(QSize(0, 100));
        Line2Num->setMaximumSize(QSize(16777212, 100));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Num->setPalette(palette29);
        Line2Num->setFont(font4);
        Line2Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Num, 4, 0, 1, 1);

        Line1Class = new QLabel(gridLayoutWidget);
        Line1Class->setObjectName(QStringLiteral("Line1Class"));
        sizePolicy.setHeightForWidth(Line1Class->sizePolicy().hasHeightForWidth());
        Line1Class->setSizePolicy(sizePolicy);
        Line1Class->setMinimumSize(QSize(0, 100));
        Line1Class->setMaximumSize(QSize(16777212, 100));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Class->setPalette(palette30);
        Line1Class->setFont(font2);
        Line1Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Class, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 4, 1, 1);

        Line5Name_2 = new QLabel(ScreenWindow);
        Line5Name_2->setObjectName(QStringLiteral("Line5Name_2"));
        Line5Name_2->setGeometry(QRect(1304, 630, 164, 78));
        sizePolicy.setHeightForWidth(Line5Name_2->sizePolicy().hasHeightForWidth());
        Line5Name_2->setSizePolicy(sizePolicy);
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Name_2->setPalette(palette31);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(26);
        Line5Name_2->setFont(font5);
        Line5Name_2->setAlignment(Qt::AlignCenter);
        Line5Rank_2 = new QLabel(ScreenWindow);
        Line5Rank_2->setObjectName(QStringLiteral("Line5Rank_2"));
        Line5Rank_2->setGeometry(QRect(1825, 630, 164, 78));
        sizePolicy.setHeightForWidth(Line5Rank_2->sizePolicy().hasHeightForWidth());
        Line5Rank_2->setSizePolicy(sizePolicy);
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Rank_2->setPalette(palette32);
        Line5Rank_2->setFont(font5);
        Line5Rank_2->setAlignment(Qt::AlignCenter);
        Line5Score_2 = new QLabel(ScreenWindow);
        Line5Score_2->setObjectName(QStringLiteral("Line5Score_2"));
        Line5Score_2->setGeometry(QRect(1651, 630, 164, 78));
        sizePolicy.setHeightForWidth(Line5Score_2->sizePolicy().hasHeightForWidth());
        Line5Score_2->setSizePolicy(sizePolicy);
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Score_2->setPalette(palette33);
        Line5Score_2->setFont(font5);
        Line5Score_2->setAlignment(Qt::AlignCenter);
        Line5Team_2 = new QLabel(ScreenWindow);
        Line5Team_2->setObjectName(QStringLiteral("Line5Team_2"));
        Line5Team_2->setGeometry(QRect(1478, 630, 163, 78));
        sizePolicy.setHeightForWidth(Line5Team_2->sizePolicy().hasHeightForWidth());
        Line5Team_2->setSizePolicy(sizePolicy);
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Team_2->setPalette(palette34);
        Line5Team_2->setFont(font5);
        Line5Team_2->setAlignment(Qt::AlignCenter);
        bgi = new QLabel(ScreenWindow);
        bgi->setObjectName(QStringLiteral("bgi"));
        bgi->setGeometry(QRect(0, 0, 1258, 674));
        bgi->setMinimumSize(QSize(1258, 674));
        bgi->setMaximumSize(QSize(1258, 674));
        bgi->raise();
        CompetitionName->raise();
        gridLayoutWidget->raise();
        Line5Name_2->raise();
        Line5Rank_2->raise();
        Line5Score_2->raise();
        Line5Team_2->raise();

        retranslateUi(ScreenWindow);

        QMetaObject::connectSlotsByName(ScreenWindow);
    } // setupUi

    void retranslateUi(QWidget *ScreenWindow)
    {
        ScreenWindow->setWindowTitle(QApplication::translate("ScreenWindow", "ScreenWindow", Q_NULLPTR));
        CompetitionName->setText(QString());
        Line1Name->setText(QString());
        Line3Team->setText(QString());
        label_10->setText(QApplication::translate("ScreenWindow", "\351\200\211\346\211\213\345\247\223\345\220\215", Q_NULLPTR));
        label_11->setText(QApplication::translate("ScreenWindow", "\344\273\243\350\241\250\351\230\237\344\274\215", Q_NULLPTR));
        Line0Team->setText(QString());
        Line1Grade->setText(QString());
        Line0Num->setText(QApplication::translate("ScreenWindow", "6", Q_NULLPTR));
        Line3Name->setText(QString());
        Line1Num->setText(QApplication::translate("ScreenWindow", "7", Q_NULLPTR));
        Line0Rank->setText(QString());
        Line3Class->setText(QString());
        label_4->setText(QApplication::translate("ScreenWindow", "\351\201\223\346\254\241", Q_NULLPTR));
        Line2Rank->setText(QString());
        Line2Class->setText(QString());
        label_16->setText(QApplication::translate("ScreenWindow", "\347\273\204\345\210\253", Q_NULLPTR));
        Line1Rank->setText(QString());
        Line3Num->setText(QApplication::translate("ScreenWindow", "9", Q_NULLPTR));
        Line0Class->setText(QString());
        Line2Name->setText(QString());
        Line2Grade->setText(QString());
        Line3Rank->setText(QString());
        Line2Team->setText(QString());
        label_13->setText(QApplication::translate("ScreenWindow", "\351\200\211\346\211\213\345\220\215\346\254\241", Q_NULLPTR));
        Line1Team->setText(QString());
        Line3Grade->setText(QString());
        Line0Name->setText(QString());
        Line0Grade->setText(QString());
        label_12->setText(QApplication::translate("ScreenWindow", "\351\200\211\346\211\213\346\210\220\347\273\251", Q_NULLPTR));
        Line2Num->setText(QApplication::translate("ScreenWindow", "8", Q_NULLPTR));
        Line1Class->setText(QString());
        Line5Name_2->setText(QString());
        Line5Rank_2->setText(QString());
        Line5Score_2->setText(QString());
        Line5Team_2->setText(QString());
        bgi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScreenWindow: public Ui_ScreenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENWINDOW_H
