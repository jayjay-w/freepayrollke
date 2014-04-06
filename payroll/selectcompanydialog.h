#ifndef SELECTCOMPANYDIALOG_H
#define SELECTCOMPANYDIALOG_H

#include <QDialog>

namespace Ui {
class SelectCompanyDialog;
}

class SelectCompanyDialog : public QDialog
{
	Q_OBJECT

public:
	explicit SelectCompanyDialog(QWidget *parent = 0);
	~SelectCompanyDialog();

private slots:
	void on_cmdClose_clicked();

private:
	Ui::SelectCompanyDialog *ui;
};

#endif // SELECTCOMPANYDIALOG_H
