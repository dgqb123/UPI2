#pragma once

#include <QString>
#include "xmlConfigRead.h"
#include <QPushButton>
#include <QLabel>
#include "parameter.h"
#include <QtWidgets/QMainWindow>


class QMinWindow;
struct Parameter;
class xmlConfigRead;
class PUI1;
class createWidget
{
public:
	createWidget();
	~createWidget();

	void createXmlWidget();
	void createJsonWidget(QWidget *p);



private:
	QList<QString> text;
	QList<QString> type;
	QList<QString> w;
	QList<QString> h;
	QList<QString> x;
	QList<QString> y;
	
	QString m_text;
	QString m_type;
	int m_w;
	int m_h;
	int m_x;
	int m_y;

	
	QPushButton *m_pushButton;
	
};

