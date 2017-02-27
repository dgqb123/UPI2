#pragma once

#include <QString>
#include <QFile>
#include "parameter.h"

struct Parameter;
class xmlConfigRead
{
public:
	xmlConfigRead();
	~xmlConfigRead();

    Parameter setValue();
	

private:	
	QList<QString> text;
	QList<QString> type;
	QList<QString> w;
	QList<QString> h;
	QList<QString> x;
	QList<QString> y;

	Parameter parameter;
};

