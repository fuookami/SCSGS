#include "ControlWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ControlWindow w;
	w.show();
	return a.exec();
}