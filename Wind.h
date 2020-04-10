#ifndef WIND_H_INCLUDED
#define WIND_H_INCLUDED
#include <iostream>
#include <cstring>

using namespace std;

class Window
{
private:
    string owner;
    string title;
    string color;

public:
    Window();
    Window(const Window & obj);
    void setowner(string owner);
    void settitle(string title);
    void setcolor(string color);
    string getowner();
    string gettitle();
    string getcolor();

    bool operator> (const Window &w) const;
    bool operator< (const Window &w) const;
    bool operator>= (const Window &w) const;
    bool operator<= (const Window &w) const;
    bool operator== (const Window &w) const;
    bool operator!= (const Window &w) const;
    friend ostream& operator<< (ostream &out, const Window &w);
    friend istream& operator>> (istream &in, Window &w);
    Window& operator=(Window &w);
};

#endif // WIND_H_INCLUDED

