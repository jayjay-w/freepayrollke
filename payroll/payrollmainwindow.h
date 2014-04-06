#ifndef PAYROLLMAINWINDOW_H
#define PAYROLLMAINWINDOW_H

#include <QMainWindow>

class SelectCompanyDialog;

namespace Ui {
class PayrollMainWindow;
}

class PayrollMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit PayrollMainWindow(QWidget *parent = 0);
	~PayrollMainWindow();

public slots:
	void selectCompany();

private:
	Ui::PayrollMainWindow *ui;
	SelectCompanyDialog *m_companySelector;
};

#endif // PAYROLLMAINWINDOW_H
