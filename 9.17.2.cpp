//q17ii

//include libraries
#include<iostream>
#include<cstring>
using namespace std;

void fstrcat()
{
    char a[20],b[20],*m,*p;
    cout<<" lets enter string1 "<<endl;
    cin>>a;
    cout<<"lets enter string2 "<<endl;
    cin>>b;
    p=b;
    m=a;
        while(*m!='\0')
        m++;
        while(*p!='\0')
       {
       *m=*p;
        p++;
        m++;
           if (*p=='\0')
           *m='\0';
        }
    m=a;
    cout<<"Resulting string12 is "<<endl;
    while(*m!='\0')
    {
    cout<<*m;
    m++;}
    }

int main()
{ 
   fstrcat();
   cout<<"\n";

return 0;
}

