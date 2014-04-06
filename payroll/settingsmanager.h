#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <QObject>


class SettingsManager : public QObject
{
	Q_OBJECT
public:
	static QVariant getValue(QString settingName);
	static void setValue(QString settingName, QVariant value);
signals:

public slots:

};

#endif // SETTINGSMANAGER_H
