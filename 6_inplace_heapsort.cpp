#include<bits/stdc++.h>
using namespace std;
bool minHeap = false;
bool compare(int a ,int b){
        if(minHeap){
            return a<b;
        }
        else{
            return a>b;
        }
    }
void heapify(vector<int>&v,int idx,int size){
        int left = 2*idx;
        int right = left +1;
        int min_idx = idx;
        int last = size-1;
        if(left <= last && compare(v[left],v[idx])){
            min_idx = left;
        }
        if(right <= last && compare(v[right],v[min_idx])){
            min_idx = right;
        }
        if(min_idx != idx){
            swap(v[idx],v[min_idx]);
            heapify(v,min_idx,size);
        }
    }
void print(vector<int>v){
    for(int x : v){
       cout<<x<<" ";
    }
    cout<<endl;
}
void buildheap(vector<int>&v){
    for(int i=2;i<v.size();i++){
        int idx = i;
        int parent = i/2;
        while(idx>1 and v[idx]>v[parent]){
            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }
}
void heapsort(vector<int>&arr){
    buildheap(arr);
    int n = arr.size();
    //remove n-1 elements from the heap
    while(n >1){
        swap(arr[1],arr[n-1]);
        //remove that element from the heap 
        n--;
        heapify(arr,1,n);
    }
}
int main(){
    vector<int>v;
    v.push_back(-1);
    int n ;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    heapsort(v);
    print(v);

    
    return 0;
    }