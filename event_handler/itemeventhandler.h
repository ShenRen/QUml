#ifndef ITEMEVENTHANDLER_H
#define ITEMEVENTHANDLER_H

#include "event_handler/abstracteventhandler.h"

class ItemEventHandler : public AbstractEventHandler
{
    Q_OBJECT
public:
    explicit ItemEventHandler(DiagramScene *parent = 0);
    ~ItemEventHandler();

public slots:
    void mouseDoubleClick(QGraphicsSceneMouseEvent *event);
    void mousePress(QGraphicsSceneMouseEvent *event);
    void mouseMove(QGraphicsSceneMouseEvent *event);
    void mouseRelease(QGraphicsSceneMouseEvent *event);

private:


signals:

};

#endif // ITEMEVENTHANDLER_H
