#include<iostream>
using namespace std;
class Box
{
    private :
    double length, breadth,height,vol;
    public:
    Box()
    {}
    Box(double x,double y,double z)
    {
        length=x;
        breadth=y;
        height=z;
    }
    void volume()
    {
        vol= length*breadth*height;
    }
    double getVolume()
    {
        volume();
        return vol;
    }

};
int main()
{
    Box b1(2,3.5,4.6);
    cout<<"volume of Box is "<<b1.getVolume()<<endl;
    
}