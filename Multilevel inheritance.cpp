#include<iostream>
using namespace std;
class B
{
    protected:
        int i;
};
class D1: public B
{
    public:
        void get()
        {
            cout<<"Enter i:";
            cin>>i;
        }
};
class D2: public D1
{
    public:
        
        void show()
        {
             D1::get();
             cout<<"Value of i="<<i;
         }
};
int main()
{
    D2 obj;
    obj.show();
}
