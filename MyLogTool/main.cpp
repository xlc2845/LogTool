#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <list>
#include "Date.h"
#include "Config.h"
#include "Node.h"
using namespace std;

int main()
{
    Config config;
    ifstream file;
    file.open("log", ios::in);
    char buf[1024];
    while (file.getline(buf, sizeof(buf))) {
        cout << buf << endl;
        Node a = Node(buf);
        a.clip();
    }
    return 0;
}
