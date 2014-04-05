#include "payrollmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	a.setApplicationDisplayName("Free Payroll");
	a.setApplicationName("FreePayroll");
	a.setApplicationVersion("1.0");
	a.setOrganizationDomain("smartsoftware.co.ke");
	a.setOrganizationName("Smart Software Ltd");

	PayrollMainWindow w;
	w.show();

	return a.exec();
}
