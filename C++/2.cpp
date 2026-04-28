// Define a base class Vehicle with attributes brand and model. Create a derived class Car that inherits from Vehicle and adds an attribute color. Implement a method display_info() in both classes to display the details of the vehicle. Demonstrate creating a Car object and calling both base class and derived class methods.

#include <iostream>
using namespace std;

class Vehicle
{
private:
    string brand;
    string model;

public:
void data(string br, string mo){
    brand =  br;
    model =  mo;
}
void display_info(){
    cout<<" Brand is "<<brand<<endl;
    cout<<"MOdel is "<<model<<endl;
}
};

class Car: public Vehicle
{
private:
    string color;

    public:
    void setdata(string coo){
    color =  coo;
}
void display_infoo(){
    display_info();
    cout<<"Color is "<<color<<endl;
}
};

int main(){
    Car cr;
    cr.data("HONDA","V8");
    cr.setdata("Blackish");
    cr.display_infoo();
    return 0;
}