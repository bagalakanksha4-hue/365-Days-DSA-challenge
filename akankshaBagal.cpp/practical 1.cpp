#include<iostream>
using namespace std;
class student
{
    public:
    static int roll;
    static void show()
{
    cout<<roll;
}};
int student ::roll=20;
int main()
{
    student :: show();
}