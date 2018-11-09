//q13Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

//including the library

#include<iostream>
using namespace std;

//main function
int main()
{
    //declaring array foo
    int foo[10]={1,2,3,4,5,6,7,8,9,10};

    //pointer
    int *x;

    //part 1
    cout<<"Printing the array elements with normal index method"<<endl;

    //using for loop
    for(int i=0;i<10;i++){
    cout<<foo[i]<<" "<<endl;
    }
    
    //part 2
    cout<<"Printing the array elements with pointer method"<<endl;

    //pointing 
    x=foo;
    
    
    for(int i=0;i<10;i++){
    cout<<*x<<endl;
    x++;
    }
    
return 0;
}

