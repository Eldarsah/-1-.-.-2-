#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    char *surname;
    int year;
public:
    Person();
    Person(char *name, char *surname,int year);
    Person(const Person &kop);

    void setName(char *);
    void setSurname(char *);
    void setYear(int);

    char *getName(char *name) const;
    char *getSurname(char *surname) const;
    int getYear();

    void print();

    ~Person();
};

#endif // PERSON_H_INCLUDED
