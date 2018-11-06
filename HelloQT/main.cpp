#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget widget;

    // 设置标题
    // QString是QT提供的对字符串的实现
    widget.setWindowTitle(QString("Hello QT!"));

    QPushButton button;

    // 设置按钮内容
    button.setText(QString("(ಡωಡ)"));

    // 如果不指定父对象，窗口与窗口之间没有关系，独立
    // 按钮指定窗口为它的父对象，按钮放在窗口的上面
    // 只要父对象显示，上面的子对象自动显示
    // 设置按钮的父对象为widget
    button.setParent(&widget);

    // 按钮从左上角向x、y轴移动50像素
    button.move(50, 50);

    widget.show();

    return app.exec();
}
