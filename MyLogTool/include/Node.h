#ifndef NODE_H
#define NODE_H
#include "Date.h"
#include <list>
#include <string>

using namespace std;

class Node
{
    public:
        string data;
        list<string> words;
        Date time;
        list<string> keys;
        Node(string node);
        bool match(string ss);
        void clip();
        virtual ~Node();
    protected:
    private:
};

#endif // NODE_H
