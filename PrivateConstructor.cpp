#include<iostream>
using namespace std;
class PivateConstructor
{
    private :
    PivateConstructor()
    {
        cout<<"No Objects Can be Created"<<endl;
    }
};
class PublicConstructor
{
    public:
    PublicConstructor()
    {
        cout<<"Object Can be Created"<<endl;
    }
};
int main()
{
    PivateConstructor p1;  // Invalid Statement
    PublicConstructor p2;  // Valid Statement
    return 0;
}