#include<iostream>
using namespace std;
class Cube
{
    private:
    int side,vol;
    public:
    Cube()
    {

    }
    Cube(int x) 
    {
        side=x;
    }
    void setSide(int x)
    {
        side=x;
    }
    int getSide()
    {
        return side;
    }
    int getVolume()
    {
        volume();
        return vol;  
    }
    void volume()
    {
        vol=side*side*side;
    }
};
int main()
{
    Cube c1=5;
    Cube c2;
    cout<<"volume of cube with side "<<c1.getSide()<<" is "<<c1.getVolume()<<endl;
    c2.setSide(4);
    cout<<"volume of cube with side "<<c2.getSide()<<" is "<<c2.getVolume()<<endl;

    
    return 0;
}