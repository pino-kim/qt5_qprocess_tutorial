#include "demo.h"

DEMO::DEMO()
{

}

int DEMO::run_test_script()
{
    qDebug() << "[QT5 DBG] run_test_script start ";

    QProcess demo_script;

    demo_script.QProcess::start(DEMO_SCRIPT_STATIC_PATH,QStringList(""));

    if (!demo_script.waitForStarted())
        return -1;

    if (!demo_script.waitForFinished())
        return -1;

    QByteArray get_stdout = demo_script.readAll();

    this->stdout_str = QString(get_stdout);

    qDebug() <<  stdout_str;

    qDebug() << "[QT5 DBG] run_test_script End ";

    return 0;
}
