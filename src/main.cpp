#include <QtWidgets>

#include "src/window.hpp"

int main(int argv, char **args)
{
    QApplication app(argv, args);

    Window window;
    window.show();

    return app.exec();
}