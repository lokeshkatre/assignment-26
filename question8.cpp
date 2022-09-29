#include<iostream>
using namespace std;
class Bank
{
    private:
    double principal,roi,yr;
    public:
    Bank(){}
    Bank(double x,double y,double z)
    {
     principal=x;
        roi=y;
        yr=z;   
    }
    void setData(double x,double y,double z)
    {
        principal=x;
        roi=y;
        yr=z;
    }
    double simpleInterest()
    {
        return 0.01*principal*roi*yr;
    }
    void display()
    {
        
        cout<<"Simple Interest is "<<simpleInterest()<<endl;
    }
};
int main()
{
    Bank b1;
    b1.setData(3000,7.8,4);
    b1.display();
    Bank b2(24000,5.04,4);
    b2.display();

    return 0;
}