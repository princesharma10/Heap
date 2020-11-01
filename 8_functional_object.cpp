//It is also known as a Functor 
#include<bits/stdc++.h>
using namespace std;
class fun{
    public:
    void operator()(string s ){
        cout<<"Having Fun inside Operator() in "<<s<<endl;
    }
};
int main()
{
    fun f;  //Constructor
    f("C++");  //Overload () Operator = Function Call where f is an object
    return 0;
}