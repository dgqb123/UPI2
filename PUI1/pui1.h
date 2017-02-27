#ifndef PUI1_H
#define PUI1_H

#include <QtWidgets/QMainWindow>
#include "ui_pui1.h"
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QRadioButton>

struct Parameter;
class iniConfigRead;
class PUI1 : public QMainWindow
{
	Q_OBJECT
    enum configType
	{
		CONFIG_FILE_TYPE_XML,
		CONFIG_FILE_TYPE_JSON
	};
public:
	PUI1(QWidget *parent = 0);
	~PUI1();

private:
	Ui::PUI1Class ui;
	configType getConfigFileType();//得到配置文件类型
	void widgetLoad();
	void createXmlWidget();
	void createJsonWidget();

	QLabel *m_label;
	QPushButton *m_pushButton;
	QLineEdit *m_lineEdit;
	QRadioButton *m_radioButton;
	QCheckBox *m_checkBox;

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
};

#endif // PUI1_H
