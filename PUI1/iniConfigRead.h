#pragma once

#include <QString>
#include <QFile>

class iniConfigRead
{
public:
	iniConfigRead();
	~iniConfigRead();
	QList<QString> getValue(const QString iniFile);

private:
	QFile *localFile;
};

