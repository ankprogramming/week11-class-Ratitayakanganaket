#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;

    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;

    }
    double getHeight()
    {
        return height;
    }
    // เพิ่มเอาเอง
};

int main ()
{
    Student Noctis(36548,"Noctis",20,176);
    Student Ignis(36549,"Ignis",22,183);
    Student Gladiolus(36550,"Gladiolus",23,198);
    Student Prompto (36550,"Prompto",20,173);

    cout << "Id : " <<Noctis.getId() <<endl ;
    cout << "name : " <<Noctis.getName() <<endl ;
    cout << "age : " <<Noctis.getAge() <<endl ;
    cout << "height : " <<Noctis.getHeight() <<endl ;

    cout << "Id : " <<Ignis.getId() <<endl ;
    cout << "name : " <<Ignis.getName() <<endl ;
    cout << "age : " <<Ignis.getAge() <<endl ;
    cout << "height : " <<Ignis.getHeight() <<endl ;

    cout << "Id : " <<Gladiolus.getId() <<endl ;
    cout << "name : " <<Gladiolus.getName() <<endl ;
    cout << "age : " <<Gladiolus.getAge() <<endl ;
    cout << "height : " <<Gladiolus.getHeight() <<endl ;

    cout << "Id : " <<Prompto.getId() <<endl ;
    cout << "name : " <<Prompto.getName() <<endl ;
    cout << "age : " <<Prompto.getAge() <<endl ;
    cout << "height : " <<Prompto.getHeight() <<endl ;

    return 0;
}
