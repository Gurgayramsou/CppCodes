#include <iostream>
#include <vector>
#include <string>
using namespace std;

class College{
    public:
    string name;
    College(string name):name{name}{
    }
    void display(string& sname){
        cout<<"Hi "<<sname<<"\n"<<"you are in "<<name;
    }
   
};


int main(){
    string collegeName = "RNS";
    string studName = "Rama";
  College* c = new College(collegeName);
  c->display(studName);
return 0;
  }

