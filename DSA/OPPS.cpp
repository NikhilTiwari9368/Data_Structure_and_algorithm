#include<iostream>
using namespace std;

class student
{

    string name;
    public: 
    
    int age;
    bool gender;

    student()
    {
        cout << " DEFAULT CONSTRUCTOR " <<endl ;
    }

    student(string s , int a , int g)
    {
        cout<<"Parametrized Constructor"<<endl;
        name = s ; 
        age = a ;
        gender = g ;
    }// Parametrized constructors 

    student(student &a)
    {
        cout<<"Copy Constructor"<<endl;
        name = a.name ;
        age = a.age ;
        gender = a.gender ;
    }

    ~student()
    {
        cout << "Destructor called" << endl ;
    }
    void setName(string s )
    {
        name = s ; 
    }

    void getName()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;

    }

    int arr[];
    void printInfo()
    {

        cout<<"Name = ";
        cout<<name<<endl;
        cout << "Age=";
        cout<<age<<endl;
        cout<<"Gender=";
        cout<<gender<<endl;
    }
};

int main()
{
    // student arr[3];
    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     cout<<"Name = ";
    //     cin>>arr[i].name;
    //     cout<<"Age=";
    //     cin>>arr[i].age;
    //     cout<<"Gender=";
    //     cin>>arr[i].gender;

    // }

    // for(int i=0 ;i<3;i++)
    // {
    //     arr[i].printInfo();
    // }
    // return 0;
    
    student a("NIKHIL" , 56 , 21 );
    student b("Rahul" , 9, 1);

    student c; // Default constructor // 

    student d = a ;

    bool operator == (student &a)
    {
        if(name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
    a.printInfo();
    b.printInfo();
    c.printInfo();
    d.printInfo();
    
    if(c==a)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not same" <<endl;
    }
   
    
    return 0;
}