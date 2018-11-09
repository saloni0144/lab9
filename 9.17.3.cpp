//q17iii


#include<iostream>
#include<cstring> 
using namespace std;

//function
int fstrchr(char a[],char o)
{
    char *p;int n=0;
    p=a;
    while(*p!='\0')
    {
        if(*p==o)
        n++;
        p++; 
    }
return n;
}

//main function
int main()
{
        char a[20],o;
        int g;
        cout<<"type a string with repeating elements "<<endl;            
        cin>>a;
        cout<<"type a character you want to search "<<endl;
        cin>>o;
        g = fstrchr(a,o);   
        cout<<" no. of times "<<o<<" repeated in the string = "<<g;

return 0;
}


