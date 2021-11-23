#ifndef DEMO_H
#define DEMO_H

#include <QObject>
#include <QWidget>
#include <QDebug>
#include <QProcess>

#define DEMO_SCRIPT_STATIC_PATH "/home/pino/demo_script.sh"

class DEMO : public QObject
{
    Q_OBJECT
public:
    DEMO();
    QString stdout_str;
    int run_test_script(void);
};

#endif // DEMO_H
