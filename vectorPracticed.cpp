#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int>& v){
  for(auto& i:v){
    cout<<i<<" ";
  }
  cout<<"\n";
}


int main(){

vector<int>v{1,2,3,4};

// push_back() and pop_back()

v.push_back(8);
Display(v);  //pushes the element to end 1 2 3 4 8
v.pop_back();
Display(v);  // discards last element - 1 2 3 4

//to print just last and first elements without modifying the vector

cout<<"first: "<<v.front()<<"\nLast: "<<v.back()<<endl;

//to print occupication of vector
cout<<"Size:"<<v.size()<<"\nCapacity: "<<v.capacity()<<"\nMaximum size: "<<v.max_size()<<endl;

//emplace usage
v.emplace(v.begin()+2,6);
v.emplace_back(7);
Display(v);

//insert use

//first argument must be a pos and second should be a value kind
v.insert(v.begin()+3,3);
Display(v);

//inserting a another iterative objects content
int arr[] = {10,11,9};


v.insert(v.end()-2,arr,arr+ sizeof(arr)/sizeof(arr[0]));

Display(v);

//erase method
// This will erase the element of pos - sent. or range of pos
v.erase(v.begin());
Display(v);
v.erase(v.begin(),v.begin()+4);
Display(v);



return 0;
}
