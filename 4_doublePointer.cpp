#include<iostream>
using namespace std;

 void update(int **p2){
    // p2 = p2 + 1;
    // NO change

    // *p2 = *p2 + 1;
    // YES change in p

    **p2 = **p2 + 1;
    // YES change in i
    

 }

int main(){

        int value = 5;
        int* ptr = &value;
        // int* - 1. we know the type of Datatype
        //        2. Clarify the Number of byte to be consider
        // pointer ptr = &value  - NOT be used

     
        int   i = 5;
        int*  p = &i; // pointer
        int** p2 = &p; // Double pointer
       /*  
         // Differant way to access the values of variable
        // Print contaner of i
        cout << "i = " << i << endl;
        cout << "*p = " << *p << endl; 
        cout << "**P = " << **p2 << endl;    
        cout << endl;

        // Print Contaner of p
        cout << "&i = " << &i << endl;
        cout << "p = " << p << endl;
        cout << "*p2 = " << *p2 << endl;
        cout << endl;

        // Print contaner of p2
        cout << "&p = " << &p << endl;
        cout << "p2 = " << p2 << endl;
        cout << endl;
         */

    
      cout << "--  Before  --" << endl;
      cout << "i = " << i << endl;
      cout << "p = " << p << endl;
      cout << "p2 = " << p2 << endl; 
      cout << endl;
      update(p2);
      cout << "--  After  --" << endl;
      cout << "i = " << i << endl;
      cout << "p = " << p << endl;
      cout << "p2 = " << p2 << endl; 
      cout << endl;



}