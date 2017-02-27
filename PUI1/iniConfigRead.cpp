#include "iniConfigRead.h"
#include <QSettings>
#include <qDebug>

iniConfigRead::iniConfigRead()
{
}


iniConfigRead::~iniConfigRead()
{
	delete localFile;
	localFile = 0;
}


QList<QString> iniConfigRead::getValue(const QString iniFile)
{
	QString strFileName = iniFile;
	localFile = new QFile(strFileName);
	if (!localFile->open(QFile::ReadOnly))
	{
		qDebug() << "can not open!";
	}
	else
	{
		QString str = "";
		QList<QString> result;
		QString strFileName = iniFile;
		QSettings settings(strFileName, QSettings::IniFormat);
		str = settings.value("config/path").toString();
		result.append(str);
		str = settings.value("config/type").toString();
		result.append(str);
		return result;
	}	
}
