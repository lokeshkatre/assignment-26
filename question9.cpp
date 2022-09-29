#include<iostream>
#include<cstring>
using namespace std;
class Bill
{
    private :
    char name[20],address[30];
    int id;
    float finalBill,units;
    public:
    void get(char x[],char y[],int z,float a)
    {
        strcpy(name,x);
        strcpy(address,y);
        id=z;
        units=a;
    }
    void calculateBill()
    {
        if(units<100.0)
        finalBill=1.2*units;
        else if(units>=100.0 && units<=200.0)
        finalBill=2*units;
        else 
        finalBill=3*units;
    }
    void display()
    {
        calculateBill();
        cout<<"Name       :"<<name<<endl;
        cout<<"Id         :"<<id<<endl;
        cout<<"Address    :"<<address<<endl;
        cout<<"Bill amount: Rs "<<finalBill<<endl;
    }
};
int main()
{
    Bill b1;
    b1.get("Lokesh Katre","XYZ colony",34234,123.53); 
    b1.display();
}