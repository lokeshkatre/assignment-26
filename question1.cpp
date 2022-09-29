#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"real="<<a<<" imaginary="<<b<<endl;
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(4,5);
    c1.showData();
    c2.showData();
    Complex c3;
    c3=c1.add(c2);
    c3.showData();

    return 0;
}