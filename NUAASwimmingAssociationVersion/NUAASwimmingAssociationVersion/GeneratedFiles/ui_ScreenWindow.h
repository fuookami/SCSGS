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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenWindow
{
public:
    QLabel *CompetitionName;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *Line1Num;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *Line3Team;
    QLabel *Line1Team;
    QLabel *Line1Name;
    QLabel *label_12;
    QLabel *Line1Rank;
    QLabel *Line3Num;
    QLabel *Line3Grade;
    QLabel *Line7Grade;
    QLabel *Line4Num;
    QLabel *Line4Grade;
    QLabel *Line2Grade;
    QLabel *Line3Name;
    QLabel *label_4;
    QLabel *Line8Name;
    QLabel *Line7Num;
    QLabel *Line4Rank;
    QLabel *Line6Name;
    QLabel *Line8Rank;
    QLabel *Line2Team;
    QLabel *Line4Name;
    QLabel *Line5Team;
    QLabel *Line6Team;
    QLabel *Line6Rank;
    QLabel *label_13;
    QLabel *Line6Grade;
    QLabel *Line8Num;
    QLabel *Line5Num;
    QLabel *Line5Name;
    QLabel *Line2Rank;
    QLabel *Line7Team;
    QLabel *Line8Team;
    QLabel *Line4Team;
    QLabel *Line2Name;
    QLabel *Line5Rank;
    QLabel *Line1Grade;
    QLabel *Line3Rank;
    QLabel *Line2Num;
    QLabel *Line6Num;
    QLabel *Line7Name;
    QLabel *Line4Class;
    QLabel *Line8Grade;
    QLabel *label_16;
    QLabel *Line3Class;
    QLabel *Line2Class;
    QLabel *Line7Class;
    QLabel *Line6Class;
    QLabel *Line8Class;
    QLabel *Line1Class;
    QLabel *Line7Rank;
    QLabel *Line5Class;
    QLabel *Line5Grade;
    QLabel *Line0Num;
    QLabel *Line0Team;
    QLabel *Line0Name;
    QLabel *Line0Grade;
    QLabel *Line0Class;
    QLabel *Line0Rank;
    QLabel *Line9Num;
    QLabel *Line9Name;
    QLabel *Line9Team;
    QLabel *Line9Class;
    QLabel *Line9Grade;
    QLabel *Line9Rank;
    QLabel *label_14;
    QLabel *RegistrationCompetionName;
    QLabel *label_3;
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
        CompetitionName->setGeometry(QRect(520, 60, 691, 41));
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
        font.setPointSize(26);
        CompetitionName->setFont(font);
        gridLayoutWidget = new QWidget(ScreenWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(320, 110, 911, 551));
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(26);
        gridLayoutWidget->setFont(font1);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Line1Num = new QLabel(gridLayoutWidget);
        Line1Num->setObjectName(QStringLiteral("Line1Num"));
        sizePolicy.setHeightForWidth(Line1Num->sizePolicy().hasHeightForWidth());
        Line1Num->setSizePolicy(sizePolicy);
        Line1Num->setMinimumSize(QSize(0, 38));
        Line1Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Num->setPalette(palette1);
        Line1Num->setFont(font);
        Line1Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Num, 2, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(0, 50));
        label_11->setMaximumSize(QSize(16777215, 50));
        QPalette palette2;
        QBrush brush3(QColor(102, 204, 183, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_11->setPalette(palette2);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(0, 50));
        label_10->setMaximumSize(QSize(16777215, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_10->setPalette(palette3);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        Line3Team = new QLabel(gridLayoutWidget);
        Line3Team->setObjectName(QStringLiteral("Line3Team"));
        sizePolicy.setHeightForWidth(Line3Team->sizePolicy().hasHeightForWidth());
        Line3Team->setSizePolicy(sizePolicy);
        Line3Team->setMinimumSize(QSize(0, 38));
        Line3Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette4;
        QBrush brush4(QColor(246, 193, 45, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Team->setPalette(palette4);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(26);
        Line3Team->setFont(font2);
        Line3Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Team, 4, 2, 1, 1);

        Line1Team = new QLabel(gridLayoutWidget);
        Line1Team->setObjectName(QStringLiteral("Line1Team"));
        sizePolicy.setHeightForWidth(Line1Team->sizePolicy().hasHeightForWidth());
        Line1Team->setSizePolicy(sizePolicy);
        Line1Team->setMinimumSize(QSize(0, 38));
        Line1Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Team->setPalette(palette5);
        Line1Team->setFont(font2);
        Line1Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Team, 2, 2, 1, 1);

        Line1Name = new QLabel(gridLayoutWidget);
        Line1Name->setObjectName(QStringLiteral("Line1Name"));
        sizePolicy.setHeightForWidth(Line1Name->sizePolicy().hasHeightForWidth());
        Line1Name->setSizePolicy(sizePolicy);
        Line1Name->setMinimumSize(QSize(0, 38));
        Line1Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Name->setPalette(palette6);
        Line1Name->setFont(font2);
        Line1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Name, 2, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(0, 50));
        label_12->setMaximumSize(QSize(16777215, 50));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_12->setPalette(palette7);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 4, 1, 1);

        Line1Rank = new QLabel(gridLayoutWidget);
        Line1Rank->setObjectName(QStringLiteral("Line1Rank"));
        sizePolicy.setHeightForWidth(Line1Rank->sizePolicy().hasHeightForWidth());
        Line1Rank->setSizePolicy(sizePolicy);
        Line1Rank->setMinimumSize(QSize(0, 38));
        Line1Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Rank->setPalette(palette8);
        Line1Rank->setFont(font2);
        Line1Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Rank, 2, 5, 1, 1);

        Line3Num = new QLabel(gridLayoutWidget);
        Line3Num->setObjectName(QStringLiteral("Line3Num"));
        sizePolicy.setHeightForWidth(Line3Num->sizePolicy().hasHeightForWidth());
        Line3Num->setSizePolicy(sizePolicy);
        Line3Num->setMinimumSize(QSize(0, 38));
        Line3Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Num->setPalette(palette9);
        Line3Num->setFont(font);
        Line3Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Num, 4, 0, 1, 1);

        Line3Grade = new QLabel(gridLayoutWidget);
        Line3Grade->setObjectName(QStringLiteral("Line3Grade"));
        sizePolicy.setHeightForWidth(Line3Grade->sizePolicy().hasHeightForWidth());
        Line3Grade->setSizePolicy(sizePolicy);
        Line3Grade->setMinimumSize(QSize(0, 38));
        Line3Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Grade->setPalette(palette10);
        Line3Grade->setFont(font2);
        Line3Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Grade, 4, 4, 1, 1);

        Line7Grade = new QLabel(gridLayoutWidget);
        Line7Grade->setObjectName(QStringLiteral("Line7Grade"));
        sizePolicy.setHeightForWidth(Line7Grade->sizePolicy().hasHeightForWidth());
        Line7Grade->setSizePolicy(sizePolicy);
        Line7Grade->setMinimumSize(QSize(0, 38));
        Line7Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line7Grade->setPalette(palette11);
        Line7Grade->setFont(font2);
        Line7Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Grade, 8, 4, 1, 1);

        Line4Num = new QLabel(gridLayoutWidget);
        Line4Num->setObjectName(QStringLiteral("Line4Num"));
        sizePolicy.setHeightForWidth(Line4Num->sizePolicy().hasHeightForWidth());
        Line4Num->setSizePolicy(sizePolicy);
        Line4Num->setMinimumSize(QSize(0, 38));
        Line4Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line4Num->setPalette(palette12);
        Line4Num->setFont(font);
        Line4Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Num, 5, 0, 1, 1);

        Line4Grade = new QLabel(gridLayoutWidget);
        Line4Grade->setObjectName(QStringLiteral("Line4Grade"));
        sizePolicy.setHeightForWidth(Line4Grade->sizePolicy().hasHeightForWidth());
        Line4Grade->setSizePolicy(sizePolicy);
        Line4Grade->setMinimumSize(QSize(0, 38));
        Line4Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line4Grade->setPalette(palette13);
        Line4Grade->setFont(font2);
        Line4Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Grade, 5, 4, 1, 1);

        Line2Grade = new QLabel(gridLayoutWidget);
        Line2Grade->setObjectName(QStringLiteral("Line2Grade"));
        sizePolicy.setHeightForWidth(Line2Grade->sizePolicy().hasHeightForWidth());
        Line2Grade->setSizePolicy(sizePolicy);
        Line2Grade->setMinimumSize(QSize(0, 38));
        Line2Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Grade->setPalette(palette14);
        Line2Grade->setFont(font2);
        Line2Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Grade, 3, 4, 1, 1);

        Line3Name = new QLabel(gridLayoutWidget);
        Line3Name->setObjectName(QStringLiteral("Line3Name"));
        sizePolicy.setHeightForWidth(Line3Name->sizePolicy().hasHeightForWidth());
        Line3Name->setSizePolicy(sizePolicy);
        Line3Name->setMinimumSize(QSize(0, 38));
        Line3Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Name->setPalette(palette15);
        Line3Name->setFont(font2);
        Line3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Name, 4, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 50));
        label_4->setMaximumSize(QSize(16777215, 50));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette16);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        Line8Name = new QLabel(gridLayoutWidget);
        Line8Name->setObjectName(QStringLiteral("Line8Name"));
        sizePolicy.setHeightForWidth(Line8Name->sizePolicy().hasHeightForWidth());
        Line8Name->setSizePolicy(sizePolicy);
        Line8Name->setMinimumSize(QSize(0, 38));
        Line8Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line8Name->setPalette(palette17);
        Line8Name->setFont(font2);
        Line8Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Name, 9, 1, 1, 1);

        Line7Num = new QLabel(gridLayoutWidget);
        Line7Num->setObjectName(QStringLiteral("Line7Num"));
        sizePolicy.setHeightForWidth(Line7Num->sizePolicy().hasHeightForWidth());
        Line7Num->setSizePolicy(sizePolicy);
        Line7Num->setMinimumSize(QSize(0, 38));
        Line7Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line7Num->setPalette(palette18);
        Line7Num->setFont(font);
        Line7Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Num, 8, 0, 1, 1);

        Line4Rank = new QLabel(gridLayoutWidget);
        Line4Rank->setObjectName(QStringLiteral("Line4Rank"));
        sizePolicy.setHeightForWidth(Line4Rank->sizePolicy().hasHeightForWidth());
        Line4Rank->setSizePolicy(sizePolicy);
        Line4Rank->setMinimumSize(QSize(0, 38));
        Line4Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line4Rank->setPalette(palette19);
        Line4Rank->setFont(font2);
        Line4Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Rank, 5, 5, 1, 1);

        Line6Name = new QLabel(gridLayoutWidget);
        Line6Name->setObjectName(QStringLiteral("Line6Name"));
        sizePolicy.setHeightForWidth(Line6Name->sizePolicy().hasHeightForWidth());
        Line6Name->setSizePolicy(sizePolicy);
        Line6Name->setMinimumSize(QSize(0, 38));
        Line6Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line6Name->setPalette(palette20);
        Line6Name->setFont(font2);
        Line6Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Name, 7, 1, 1, 1);

        Line8Rank = new QLabel(gridLayoutWidget);
        Line8Rank->setObjectName(QStringLiteral("Line8Rank"));
        sizePolicy.setHeightForWidth(Line8Rank->sizePolicy().hasHeightForWidth());
        Line8Rank->setSizePolicy(sizePolicy);
        Line8Rank->setMinimumSize(QSize(0, 38));
        Line8Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line8Rank->setPalette(palette21);
        Line8Rank->setFont(font2);
        Line8Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Rank, 9, 5, 1, 1);

        Line2Team = new QLabel(gridLayoutWidget);
        Line2Team->setObjectName(QStringLiteral("Line2Team"));
        sizePolicy.setHeightForWidth(Line2Team->sizePolicy().hasHeightForWidth());
        Line2Team->setSizePolicy(sizePolicy);
        Line2Team->setMinimumSize(QSize(0, 38));
        Line2Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Team->setPalette(palette22);
        Line2Team->setFont(font2);
        Line2Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Team, 3, 2, 1, 1);

        Line4Name = new QLabel(gridLayoutWidget);
        Line4Name->setObjectName(QStringLiteral("Line4Name"));
        sizePolicy.setHeightForWidth(Line4Name->sizePolicy().hasHeightForWidth());
        Line4Name->setSizePolicy(sizePolicy);
        Line4Name->setMinimumSize(QSize(0, 38));
        Line4Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line4Name->setPalette(palette23);
        Line4Name->setFont(font2);
        Line4Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Name, 5, 1, 1, 1);

        Line5Team = new QLabel(gridLayoutWidget);
        Line5Team->setObjectName(QStringLiteral("Line5Team"));
        sizePolicy.setHeightForWidth(Line5Team->sizePolicy().hasHeightForWidth());
        Line5Team->setSizePolicy(sizePolicy);
        Line5Team->setMinimumSize(QSize(0, 38));
        Line5Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Team->setPalette(palette24);
        Line5Team->setFont(font2);
        Line5Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Team, 6, 2, 1, 1);

        Line6Team = new QLabel(gridLayoutWidget);
        Line6Team->setObjectName(QStringLiteral("Line6Team"));
        sizePolicy.setHeightForWidth(Line6Team->sizePolicy().hasHeightForWidth());
        Line6Team->setSizePolicy(sizePolicy);
        Line6Team->setMinimumSize(QSize(0, 38));
        Line6Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line6Team->setPalette(palette25);
        Line6Team->setFont(font2);
        Line6Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Team, 7, 2, 1, 1);

        Line6Rank = new QLabel(gridLayoutWidget);
        Line6Rank->setObjectName(QStringLiteral("Line6Rank"));
        sizePolicy.setHeightForWidth(Line6Rank->sizePolicy().hasHeightForWidth());
        Line6Rank->setSizePolicy(sizePolicy);
        Line6Rank->setMinimumSize(QSize(0, 38));
        Line6Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line6Rank->setPalette(palette26);
        Line6Rank->setFont(font2);
        Line6Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Rank, 7, 5, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(0, 50));
        label_13->setMaximumSize(QSize(16777215, 50));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_13->setPalette(palette27);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 0, 5, 1, 1);

        Line6Grade = new QLabel(gridLayoutWidget);
        Line6Grade->setObjectName(QStringLiteral("Line6Grade"));
        sizePolicy.setHeightForWidth(Line6Grade->sizePolicy().hasHeightForWidth());
        Line6Grade->setSizePolicy(sizePolicy);
        Line6Grade->setMinimumSize(QSize(0, 38));
        Line6Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line6Grade->setPalette(palette28);
        Line6Grade->setFont(font2);
        Line6Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Grade, 7, 4, 1, 1);

        Line8Num = new QLabel(gridLayoutWidget);
        Line8Num->setObjectName(QStringLiteral("Line8Num"));
        sizePolicy.setHeightForWidth(Line8Num->sizePolicy().hasHeightForWidth());
        Line8Num->setSizePolicy(sizePolicy);
        Line8Num->setMinimumSize(QSize(0, 38));
        Line8Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line8Num->setPalette(palette29);
        Line8Num->setFont(font);
        Line8Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Num, 9, 0, 1, 1);

        Line5Num = new QLabel(gridLayoutWidget);
        Line5Num->setObjectName(QStringLiteral("Line5Num"));
        sizePolicy.setHeightForWidth(Line5Num->sizePolicy().hasHeightForWidth());
        Line5Num->setSizePolicy(sizePolicy);
        Line5Num->setMinimumSize(QSize(0, 38));
        Line5Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Num->setPalette(palette30);
        Line5Num->setFont(font);
        Line5Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Num, 6, 0, 1, 1);

        Line5Name = new QLabel(gridLayoutWidget);
        Line5Name->setObjectName(QStringLiteral("Line5Name"));
        sizePolicy.setHeightForWidth(Line5Name->sizePolicy().hasHeightForWidth());
        Line5Name->setSizePolicy(sizePolicy);
        Line5Name->setMinimumSize(QSize(0, 38));
        Line5Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Name->setPalette(palette31);
        Line5Name->setFont(font2);
        Line5Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Name, 6, 1, 1, 1);

        Line2Rank = new QLabel(gridLayoutWidget);
        Line2Rank->setObjectName(QStringLiteral("Line2Rank"));
        sizePolicy.setHeightForWidth(Line2Rank->sizePolicy().hasHeightForWidth());
        Line2Rank->setSizePolicy(sizePolicy);
        Line2Rank->setMinimumSize(QSize(0, 38));
        Line2Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Rank->setPalette(palette32);
        Line2Rank->setFont(font2);
        Line2Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Rank, 3, 5, 1, 1);

        Line7Team = new QLabel(gridLayoutWidget);
        Line7Team->setObjectName(QStringLiteral("Line7Team"));
        sizePolicy.setHeightForWidth(Line7Team->sizePolicy().hasHeightForWidth());
        Line7Team->setSizePolicy(sizePolicy);
        Line7Team->setMinimumSize(QSize(0, 38));
        Line7Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line7Team->setPalette(palette33);
        Line7Team->setFont(font2);
        Line7Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Team, 8, 2, 1, 1);

        Line8Team = new QLabel(gridLayoutWidget);
        Line8Team->setObjectName(QStringLiteral("Line8Team"));
        sizePolicy.setHeightForWidth(Line8Team->sizePolicy().hasHeightForWidth());
        Line8Team->setSizePolicy(sizePolicy);
        Line8Team->setMinimumSize(QSize(0, 38));
        Line8Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line8Team->setPalette(palette34);
        Line8Team->setFont(font2);
        Line8Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Team, 9, 2, 1, 1);

        Line4Team = new QLabel(gridLayoutWidget);
        Line4Team->setObjectName(QStringLiteral("Line4Team"));
        sizePolicy.setHeightForWidth(Line4Team->sizePolicy().hasHeightForWidth());
        Line4Team->setSizePolicy(sizePolicy);
        Line4Team->setMinimumSize(QSize(0, 38));
        Line4Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette35.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette35.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line4Team->setPalette(palette35);
        Line4Team->setFont(font2);
        Line4Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Team, 5, 2, 1, 1);

        Line2Name = new QLabel(gridLayoutWidget);
        Line2Name->setObjectName(QStringLiteral("Line2Name"));
        sizePolicy.setHeightForWidth(Line2Name->sizePolicy().hasHeightForWidth());
        Line2Name->setSizePolicy(sizePolicy);
        Line2Name->setMinimumSize(QSize(0, 38));
        Line2Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Name->setPalette(palette36);
        Line2Name->setFont(font2);
        Line2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Name, 3, 1, 1, 1);

        Line5Rank = new QLabel(gridLayoutWidget);
        Line5Rank->setObjectName(QStringLiteral("Line5Rank"));
        sizePolicy.setHeightForWidth(Line5Rank->sizePolicy().hasHeightForWidth());
        Line5Rank->setSizePolicy(sizePolicy);
        Line5Rank->setMinimumSize(QSize(0, 38));
        Line5Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Rank->setPalette(palette37);
        Line5Rank->setFont(font2);
        Line5Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Rank, 6, 5, 1, 1);

        Line1Grade = new QLabel(gridLayoutWidget);
        Line1Grade->setObjectName(QStringLiteral("Line1Grade"));
        sizePolicy.setHeightForWidth(Line1Grade->sizePolicy().hasHeightForWidth());
        Line1Grade->setSizePolicy(sizePolicy);
        Line1Grade->setMinimumSize(QSize(0, 38));
        Line1Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Grade->setPalette(palette38);
        Line1Grade->setFont(font2);
        Line1Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Grade, 2, 4, 1, 1);

        Line3Rank = new QLabel(gridLayoutWidget);
        Line3Rank->setObjectName(QStringLiteral("Line3Rank"));
        sizePolicy.setHeightForWidth(Line3Rank->sizePolicy().hasHeightForWidth());
        Line3Rank->setSizePolicy(sizePolicy);
        Line3Rank->setMinimumSize(QSize(0, 38));
        Line3Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Rank->setPalette(palette39);
        Line3Rank->setFont(font2);
        Line3Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Rank, 4, 5, 1, 1);

        Line2Num = new QLabel(gridLayoutWidget);
        Line2Num->setObjectName(QStringLiteral("Line2Num"));
        sizePolicy.setHeightForWidth(Line2Num->sizePolicy().hasHeightForWidth());
        Line2Num->setSizePolicy(sizePolicy);
        Line2Num->setMinimumSize(QSize(0, 38));
        Line2Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette40.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette40.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Num->setPalette(palette40);
        Line2Num->setFont(font);
        Line2Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Num, 3, 0, 1, 1);

        Line6Num = new QLabel(gridLayoutWidget);
        Line6Num->setObjectName(QStringLiteral("Line6Num"));
        sizePolicy.setHeightForWidth(Line6Num->sizePolicy().hasHeightForWidth());
        Line6Num->setSizePolicy(sizePolicy);
        Line6Num->setMinimumSize(QSize(0, 38));
        Line6Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette41.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette41.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line6Num->setPalette(palette41);
        Line6Num->setFont(font);
        Line6Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Num, 7, 0, 1, 1);

        Line7Name = new QLabel(gridLayoutWidget);
        Line7Name->setObjectName(QStringLiteral("Line7Name"));
        sizePolicy.setHeightForWidth(Line7Name->sizePolicy().hasHeightForWidth());
        Line7Name->setSizePolicy(sizePolicy);
        Line7Name->setMinimumSize(QSize(0, 38));
        Line7Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line7Name->setPalette(palette42);
        Line7Name->setFont(font2);
        Line7Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Name, 8, 1, 1, 1);

        Line4Class = new QLabel(gridLayoutWidget);
        Line4Class->setObjectName(QStringLiteral("Line4Class"));
        sizePolicy.setHeightForWidth(Line4Class->sizePolicy().hasHeightForWidth());
        Line4Class->setSizePolicy(sizePolicy);
        Line4Class->setMinimumSize(QSize(0, 38));
        Line4Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette43.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette43.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line4Class->setPalette(palette43);
        Line4Class->setFont(font2);
        Line4Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line4Class, 5, 3, 1, 1);

        Line8Grade = new QLabel(gridLayoutWidget);
        Line8Grade->setObjectName(QStringLiteral("Line8Grade"));
        sizePolicy.setHeightForWidth(Line8Grade->sizePolicy().hasHeightForWidth());
        Line8Grade->setSizePolicy(sizePolicy);
        Line8Grade->setMinimumSize(QSize(0, 38));
        Line8Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line8Grade->setPalette(palette44);
        Line8Grade->setFont(font2);
        Line8Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Grade, 9, 4, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(0, 50));
        label_16->setMaximumSize(QSize(16777215, 50));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette45.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_16->setPalette(palette45);
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 0, 3, 1, 1);

        Line3Class = new QLabel(gridLayoutWidget);
        Line3Class->setObjectName(QStringLiteral("Line3Class"));
        sizePolicy.setHeightForWidth(Line3Class->sizePolicy().hasHeightForWidth());
        Line3Class->setSizePolicy(sizePolicy);
        Line3Class->setMinimumSize(QSize(0, 38));
        Line3Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette46.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette46.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line3Class->setPalette(palette46);
        Line3Class->setFont(font2);
        Line3Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line3Class, 4, 3, 1, 1);

        Line2Class = new QLabel(gridLayoutWidget);
        Line2Class->setObjectName(QStringLiteral("Line2Class"));
        sizePolicy.setHeightForWidth(Line2Class->sizePolicy().hasHeightForWidth());
        Line2Class->setSizePolicy(sizePolicy);
        Line2Class->setMinimumSize(QSize(0, 38));
        Line2Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette47.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette47.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line2Class->setPalette(palette47);
        Line2Class->setFont(font2);
        Line2Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line2Class, 3, 3, 1, 1);

        Line7Class = new QLabel(gridLayoutWidget);
        Line7Class->setObjectName(QStringLiteral("Line7Class"));
        sizePolicy.setHeightForWidth(Line7Class->sizePolicy().hasHeightForWidth());
        Line7Class->setSizePolicy(sizePolicy);
        Line7Class->setMinimumSize(QSize(0, 38));
        Line7Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette48.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette48.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line7Class->setPalette(palette48);
        Line7Class->setFont(font2);
        Line7Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Class, 8, 3, 1, 1);

        Line6Class = new QLabel(gridLayoutWidget);
        Line6Class->setObjectName(QStringLiteral("Line6Class"));
        sizePolicy.setHeightForWidth(Line6Class->sizePolicy().hasHeightForWidth());
        Line6Class->setSizePolicy(sizePolicy);
        Line6Class->setMinimumSize(QSize(0, 38));
        Line6Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette49.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette49.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line6Class->setPalette(palette49);
        Line6Class->setFont(font2);
        Line6Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line6Class, 7, 3, 1, 1);

        Line8Class = new QLabel(gridLayoutWidget);
        Line8Class->setObjectName(QStringLiteral("Line8Class"));
        sizePolicy.setHeightForWidth(Line8Class->sizePolicy().hasHeightForWidth());
        Line8Class->setSizePolicy(sizePolicy);
        Line8Class->setMinimumSize(QSize(0, 38));
        Line8Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette50.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette50.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line8Class->setPalette(palette50);
        Line8Class->setFont(font2);
        Line8Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line8Class, 9, 3, 1, 1);

        Line1Class = new QLabel(gridLayoutWidget);
        Line1Class->setObjectName(QStringLiteral("Line1Class"));
        sizePolicy.setHeightForWidth(Line1Class->sizePolicy().hasHeightForWidth());
        Line1Class->setSizePolicy(sizePolicy);
        Line1Class->setMinimumSize(QSize(0, 38));
        Line1Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette51.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette51.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line1Class->setPalette(palette51);
        Line1Class->setFont(font2);
        Line1Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line1Class, 2, 3, 1, 1);

        Line7Rank = new QLabel(gridLayoutWidget);
        Line7Rank->setObjectName(QStringLiteral("Line7Rank"));
        sizePolicy.setHeightForWidth(Line7Rank->sizePolicy().hasHeightForWidth());
        Line7Rank->setSizePolicy(sizePolicy);
        Line7Rank->setMinimumSize(QSize(0, 38));
        Line7Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line7Rank->setPalette(palette52);
        Line7Rank->setFont(font2);
        Line7Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line7Rank, 8, 5, 1, 1);

        Line5Class = new QLabel(gridLayoutWidget);
        Line5Class->setObjectName(QStringLiteral("Line5Class"));
        sizePolicy.setHeightForWidth(Line5Class->sizePolicy().hasHeightForWidth());
        Line5Class->setSizePolicy(sizePolicy);
        Line5Class->setMinimumSize(QSize(0, 38));
        Line5Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette53.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette53.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Class->setPalette(palette53);
        Line5Class->setFont(font2);
        Line5Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Class, 6, 3, 1, 1);

        Line5Grade = new QLabel(gridLayoutWidget);
        Line5Grade->setObjectName(QStringLiteral("Line5Grade"));
        sizePolicy.setHeightForWidth(Line5Grade->sizePolicy().hasHeightForWidth());
        Line5Grade->setSizePolicy(sizePolicy);
        Line5Grade->setMinimumSize(QSize(0, 38));
        Line5Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette54.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Grade->setPalette(palette54);
        Line5Grade->setFont(font2);
        Line5Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line5Grade, 6, 4, 1, 1);

        Line0Num = new QLabel(gridLayoutWidget);
        Line0Num->setObjectName(QStringLiteral("Line0Num"));
        sizePolicy.setHeightForWidth(Line0Num->sizePolicy().hasHeightForWidth());
        Line0Num->setSizePolicy(sizePolicy);
        Line0Num->setMinimumSize(QSize(0, 38));
        Line0Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette55.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette55.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Num->setPalette(palette55);
        Line0Num->setFont(font);
        Line0Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Num, 1, 0, 1, 1);

        Line0Team = new QLabel(gridLayoutWidget);
        Line0Team->setObjectName(QStringLiteral("Line0Team"));
        sizePolicy.setHeightForWidth(Line0Team->sizePolicy().hasHeightForWidth());
        Line0Team->setSizePolicy(sizePolicy);
        Line0Team->setMinimumSize(QSize(0, 38));
        Line0Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette56.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Team->setPalette(palette56);
        Line0Team->setFont(font2);
        Line0Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Team, 1, 2, 1, 1);

        Line0Name = new QLabel(gridLayoutWidget);
        Line0Name->setObjectName(QStringLiteral("Line0Name"));
        sizePolicy.setHeightForWidth(Line0Name->sizePolicy().hasHeightForWidth());
        Line0Name->setSizePolicy(sizePolicy);
        Line0Name->setMinimumSize(QSize(0, 38));
        Line0Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette57.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Name->setPalette(palette57);
        Line0Name->setFont(font2);
        Line0Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Name, 1, 1, 1, 1);

        Line0Grade = new QLabel(gridLayoutWidget);
        Line0Grade->setObjectName(QStringLiteral("Line0Grade"));
        sizePolicy.setHeightForWidth(Line0Grade->sizePolicy().hasHeightForWidth());
        Line0Grade->setSizePolicy(sizePolicy);
        Line0Grade->setMinimumSize(QSize(0, 38));
        Line0Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette58.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Grade->setPalette(palette58);
        Line0Grade->setFont(font2);
        Line0Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Grade, 1, 4, 1, 1);

        Line0Class = new QLabel(gridLayoutWidget);
        Line0Class->setObjectName(QStringLiteral("Line0Class"));
        sizePolicy.setHeightForWidth(Line0Class->sizePolicy().hasHeightForWidth());
        Line0Class->setSizePolicy(sizePolicy);
        Line0Class->setMinimumSize(QSize(0, 38));
        Line0Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette59;
        palette59.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette59.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette59.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Class->setPalette(palette59);
        Line0Class->setFont(font2);
        Line0Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Class, 1, 3, 1, 1);

        Line0Rank = new QLabel(gridLayoutWidget);
        Line0Rank->setObjectName(QStringLiteral("Line0Rank"));
        sizePolicy.setHeightForWidth(Line0Rank->sizePolicy().hasHeightForWidth());
        Line0Rank->setSizePolicy(sizePolicy);
        Line0Rank->setMinimumSize(QSize(0, 38));
        Line0Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette60;
        palette60.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette60.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette60.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line0Rank->setPalette(palette60);
        Line0Rank->setFont(font2);
        Line0Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line0Rank, 1, 5, 1, 1);

        Line9Num = new QLabel(gridLayoutWidget);
        Line9Num->setObjectName(QStringLiteral("Line9Num"));
        sizePolicy.setHeightForWidth(Line9Num->sizePolicy().hasHeightForWidth());
        Line9Num->setSizePolicy(sizePolicy);
        Line9Num->setMinimumSize(QSize(0, 38));
        Line9Num->setMaximumSize(QSize(16777215, 38));
        QPalette palette61;
        palette61.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette61.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette61.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line9Num->setPalette(palette61);
        Line9Num->setFont(font);
        Line9Num->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Num, 10, 0, 1, 1);

        Line9Name = new QLabel(gridLayoutWidget);
        Line9Name->setObjectName(QStringLiteral("Line9Name"));
        sizePolicy.setHeightForWidth(Line9Name->sizePolicy().hasHeightForWidth());
        Line9Name->setSizePolicy(sizePolicy);
        Line9Name->setMinimumSize(QSize(0, 38));
        Line9Name->setMaximumSize(QSize(16777215, 38));
        QPalette palette62;
        palette62.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette62.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line9Name->setPalette(palette62);
        Line9Name->setFont(font2);
        Line9Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Name, 10, 1, 1, 1);

        Line9Team = new QLabel(gridLayoutWidget);
        Line9Team->setObjectName(QStringLiteral("Line9Team"));
        sizePolicy.setHeightForWidth(Line9Team->sizePolicy().hasHeightForWidth());
        Line9Team->setSizePolicy(sizePolicy);
        Line9Team->setMinimumSize(QSize(0, 38));
        Line9Team->setMaximumSize(QSize(16777215, 38));
        QPalette palette63;
        palette63.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette63.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line9Team->setPalette(palette63);
        Line9Team->setFont(font2);
        Line9Team->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Team, 10, 2, 1, 1);

        Line9Class = new QLabel(gridLayoutWidget);
        Line9Class->setObjectName(QStringLiteral("Line9Class"));
        sizePolicy.setHeightForWidth(Line9Class->sizePolicy().hasHeightForWidth());
        Line9Class->setSizePolicy(sizePolicy);
        Line9Class->setMinimumSize(QSize(0, 38));
        Line9Class->setMaximumSize(QSize(16777215, 38));
        QPalette palette64;
        palette64.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette64.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette64.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line9Class->setPalette(palette64);
        Line9Class->setFont(font2);
        Line9Class->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Class, 10, 3, 1, 1);

        Line9Grade = new QLabel(gridLayoutWidget);
        Line9Grade->setObjectName(QStringLiteral("Line9Grade"));
        sizePolicy.setHeightForWidth(Line9Grade->sizePolicy().hasHeightForWidth());
        Line9Grade->setSizePolicy(sizePolicy);
        Line9Grade->setMinimumSize(QSize(0, 38));
        Line9Grade->setMaximumSize(QSize(16777215, 38));
        QPalette palette65;
        palette65.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette65.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette65.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line9Grade->setPalette(palette65);
        Line9Grade->setFont(font2);
        Line9Grade->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Grade, 10, 4, 1, 1);

        Line9Rank = new QLabel(gridLayoutWidget);
        Line9Rank->setObjectName(QStringLiteral("Line9Rank"));
        sizePolicy.setHeightForWidth(Line9Rank->sizePolicy().hasHeightForWidth());
        Line9Rank->setSizePolicy(sizePolicy);
        Line9Rank->setMinimumSize(QSize(0, 38));
        Line9Rank->setMaximumSize(QSize(16777215, 38));
        QPalette palette66;
        palette66.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line9Rank->setPalette(palette66);
        Line9Rank->setFont(font2);
        Line9Rank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Line9Rank, 10, 5, 1, 1);

        label_14 = new QLabel(ScreenWindow);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(330, 60, 171, 41));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        QPalette palette67;
        palette67.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette67.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette67.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_14->setPalette(palette67);
        label_14->setFont(font);
        RegistrationCompetionName = new QLabel(ScreenWindow);
        RegistrationCompetionName->setObjectName(QStringLiteral("RegistrationCompetionName"));
        RegistrationCompetionName->setGeometry(QRect(520, 10, 691, 41));
        sizePolicy.setHeightForWidth(RegistrationCompetionName->sizePolicy().hasHeightForWidth());
        RegistrationCompetionName->setSizePolicy(sizePolicy);
        QPalette palette68;
        palette68.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        RegistrationCompetionName->setPalette(palette68);
        RegistrationCompetionName->setFont(font);
        label_3 = new QLabel(ScreenWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 10, 171, 41));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QPalette palette69;
        palette69.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette69.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette69.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette69);
        label_3->setFont(font);
        Line5Name_2 = new QLabel(ScreenWindow);
        Line5Name_2->setObjectName(QStringLiteral("Line5Name_2"));
        Line5Name_2->setGeometry(QRect(1304, 630, 164, 78));
        sizePolicy.setHeightForWidth(Line5Name_2->sizePolicy().hasHeightForWidth());
        Line5Name_2->setSizePolicy(sizePolicy);
        QPalette palette70;
        palette70.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette70.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette70.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Name_2->setPalette(palette70);
        Line5Name_2->setFont(font2);
        Line5Name_2->setAlignment(Qt::AlignCenter);
        Line5Rank_2 = new QLabel(ScreenWindow);
        Line5Rank_2->setObjectName(QStringLiteral("Line5Rank_2"));
        Line5Rank_2->setGeometry(QRect(1825, 630, 164, 78));
        sizePolicy.setHeightForWidth(Line5Rank_2->sizePolicy().hasHeightForWidth());
        Line5Rank_2->setSizePolicy(sizePolicy);
        QPalette palette71;
        palette71.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette71.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Rank_2->setPalette(palette71);
        Line5Rank_2->setFont(font2);
        Line5Rank_2->setAlignment(Qt::AlignCenter);
        Line5Score_2 = new QLabel(ScreenWindow);
        Line5Score_2->setObjectName(QStringLiteral("Line5Score_2"));
        Line5Score_2->setGeometry(QRect(1651, 630, 164, 78));
        sizePolicy.setHeightForWidth(Line5Score_2->sizePolicy().hasHeightForWidth());
        Line5Score_2->setSizePolicy(sizePolicy);
        QPalette palette72;
        palette72.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette72.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Score_2->setPalette(palette72);
        Line5Score_2->setFont(font2);
        Line5Score_2->setAlignment(Qt::AlignCenter);
        Line5Team_2 = new QLabel(ScreenWindow);
        Line5Team_2->setObjectName(QStringLiteral("Line5Team_2"));
        Line5Team_2->setGeometry(QRect(1478, 630, 163, 78));
        sizePolicy.setHeightForWidth(Line5Team_2->sizePolicy().hasHeightForWidth());
        Line5Team_2->setSizePolicy(sizePolicy);
        QPalette palette73;
        palette73.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette73.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette73.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Line5Team_2->setPalette(palette73);
        Line5Team_2->setFont(font2);
        Line5Team_2->setAlignment(Qt::AlignCenter);
        bgi = new QLabel(ScreenWindow);
        bgi->setObjectName(QStringLiteral("bgi"));
        bgi->setGeometry(QRect(0, 0, 1258, 674));
        bgi->setMinimumSize(QSize(1258, 674));
        bgi->setMaximumSize(QSize(1258, 674));
        bgi->raise();
        CompetitionName->raise();
        gridLayoutWidget->raise();
        label_14->raise();
        RegistrationCompetionName->raise();
        label_3->raise();
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
        Line1Num->setText(QApplication::translate("ScreenWindow", "1", Q_NULLPTR));
        label_11->setText(QApplication::translate("ScreenWindow", "\344\273\243\350\241\250\351\230\237\344\274\215", Q_NULLPTR));
        label_10->setText(QApplication::translate("ScreenWindow", "\351\200\211\346\211\213\345\247\223\345\220\215", Q_NULLPTR));
        Line3Team->setText(QString());
        Line1Team->setText(QString());
        Line1Name->setText(QString());
        label_12->setText(QApplication::translate("ScreenWindow", "\351\200\211\346\211\213\346\210\220\347\273\251", Q_NULLPTR));
        Line1Rank->setText(QString());
        Line3Num->setText(QApplication::translate("ScreenWindow", "3", Q_NULLPTR));
        Line3Grade->setText(QString());
        Line7Grade->setText(QString());
        Line4Num->setText(QApplication::translate("ScreenWindow", "4", Q_NULLPTR));
        Line4Grade->setText(QString());
        Line2Grade->setText(QString());
        Line3Name->setText(QString());
        label_4->setText(QApplication::translate("ScreenWindow", "\351\201\223\346\254\241", Q_NULLPTR));
        Line8Name->setText(QString());
        Line7Num->setText(QApplication::translate("ScreenWindow", "7", Q_NULLPTR));
        Line4Rank->setText(QString());
        Line6Name->setText(QString());
        Line8Rank->setText(QString());
        Line2Team->setText(QString());
        Line4Name->setText(QString());
        Line5Team->setText(QString());
        Line6Team->setText(QString());
        Line6Rank->setText(QString());
        label_13->setText(QApplication::translate("ScreenWindow", "\351\200\211\346\211\213\345\220\215\346\254\241", Q_NULLPTR));
        Line6Grade->setText(QString());
        Line8Num->setText(QApplication::translate("ScreenWindow", "8", Q_NULLPTR));
        Line5Num->setText(QApplication::translate("ScreenWindow", "5", Q_NULLPTR));
        Line5Name->setText(QString());
        Line2Rank->setText(QString());
        Line7Team->setText(QString());
        Line8Team->setText(QString());
        Line4Team->setText(QString());
        Line2Name->setText(QString());
        Line5Rank->setText(QString());
        Line1Grade->setText(QString());
        Line3Rank->setText(QString());
        Line2Num->setText(QApplication::translate("ScreenWindow", "2", Q_NULLPTR));
        Line6Num->setText(QApplication::translate("ScreenWindow", "6", Q_NULLPTR));
        Line7Name->setText(QString());
        Line4Class->setText(QString());
        Line8Grade->setText(QString());
        label_16->setText(QApplication::translate("ScreenWindow", "\347\273\204\345\210\253", Q_NULLPTR));
        Line3Class->setText(QString());
        Line2Class->setText(QString());
        Line7Class->setText(QString());
        Line6Class->setText(QString());
        Line8Class->setText(QString());
        Line1Class->setText(QString());
        Line7Rank->setText(QString());
        Line5Class->setText(QString());
        Line5Grade->setText(QString());
        Line0Num->setText(QApplication::translate("ScreenWindow", "0", Q_NULLPTR));
        Line0Team->setText(QString());
        Line0Name->setText(QString());
        Line0Grade->setText(QString());
        Line0Class->setText(QString());
        Line0Rank->setText(QString());
        Line9Num->setText(QApplication::translate("ScreenWindow", "9", Q_NULLPTR));
        Line9Name->setText(QString());
        Line9Team->setText(QString());
        Line9Class->setText(QString());
        Line9Grade->setText(QString());
        Line9Rank->setText(QString());
        label_14->setText(QApplication::translate("ScreenWindow", "\346\234\254\347\273\204\346\257\224\350\265\233\357\274\232", Q_NULLPTR));
        RegistrationCompetionName->setText(QString());
        label_3->setText(QApplication::translate("ScreenWindow", "\346\255\243\345\234\250\346\243\200\345\275\225\357\274\232", Q_NULLPTR));
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
