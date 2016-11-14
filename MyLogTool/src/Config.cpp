#include "Config.h"
#include <fstream>
#include <stdio.h>
#include <iostream>

Config::Config()
{
    init();
}

Config::~Config()
{
    //dtor
}

void Config::init() {
    ifstream file;
    file.open("/home/mi/.Xlog/Xconfig", ios::in);
    string buf;
    while(file >> buf) {
        if (buf == "LogKeys:") {
            string tmp;
            while(file >> tmp) {
                logKeys.push_back((string) tmp);
                cout << tmp << endl;
            }
        }
    }
    file.close();
}
