/*
(The Person, Student, Employee and Faculty classes) Design a class named Person and its two derived classes named Student and Employee. Make Faculty a derived class of Employee. The classes have the following properties:
• A Person has a name and e-mail address
• A Student has a class status (first year, second year, final year)
• An Employee has an office and salary
• A Faculty member has office hours*/

#include<iostream>
#include<string>
using namespace std;

//Person class
class Person
{
        protected:
                //name and email
                string name;
                string email;   
        public:
                Person()
                {
                        name="Joe Bloggs";
                }
                Person(string name,string email)
                {
                        this->name=name;
                        this->email=email;
                }
                //getter and setter method
                string getName()
                {
                        return this->name;
                }
                string getEmail()
                {
                        return this->email;
                }
                //setter method
                void setName(string name)
                {
                        this->name=name;
                }
                void setEmail(string email)
                {
                        this->email=email;
                }
                //virtual method
                virtual string toString()
                {
                        return "Invoking Person toString: Call toString in Person class, person is " + name;
                }
};

class Student : 

public Person
{
        protected :
                string status;
        public:
                Student()
                {
                        
                }
                Student(string name,string email,string status):Person(name,email)
                {
                        this->status=status;                         
                }       
        string getStatus()
        {
                return status;
        }
        void setStatus(string s)
        {
                status=s;
        }
        //override method
        string toString()
        {
                        return "Invoking Student toString: Call toString in Student class, person is "+ name;
        }
};


class Employee : public Person
{
        protected :
                string office;
                double salary;
        public:
                Employee()
                {
                        
                }
                Employee(string name,string email,string office,double salary):Person(name,email)
                {
                        this->office=office;
                        this->salary=salary;                         
                }
        //getter and setter     
        string getOffice()
        {
                return office;
        }
        void setOffice(string s)
        {
                office=s;
        }
        
        double getSalary()
        {
                return salary;
        }
        void setSalary(double s)
        {
                this->salary=s;
        }
        //override method
        string toString()
        {
                         return "Invoking Employee toString: Call toString in Employee class, person is " + name;
        }
};

//faculty derived class of Employee
class Faculty: public Employee
{
        protected:
                int officeHours;
        public:
        Faculty()
        {
                
        }
        Faculty(string name,string email,string office,double salary,int hours):Employee(name,email,office,salary)
                {
                        this->officeHours=hours;
                }       
        int getHours()
        {
                return this->officeHours;
                }       
        void setHours(int s)
        {
                this->officeHours=s;
        }
                //override method
        string toString()
        {
                        return "Invoking Faculty toString: Call toString in Faculty class, Person is " + name;
        }
        
};


int main()
{
        Person p;
        p.setName("Jane Doe");
        cout<<p.toString()<<endl;
        Student s;
        cout<<s.toString()<<endl;
        Employee e;
        cout<<e.toString()<<endl;
        Faculty f;
        cout<<f.toString()<<endl;
        return 0;
}
