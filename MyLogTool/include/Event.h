#ifndef EVENT_H
#define EVENT_H
#include <string>
#include <list>
#include "Node.h"

using namespace std;

class Event
{
    public:
        string ev;
        Date time;
        int useTime;
        list<Node> nodes;
        list<string> keys;
        string des;
        Event();
        Event(string ev);
        void read();
        virtual ~Event();
    protected:
    private:
};

#endif // EVENT_H
