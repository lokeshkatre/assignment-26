#include<iostream>
using namespace std;
class Date
{
    private :
    int day,mon,yr;
    public:
    Date()
    {}
    Date (int x,int y,int z)
    {
        day=x;
        mon=y;
        yr=z;
    }
    void display()
    {
        cout<<day<<"/"<<mon<<"/"<<yr<<endl;
    }
};
int main()
{
    Date d(2,9,2022);
    d.display();
    return 0;
}