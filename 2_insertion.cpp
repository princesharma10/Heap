
// INCOMPLETE CODE 

#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int>v;
    bool minHeap;
    //compare function for min and max heap 
    bool compare(int a ,int b){
        if(minHeap){
            return a<b;
        }
        else{
            return a>b;
        }
    }
public:
     Heap(int default_size = 10, bool type = true){
          v.reserve(default_size);
          v.push_back(-1); //blocking the zeroth index with insertinf -1 character 
          minHeap = type ;
     }
     void push(int d){
         v.push_back(d);
         int idx = v.size()-1; //getting the index of last indec where element is store 
         int parent = idx/2;
         //keep pushing to the top till you reach a root node or stop node or stop midway because condtion is satisfy
         while(idx>1 and compare(v[idx],v[parent])){
             swap(v[idx],v[parent]);
             idx = parent;
             parent = parent/2;
         }

     }


};


int main(){

    return 0;
}