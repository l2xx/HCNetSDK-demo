﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "HCNetSDK.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QTextEdit;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_connect_clicked();
    void on_pushButton_disconnect_clicked();

private:
    Ui::Widget *ui;
    LONG m_handle = -1;
};
extern QTextEdit *g_textedit;
#endif // WIDGET_H
