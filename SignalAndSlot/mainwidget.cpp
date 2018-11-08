#include "mainwidget.h"
#include <QPushButton>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    button.setParent(this);
    button.setText(QString("(ಡωಡ)"));

    // 指针需要分配空间
    ptrButton = new QPushButton(this);
    ptrButton->setText(QString("(ಡωಡ) ptr"));
    ptrButton->move(50, 50);
}

MainWidget::~MainWidget()
{

}
