#include "settingsmanager.h"
#include <QSettings>
#include <QApplication>

QVariant SettingsManager::getValue(QString settingName)
{
	QSettings sett(qApp->organizationName(), qApp->applicationName());
	return sett.value(settingName);
}

void SettingsManager::setValue(QString settingName, QVariant value)
{
	QSettings sett(qApp->organizationName(), qApp->applicationName());
	sett.setValue(settingName, value);
}
