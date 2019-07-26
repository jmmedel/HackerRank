#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <numeric>

class Person
{
    string name;
    int age;
    int person_id = 0;
public:
    Person(int id = 0) : person_id(id)
    {}

    virtual void putdata() const
    {
        cout << name << " " << age << " " << getraw() << " " << person_id << endl;
    }
    virtual void getdata()
    {
        cin >> name >> age;
    }

protected:
    void setid(int id) { person_id = id; }
    virtual int getraw() const = 0;
};

class Student : public Person
{
    int subjects[6];
    static int id;
public:
    Student() : Person(++id) {}
    virtual void getdata() override
    {
        Person::getdata();
        for (int i = 0; i < 6; ++i)
            cin >> subjects[i];
    }

private:
    virtual int getraw() const override
    {
        return accumulate(subjects, subjects + 6, 0);
    }
};

class Professor : public Person
{
    int publications;
    static int id;
public:
    Professor() : Person(++id) {}
    virtual void getdata() override
    {
        Person::getdata();
        cin >> publications;
    }
private:
    virtual int getraw() const override
    {
        return publications;
    }
};

int Student::id = 0;
int Professor::id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
