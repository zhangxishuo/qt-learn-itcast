#include "widget.h"

// QApplication应用程序类
// QT头文件没有.h，头文件与类名相同
#include <QApplication>

int main(int argc, char *argv[])
{
    // 应用程序对象，全局只有一个
    QApplication a(argc, argv);

    // 继承自QWidget，创建窗口类对象
    Widget w;

    // 窗口创建默认是隐藏的，手动显示
    w.show();

    // 一直运行应用程序，等待用户操作
    return a.exec();
}
