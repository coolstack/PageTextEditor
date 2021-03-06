
#include "textedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(textedit);

    QApplication a(argc, argv);
    TextEdit mw;
    mw.resize(700, 800);
    mw.show();
    mw.setLoadingState(false);
    mw.form().textEdit->setUndoRedoEnabled(true);

    return a.exec();
}

/*
#include "textedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(textedit);

    QApplication a(argc, argv);
    TextEdit mw;
    mw.resize(700, 800);
    mw.show();
    return a.exec();
}

*/
