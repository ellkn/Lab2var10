#include <iostream>
#include "Wind.h"
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "\t\t����������" << endl;
    Window w;
    cout << w;
    cout << "\n\t\t����������� �����������:\n" << endl;
    Window z (w);
    cout << z;
    cout << "\n\t\t���������� SET:\n" << endl;
    w.setowner("User");
    w.settitle("game");
    w.setcolor("green");
    cout << w;
    cout << "\n\t\t���������� GET:\n" << endl;
    w.getowner();
    w.gettitle();
    w.getcolor();
    cout << w;

    Window new1;
    string owner;
    string title;
    string color;

    cout << "\n\t\t������� ����� �������� ��� owner, title, color:\n";
    cin>>new1;
    cout<<"\n"<<new1;

    cout << "\n\t\t���������� ������ ����������: \n"<<endl;

    cout << "\t\t�������� >"<< endl;
    if (w>new1)
    {cout << "�������������� �������� owner ������ ���� ����������" << endl;}
    else
    {cout << "�������������� �������� owner ������ ���� ����������" << endl;}

    cout << "\n\t\t�������� <"<< endl;
    if (w<new1)
    {cout << "�������������� �������� owner ������ ���� ����������" << endl;}
    else
    {cout << "�������������� �������� owner ������ ���� ����������" << endl;}

    cout << "\n\t\t�������� >="<< endl;
    if (w>=new1)
    {cout << "�������������� �������� owner ������ ��� ����� ���� ����������" << endl;}
    else
    {cout << "�������������� �������� owner ������ ���� ����������" << endl;}

    cout << "\n\t\t�������� <="<< endl;
    if (w<=new1)
    {cout << "�������������� �������� owner ������ ��� ����� ���� ����������" << endl;}
    else
    {cout << "�������������� �������� owner ������ ���� ����������" << endl;}

    cout << "\n\t\t�������� =="<< endl;
    if (w==new1)
    {cout << "�������������� �������� ����� � ���� ���������" << endl;}
    else
    {cout << "�������������� �������� �� ����� �  ���� ���������" << endl;}

    cout << "\n\t\t�������� !="<< endl;
    if (w!=new1)
    {cout << "�������������� �������� �� ����� � ���� ���������" << endl;}
    else
    {cout << "�������������� �������� ����� �  ���� ���������" << endl;}

    cout << "\n\t\t�������� ="<< endl;
    w=new1;
    cout << w << endl;


    return 0;
}
