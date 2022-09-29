#include<iostream>
using namespace std;
class counter
{
    private :
    int count;
    public:
    counter()
    {
        count=0;
    }
    void inc_count()
    {
        count++;
    }
    int getCount()
    {
        return count;
    }
};
int main()
{
    counter c;
    cout<<c.getCount()<<endl;
    c.inc_count();
    cout<<c.getCount()<<endl;
}