#include "ControlWindow.h"
#include <QtWidgets/QApplication>
#include <fstream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ControlWindow w;
	w.show();
	return a.exec();
}