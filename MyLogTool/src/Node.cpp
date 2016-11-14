#include "Node.h"
#include <iostream>

using namespace std;

Node::Node(string note)
{
    data = note;
    string _date;
    string _time;
    Date::getTimeString(note.c_str(), _date, _time);
    time = Date(_date, _time);
    //ctor
}

Node::~Node()
{
    //dtor
}
void Node::clip() {
//    cout << data << endl;
    for (int i = 0; i < (int) data.length(); ++ i) {
        if (data[i] == ' ' || i == 0) {
            while(data[i] == ' ' && i < (int)data.length()) ++i;
            if (i == (int) data.length()) return;
            int j = i;
            while (data[j] != ' ' && j < (int) data.length()) ++ j;
            string ans = data.substr(i, j-i);
            words.push_back(ans);
        }
    }
//    for (list<string>::iterator v = words.begin(); v != words.end(); ++ v) {
//        cout << *v << endl;
//    }
}
