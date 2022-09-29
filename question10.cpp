#include<iostream>
using namespace std;
class StaticCount
{
    private:
    static int count;
    public :

    void incr()
    {
        count++;
    }
    void display()
    {
        cout<<count<<endl;
    }

};
int StaticCount::count=0;
int main()
{
    StaticCount a;
  
    a.incr();
    a.incr();
    a.incr();
    a.display();
}