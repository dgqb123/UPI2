#include "pui1.h"
#include "iniConfigRead.h"
#include <qDebug>
#include "xmlConfigRead.h"
#include "createWidget.h"
#include "jsonConfigRead.h"

PUI1::PUI1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	widgetLoad();	
}


PUI1::~PUI1()
{
	
}


PUI1::configType PUI1::getConfigFileType()
{
	QString str = "H:\\config.ini";
	iniConfigRead rd;
	QList<QString> value = rd.getValue(str);
	if(value[value.length() - 1] == "xml")
	{
		return CONFIG_FILE_TYPE_XML;
	}
	else if (value[value.length() - 1] == "json")
	{
		return CONFIG_FILE_TYPE_JSON;
	}	
	else
	{
		qDebug() << "error";
	}
}


void PUI1::widgetLoad()
{   
	configType ty = getConfigFileType();
	if (ty == CONFIG_FILE_TYPE_XML)
	{
		createXmlWidget();
	}
	else if (ty == CONFIG_FILE_TYPE_JSON)
	{
		createJsonWidget();
	}
	else
	{
		qDebug() << "error";
	}
}


void PUI1::createXmlWidget()
{
	xmlConfigRead value;
	text = value.setValue().text;
	type = value.setValue().type;
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
		if (type[i] == "QPushButton")
		{
			m_pushButton = new QPushButton(this);
			m_pushButton->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QLabel")
		{
			m_label = new QLabel(this);
			m_label->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QCheckBox")
		{
			m_checkBox = new QCheckBox(this);
			m_checkBox->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QLineEdit")
		{
			m_lineEdit = new QLineEdit(this);
			m_lineEdit->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QRadioButton")
		{
			m_radioButton = new QRadioButton(this);
			m_radioButton->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
	}
}

void PUI1::createJsonWidget()
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
		if (type[i] == "QPushButton")
		{
			m_pushButton = new QPushButton(this);
			m_pushButton->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QLabel")
		{
			m_label = new QLabel(this);
			m_label->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QCheckBox")
		{
			m_checkBox = new QCheckBox(this);
			m_checkBox->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QLineEdit")
		{
			m_lineEdit = new QLineEdit(this);
			m_lineEdit->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
		if (type[i] == "QRadioButton")
		{
			m_radioButton = new QRadioButton(this);
			m_radioButton->setGeometry(QRect(m_x, m_y, m_w, m_h)); //按钮的位置及大小
		}
	}
}