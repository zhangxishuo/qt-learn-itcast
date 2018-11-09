#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPushButton>

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void releaseSlot();

private:
    QPushButton button;
    QPushButton *ptrButton;
};

#endif // MAINWIDGET_H
