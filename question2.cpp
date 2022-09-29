#include<iostream>
using namespace std;
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
        normalize();
    }
    void showTime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalize();
        return temp;
    }
    void normalize()
    {
       m=m+s/60;
       s=s%60;
       h=h+m/60;
       m=m%60;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(3,45,43);
    t2.setTime(5,34,48);
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();

    return 0;
}