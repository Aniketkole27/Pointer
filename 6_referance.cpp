#include<iostream>
using namespace std;

// call by value - new copy of a variable created 
void updata(int n){
    n++;
}

// Call by referance - same memory but different name 
void update_ref(int &n){
    n++;
}

// returning the referance variable 
int& fun(int a){
    int num = a;
    int& ans = num;
    return ans;  // these variables are local variables thise valid within brackets
} 

int* func(int n){
    int *ptr = &n;
    return ptr;
}

int main(){
    
    int i = 5;
    int &j = i;

   /* 
    cout << i << endl;
    cout << j << endl;
    j++;
    cout << j << endl;
    cout << i << endl; 
  */

    int n = 10;
    cout << "Before = " << n << endl;
    // updata(n);
    // update_ref(n);
    // cout << "After = " << n << endl;
    
    int p =  fun(n);
    cout << p << endl;

    // cout << func(8);
}