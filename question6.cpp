#include<iostream>
#include<cstring>
using namespace std;
class student 
{
    private:
    char name[20],address[34];
    int rollNo;
    public:
    student()
    {}
    student(char x[],char y[],int z)
    {
        strcpy(name,x);
        strcpy(address,y);
        rollNo=z;
    }
    void displayDetails()
    {
        cout<<"name    :"<<name<<endl;
        cout<<"roll no.:"<<rollNo<<endl;
        cout<<"address :"<<address<<endl;
    }
};
int main()
{
    student s1("Lokesh Katre","XYZ colony",76);
    s1.displayDetails();

}