//It is also known as a Functor 
#include<bits/stdc++.h>
using namespace std;
class fun{
    public:
    void operator()(string s ){
        cout<<"Having Fun inside Operator() in "<<s<<endl;
    }
};
class Person{
  public:
  string name;
  int age;
  Person(){

  }
  Person(string n,int a){
      name = n;
      age = a;
  }
};
class PersonComapre{
  public:
  bool operator()(Person A, Person B){
      return A.age>B.age;   //currently this use for younger age 
                           //if we change the sign to < then it will give older age 
                           // we can also do this by naming alphabetical order by raplacing age to name 
  }

};

int main()
{
    int n;
    cin>>n;
    priority_queue<Person,vector<Person>,PersonComapre>pq;
    for(int i =0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;
        Person P(name,age);
        pq.push(P);
    }
    int k =3;
    for(int i =0;i<k;i++){
      Person p = pq.top();
      cout<<p.name<<" "<<p.age<<endl;
      pq.pop();

    }
   
    return 0;
}