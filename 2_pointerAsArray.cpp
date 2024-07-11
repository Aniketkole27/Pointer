#include<iostream>
using namespace std;
int main(){
 
    int arr[10] = {2,5,6};

    cout << "1st = " << arr << endl; // address of 1st location
    cout << "2nd = " << &arr[0] << endl; // same as above 
    cout << "3rd = " << arr[0] << endl; // value of 0th index

    cout << "4th = " << *arr << endl; // value 1st element in array
    cout << "5th = " << *arr + 1 << endl; // 1st element = 2 + 1 = 3
    cout << "6th = " << *(arr + 1) << endl; // +1 mean it shift by one block so - 5
    cout << "7th = " << (*arr) + 1 << endl; // same as 5th
    cout << "8th = " << arr[2] << endl; // 3rd element of 2nd index
    cout << "9th = " << *(arr + 2) << endl; // same as above
    cout << endl;
    // arr[i] = *(arr + i) // like 8th and 9th

    int temp[10] = {1,2,3};
    cout << "I = " << sizeof(temp) << endl; // size of entire array

    int *ptr = &temp[0]; // &temp[0] == temp != &temp // Put ERROR
    // int *ptr = temp;
    cout << "II = " << sizeof(ptr) << endl; // size of pointer
    cout << "III = " << sizeof(*ptr) << endl; // size of block which pointer pointed
    cout << "IV = " << sizeof(&ptr) << endl; // same as II
    cout << "V = " << sizeof(temp) << endl;
    cout << "VI = " << sizeof(*temp) << endl; // size of 1st block in the array
    cout << "VII = " << sizeof(&temp) << endl; // 8
    cout << "&temp = " << &temp << endl;
    cout << "temp = " << temp << endl;
    cout << endl; 


    int a[10] = {1,2,3,4,5};

    cout << "A = " << &a[0] << endl;
    cout << "B = " << &a << endl;
    cout << "C = " << a << endl; // all above A, B, C are same

    int *p = &a[0]; // you can use a[0] or a , but you can't use &a = ERROR

    cout << "D = " << *p << endl; // 1
    cout << "E = " << p << endl; // address of 1st location
    cout << "F = " << &p << endl; // actual address of p pointer
    cout << endl;

    // //   Symbol Table Address can't be changed

    int arr2[10];
    // arr2 = arr2 + 1; // ERROR 
    int *ptr2 = arr2;
    cout << "Before = " << ptr2 << endl;
    ptr2 = ptr2 + 1; // Shift to next block // This is Possible // Not ERROR
    cout << "After = " << ptr2 << endl;
     cout << endl;

    // // String Array
    int arr3[5] = {1,2,3,4,5};
    char ch[5] = "abcd"; //  char array end when \0 is occure

    cout << "arr3 = " << arr3 << endl; // location of 1st element
    cout << "ch = " << ch << endl; // print entire  array

    int *i = &arr3[0]; /// or arr3
    char *c = &ch[0]; // or ch

    cout << "i = " << i << endl; // location of 1st element
    cout << "c = " << c << endl; // entire character array
    cout << "*i = " << *i << endl;// First element of array
    cout << "*c = " << *c << endl; // same as above
    cout << sizeof(arr3) << endl; // number of element 5 * 4 =  20
    cout << sizeof(ch) << endl; // 5 only the number of element
    cout << endl;
    // cout function implimentation diffently for character array

    char cha[7]= "aniket";
    char *h = "aniket"; // Not do this WORRONING bad practice 

    cout << *h << endl;
    cout << h << endl;

} 