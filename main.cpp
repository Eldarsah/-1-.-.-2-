#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

int main()
{
    setlocale(0, "");
    char *name = new char[100];
    char *surname = new char[100];
    int year;
    int ans=-1;
    Person p;

    while (1)
    {
        cout<<"Введите 1, чтобы ввести поле name.\n";
        cout<<"Введите 2, чтобы ввести поле surname.\n";
        cout<<"Введите 3, чтобы ввести поле year.\n";
        cout<<"Введите 4 для реализации getName,getSurname,getYear.\n";
        cout<<"Введите 5 для реализации вывода объекта на экран(print).\n";
        cout<<"Введите 6 чтобы создать объект p1 с заданными параметрами.\n";
        cout<<"Введите 7 чтобы создать копию обекта.\n";
        cout<<"\nВведите 0 для выхода.\n";
        cin>>ans;
        while (ans<0&&ans>6)
            cin>>ans;
        switch(ans)
        {
        case(0):
            break;
        case(1):
            cout<<"Введите name\n";
            cin>>name;
            p.setName(name);
            break;
        case(2):
            cout<<"Введите surname\n";
            cin>>surname;
            p.setSurname(surname);
            break;
        case(3):
            cout << "Введите year\n";
            cin >> year;
            p.setYear(year);
            break;
        case(4):
            name=p.getName();
            surname=p.getSurname();
            year = p.getYear();
            cout<<"Name:"<<name<<endl;
            cout<<"Surname:"<<surname<<endl;
            cout<<"Year:"<<year<<endl;
            break;
        case(5):
            p.print();
            break;
        case(6):
            {
            Person p1("Robert","Wilson",33);
            p1.print();
            }
            break;
        case(7):
            {
            Person p2(p);
            p2.print();
            }
            break;
        default:
            break;
        }
        cout<<endl;
        if (ans==0)
            break;
    }
    return 0;
}
