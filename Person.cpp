#include "Person.h"
using namespace std;

Person::Person():Person("No name","No surname",0){}

Person::Person(char *name, char *surname,int year)
{
    this->name = 0;
    this->surname = 0;
    setName(name);
    setSurname(surname);
    setYear(year);
}
Person::Person(const Person &kop):Person(kop.name,kop.surname,kop.year){}

void Person::setName(char *name)
{
    delete [] this->name;
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
}
void Person::setSurname(char *surname)
{
    delete [] this->surname;
    this->surname = new char[strlen(surname)+1];
    strcpy(this->surname,surname);
}
void Person::setYear(int year)
{
    this->year=year;
}
char *Person::getName()
{
    return name;
}
char *Person::getSurname()
{
    return surname;
}
int Person::getYear()
{
    return year;
}
void Person::print()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
}
Person::~Person()
{
    delete [] name;
    delete [] surname;
}
