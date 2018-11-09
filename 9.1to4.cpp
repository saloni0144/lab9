ques.1 
1]*p3 = S
3] p3 = T'F���
2]*p3 = T
4]*p1 = S
5] p1 = S'F���


ques2.
Option D. *p=75 changes the value of i to 75 

gues3. 
error: cannot convert ‘char*’ to ‘double*’ in initialization
 double *p = &c;
This is the message that is displayed. it happens as c is a char variable and p stores double varibles. 
here, correct code will be(double*)&<char>

ques4
 char blocks[3] = {'A','B','C'};
   char *ptr = &blocks[0];
   char temp;
   
  CODE                      OUTPUT
  temp = blocks[0];         [A]
  temp = *(blocks + 2);     [C]
  temp = *(ptr + 1);        [B]
  temp = *ptr;              [A]

  ptr = blocks + 1;         [A]
  temp = *ptr;              [B]
  temp = *(ptr + 1);        [C]

  ptr = blocks;             [C]
  temp = *++ptr;            [B]
  temp = ++*ptr;            [C]
  temp = *ptr++;            [C]
  temp = *ptr;              [C]
