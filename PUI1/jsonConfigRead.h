#pragma once

#include "parameter.h"

struct Parameter;
class jsonConfigRead
{
public:
	jsonConfigRead();
	~jsonConfigRead();

	Parameter getValue();

private:

	QList<QString> text;
	QList<QString> type;
	QList<QString> w;
	QList<QString> h;
	QList<QString> x;
	QList<QString> y;
	Parameter parameter;
};

