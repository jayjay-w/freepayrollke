#include "selectcompanydialog.h"
#include "ui_selectcompanydialog.h"

SelectCompanyDialog::SelectCompanyDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::SelectCompanyDialog)
{
	ui->setupUi(this);
}

SelectCompanyDialog::~SelectCompanyDialog()
{
	delete ui;
}

void SelectCompanyDialog::on_cmdClose_clicked()
{
	this->reject();
}
