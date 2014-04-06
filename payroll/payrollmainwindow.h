#ifndef PAYROLLMAINWINDOW_H
#define PAYROLLMAINWINDOW_H

#include <QMainWindow>

class SelectCompanyDialog;
class PayrollXMLManager;

namespace Ui {
class PayrollMainWindow;
}

class PayrollMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit PayrollMainWindow(QWidget *parent = 0);
	~PayrollMainWindow();
	PayrollXMLManager *m_xml;

public slots:
	void selectCompany();

private:
	Ui::PayrollMainWindow *ui;
	SelectCompanyDialog *m_companySelector;
};

#endif // PAYROLLMAINWINDOW_H
