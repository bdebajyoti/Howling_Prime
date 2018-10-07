#include<iostream.h>
#include<conio.h>
void main()
{
 int n,i,t1=0,s=0,s1=0;
 clrscr();
 cout<<"\nEnter Any Number:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   t1++;
  }
 }
 if(t1==2)
 {
  cout<<"\nIt is Prime";
  while(n!=0)
  {
   s=s+n%10;
   n=n/10;
  }
   t1=0;
  for(i=2;i<=s/2;i++)
  {
   if(s%i==0)
   {
    t1=1;
    break;
   }
  }
  if(t1==0)
  {
   cout<<"\nHowling Prime";
  }
  else
   cout<<"\nNot";
  }
  else
   cout<<"\nIt is Not a Prime";
   getch();
  }




