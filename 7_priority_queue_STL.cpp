/*
   Time complexity of opeartions:
   1. Push = O(Log N)
   2. Pop = O(Log N)
   3. Top = O(1)
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;  //This is for max heap
    //u can convert it in in min heap by adding the greater int i am write that line of code in below 
    //priority_queue<int,vector<int>,greater<int> >pq;    this will use for min heap 
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int no;
        cin>>no;
        pq.push(no); //O(Log N)
    }
    //Remove the elements from the heap 
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }


    return 0;
}