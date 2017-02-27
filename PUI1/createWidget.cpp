#include "createWidget.h"
#include "xmlConfigRead.h"
#include "jsonConfigRead.h"
#include <qDebug>

createWidget::createWidget()
{
}


createWidget::~createWidget()
{
}

void createWidget::createXmlWidget()
{
	xmlConfigRead value;
	text = value.setValue().text;
	type =value.setValue().type;
	w = value.setValue().w;
	h = value.setValue().h;
	x = value.setValue().x;
	y = value.setValue().y;
	for (int i = 0; i < type.length(); i++)
	{   
		m_w = w[i].toInt();
		m_h = h[i].toInt();
		m_x = x[i].toInt();
		m_y = y[i].toInt();
		if (type[i]== "QPushButton")
		{
			m_pushButton = new QPushButton();
			m_pushButton->setGeometry(QRect(m_w,m_h, m_x, m_y)); //按钮的位置及大小
		}
	}	
	
}


void createWidget::createJsonWidget(QWidget *p)
{
	jsonConfigRead value;
	text = value.getValue().text;
	type = value.getValue().type;
	w = value.getValue().w;
	h = value.getValue().h;
	x = value.getValue().x;
	y = value.getValue().y;
	for (int i = 0; i < type.length(); i++)
	{
		m_w = w[i].toInt();
		m_h = h[i].toInt();
		m_x = x[i].toInt();
		m_y = y[i].toInt();
		qDebug() << type[i];
		if (type[i] == "QPushButton")
		{
			qDebug() << "bbbb";
			m_pushButton = new QPushButton();
			m_pushButton->setGeometry(QRect(m_w, m_h, m_x, m_y)); //按钮的位置及大小
		}
		if (type[i] == "QLabel")
		{
			qDebug() << "vvvvvvvvv";
			//m_label = new QLabel();
			//m_label->setGeometry(QRect(m_w, m_h, m_x, m_y)); //按钮的位置及大小
		}		
	}

}