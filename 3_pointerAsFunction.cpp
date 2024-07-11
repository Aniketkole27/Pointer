#include<iostream>
using namespace std;

// Simple print function
void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    p = p + 1; 
    cout<< "Inside = " << p << endl; // value is updated for only update function 
}

// Update function
void up_date(int *p){
    *p = *p + 1;
    // cout << *p << endl; // hear the value is change for both inside and outside
}

int main(){

   int value = 5;
   int *p = &value;

   // Function call
   print(p);

   // No change
   cout << "Before = " << p << endl; 
   update(p);   
   cout << "After = " << p << endl;
   
   // This will change
   cout <<"Before *p = " << *p << endl;
   up_date(p);
   cout << "After *p = " << *p << endl;
   cout << endl;


}