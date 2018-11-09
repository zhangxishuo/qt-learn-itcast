#include "mainwidget.h"
#include <QPushButton>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    button.setParent(this);
    button.setText(QString("(ಡωಡ)"));

    // 指针需要分配空间
    ptrButton = new QPushButton(this);
    ptrButton->setText(QString("Close Widget"));
    ptrButton->move(50, 50);

    /*
     * ptrButton              信号发出者，指针类型
     * &QPushButton::pressed  信号类型
     * this                   信号接收者
     * &MainWidget::close     槽(信号处理)函数
     */
    connect(ptrButton, &QPushButton::pressed, this, &MainWidget::close);

    connect(&button, &QPushButton::released, this, &MainWidget::releaseSlot);
}

MainWidget::~MainWidget()
{

}
