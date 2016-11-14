#ifndef CONFIG_H
#define CONFIG_H
#include <list>
#include <string>

using namespace std;

class Config
{
    public:
        Config();
        virtual ~Config();
        list<string> getLogKeys();
    protected:
    private:
        list<string> logKeys;
        void init();
};

#endif // CONFIG_H
