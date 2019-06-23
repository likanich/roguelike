#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class Window : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString status READ status WRITE setStatus)

public:

    Window();
    ~Window();

};

#endif