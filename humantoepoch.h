#ifndef HUMANTOEPOCH_H
#define HUMANTOEPOCH_H


#include "preCompiled.h"
#include <QKeyEvent>


namespace Ui {
class HumanToEpoch;
}

class HumanToEpoch : public QWidget
{
    Q_OBJECT
    
public:
    explicit HumanToEpoch(QWidget *parent = 0);
    ~HumanToEpoch();
    void cleanFields();
    void useUTC(bool b);
private:
    //private vars
    Ui::HumanToEpoch *ui;
    int timeSpec; //The timespec from Qt::TimeSpec. default 0 (local time) can become 1 (UTC)
    void keyPressEvent(QKeyEvent *);

private slots:
    void convert();
};

#endif // HUMANTOEPOCH_H
