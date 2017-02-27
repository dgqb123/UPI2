#include "jsonConfigRead.h"
#include <QString>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <qDebug>

jsonConfigRead::jsonConfigRead()
{
}


jsonConfigRead::~jsonConfigRead()
{
	
}


Parameter jsonConfigRead::getValue()
{
	QFile file(":/PUI1/app.json");
	QString val;
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		val = file.readAll();
		file.close();		
	}
	qDebug() << "ddddfffffff"<<val;
	QJsonParseError json_error;
	QJsonDocument parse_document = QJsonDocument::fromJson(val.toUtf8(), &json_error);
	if (json_error.error == QJsonParseError::NoError)
	{
		qDebug() << "aaaaaaa";
		if (parse_document.isEmpty())
		{
			qDebug() << "the json is empty";
		}
		if (parse_document.isObject())
		{
			
			QJsonObject obj = parse_document.object();
			QJsonValue buttonNameJsonValue = obj.value(QString("name"));
			QJsonValue framesJsonValue = obj.value(QString("frames"));
			QList<QString> buttonNameList = framesJsonValue.toObject().keys();
			text = buttonNameList;
			QJsonObject framesObject = framesJsonValue.toObject();
			for (auto beginItr = framesObject.begin(); beginItr != framesObject.end(); ++beginItr)
			{
				QJsonValue eachImageJsonValue = *beginItr;
				QJsonObject eachImageJsonObject = eachImageJsonValue.toObject();
				QJsonValue typeValue = eachImageJsonObject["type"];			
				if (typeValue.isString())
				{	
					type.append(typeValue.toString());
				}
				QJsonValue xValue = eachImageJsonObject["x"];
				if (xValue.isString())
				{			
					x.append(xValue.toString());
				}
				QJsonValue yValue = eachImageJsonObject["y"];
				if (yValue.isString())
				{
					y.append(yValue.toString());
				}
				QJsonValue wValue = eachImageJsonObject["w"];
				if (wValue.isString())
				{
					w.append(wValue.toString());
				}
				QJsonValue hValue = eachImageJsonObject["h"];
				if (hValue.isString())
				{
					h.append(hValue.toString());
				}			
			}
			
			parameter.text = text;
			parameter.type = type;
			parameter.w = w;
			parameter.h = h;
			parameter.x = x;
			parameter.y = y;
			return parameter;
		}
	}
}