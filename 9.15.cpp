//q15.We want to show string repeatedly by shifting top character of string to right. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement. 


//including library
#include<iostream>
using namespace std;

//main function
int main()
{
    char a[20],*p,*i;
    cout<<"\nInput a string which has length less than 20 characters "<<endl;
    cin>>a;
 
    i=a;
    while(*i!='\0')
    {
    p=i;
        while(*p!='\0')
        {
        cout<<" "<<*p;
        p++;
        }
    cout<<endl;
    i++;
    }
    
return 0;
}



//including library
#include<iostream>
using namespace std;

//main function
int main()
{
    char a[20],*p,*i;
    cout<<"\nInput a string of length less than 20 characters "<<endl;
    cin>>a;
 
    i=a;
    while(*i!='\0')
    {
    p=i;
        while(*p!='\0')
        {
        cout<<" "<<*p;
        p++;
        }
    cout<<endl;
    i++;
    }
    
return 0;
}


