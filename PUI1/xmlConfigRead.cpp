#include "xmlConfigRead.h"
#include <QFile>
#include <QXmlStreamReader>
#include <qDebug>

xmlConfigRead::xmlConfigRead()
{
}


xmlConfigRead::~xmlConfigRead()
{
}


Parameter xmlConfigRead::setValue()
{
	QFile file(":/PUI1/app.xml");
	QList<QString> result;
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QXmlStreamReader reader(&file);
		while (!reader.atEnd())
		{
			if (reader.isStartElement());
			{
				QXmlStreamAttributes attributes = reader.attributes();
				if (attributes.hasAttribute("id"))
				{
					//½«ÊôÐÔid×·¼ÓtextBrower
					//qDebug()<<""<<id;
				}
				if (reader.name() == "text")
				{
					text.append(reader.readElementText());				
				}
				else if (reader.name() == "type")
				{
					type.append(reader.readElementText());				
				}
				else if (reader.name() == "width")
				{
					w.append(reader.readElementText());
				}
				else if (reader.name() == "height")
				{
					h.append(reader.readElementText());
				}
				else if (reader.name() == "x")
				{
					x.append(reader.readElementText());
				}
				else if (reader.name() == "y")
				{
					y.append(reader.readElementText());
				}	
				
			}
			if (reader.isEndElement() && reader.name() == "widget")
			{
			
			}			
			reader.readNext();		
		}
		file.close();	
	}	
	else
	{
		qDebug() << "222222222";
	}	
	parameter.text = text;
	parameter. type = type;
	parameter.w = w;
	parameter.h = h;
	parameter.x = x;
	parameter.y = y;

	return parameter;
}





