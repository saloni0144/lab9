//q17vi strstr

//library
#include<iostream>
#include<cstring>
using namespace std;

int fstrlen(char a[])
{ 
    char *p;
    int i=0;
    p=a;
    while(*p!='\0')
    {i++;p++;}
return i;
}

int fstrstr(char a[],char b[])
{
    char *p,*q,*r;
    int l=fstrlen(b),n=fstrlen(a);
    l=n-l+1;
    p=a;
    while(*p!=a[l])
    {
        q=b;
        if(*p==*q)
        {
            r=p;
            while(*q==*r && *q!='\0')
            {r++;q++;}
         if(*q=='\0')
         return 1;
         }
          p++;
          }
          return 0;
}
//main function
int main()
{
     int k;
     char a[15],b[15];
     cout<<"type the main string that u want "<<endl;
     cin>>a;
     cout<<"Enter the substring "<<endl;
     cin>>b;
        k=fstrstr(a,b);
        if (k==1)
        cout<<"hey,the substring is present in the string"<<endl;
        else 
        cout<<"The substring is not present in the string"<<endl;

return 0;
} 

