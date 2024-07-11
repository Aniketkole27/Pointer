#include<iostream>
using namespace std;

int getSum(int *ptr,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += ptr[i]; // ans[i] == *(ans + i)
    }
    return sum;
}

int main(){

    // int n = 10; // static memory - stack memory 
    // new int; // dynamic memory -  heap memory

    // int *num = new int;
    // cout << num << endl;

    // char ch = 'q'; // 1 byte
    // char *c = &ch; // 8 byte = Total - 9 byte required
     
    // cout << sizeof(ch) << endl;
    // cout << sizeof(c) << endl;

    // solution of Problem
    // int n;
    // cin >> n;
    // int *ptr = new int[n];

    // for(int i = 0;i<n;i++){
    //     cin >> ptr[i];
    // }
    
    // int ans = getSum(ptr,n);
    // cout << "Answer is " << ans << endl;

    // infinity loop with static menory
    // while(1){
    //     int i = 5;
    // }

    // infinity loop with dynamic memory
    // while(1){
    //     int *p =  new int;
    // }

    // Deleting of dynamic mamory 
    int *a = new int;
    *a =  10;
    cout << *a << endl;

    delete a;
    cout << *a << endl;

    // deleting array
    int *arr = new int[50];
    delete []arr;

}