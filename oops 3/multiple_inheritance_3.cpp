#include<iostream>
using namespace std;
class cricketer{
public:
    int runs;
    int matches;
    float avg;
};

class engineer{
public:
    string domain;
    int experience;
};

class phodu : public cricketer,engineer{ // multiple inheritance
public:
    string name;
    int age;
};

int main()
{
    
}