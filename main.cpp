#include <QLocale>
#include <QTranslator>
#include "mainwindow.h"
#include "application.h"

int main(int argc, char *argv[])
{
    application app(argc, argv);

/*
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "GamingSuite_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
*/
    mainwindow w();
    w.show();

  return app.exec();
};
