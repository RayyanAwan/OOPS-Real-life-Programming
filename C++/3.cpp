// Define a base class Employee with private member variables name and salary, and a public method displayInfo() to show these details. Derive a Manager class from Employee, adding a protected member variable department. Further, derive an Executive class from Manager, adding a public method promote() to promote executives. Create objects of the  Executive class and demonstrate accessing members from all three classes.

#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    double salary;

    public:
    void setdata(){
        cout<<"Name is  ";
        cin>>name;
        cout<<"Salery is  ";
        cin>>salary;

    }
    void displayInfo(){
        cout<<"Name of the Employee "<<name<<endl;
        cout<<"Name of the Salery  "<<salary<<endl;
    };

};

class Manager:public Employee{
    protected:
    string dep;
    public:
    void data(string dd){
        dep=dd;
    }
    void getdata(){
        cout<<" Department is  "<<dep<<endl;
    }

};


class Executive:public Manager{
    public:
    void promote(){
        displayInfo();
        getdata();
        cout<<" To promote the Senior STACK Developer. "<<endl;
    }

};


int main(){
    Executive etx;
    etx.setdata();
    etx.data("MERN STACK");
    etx.promote();
    return 0;
}