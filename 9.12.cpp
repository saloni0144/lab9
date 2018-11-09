//q12.

//include the library
#include<iostream>
using namespace std;

//main function
int main()
{
    int x,y,*p;
    
    
    p=0;

    // lets declare the values for x and y
    x=2;
    y=7;

    //printing values initially before pointing
    cout<<"The initial values are: "<<"x = "<<x<<" y = "<<y<<" p = "<<p<<endl;

    //p to pointing to y
    p=&y;
    //value then stored to x
    x=*p;

    //final values
    cout<<"The final values are: "<<"x = "<<x<<" y = "<<y<<" p = "<<p<<endl;

return 0;
}


