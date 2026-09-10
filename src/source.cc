// basic qtwidgets window init

/* @TODO
* Window icon
* Window resizing
* Window colors
* etc.
*/

#include <QApplication>
#include <QWidget>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.resize(800, 600);
    window.setWindowTitle("BlueClover | 4chan Client");
    window.show();

    return app.exec();
}