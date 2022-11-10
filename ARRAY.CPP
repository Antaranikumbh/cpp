#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{
 int a[10],i,n,j,k,item;
 public:
 void get();
 void insert();
 void del();
 void disp();
};

void demo:: get()
{
 cout<<"\n enter n:";
 cin>>n;
 cout<<"\n enter array element :";
 for(i=1;i<=n;i++)
 cin>>a[i];
}
void demo:: insert()
{
 cout<<"\n enter position :";
 cin>>k;
 cout<<"\n enter item:";
 cin>>item;
 for(i=1;i<=n;i++)
 j=n;
 while(j>=k)
 {
  a[j+1]=a[j];
  j--;
 }
 a[k]=item;
 n++;
}
void demo:: del()
{
 cout<<"\n enter position :";
 cin>>k;
 j=k;
 for(i=1;i<=n;i++)
 while(j<=n-1)
 {
 a[j]=a[j+1];
 j++;
 }
 n--;
}
void demo:: disp()
{
 cout<<"\n elements are:";
 for(i=1;i<=1;i++)
 cout<<a[i]<<"\t";
}
void main()
{
 clrscr();
 demo d;
 int ch;
 d.get();
 cout<<"\n 1. insert 2. Delete 3. Display 4. Exit \n";
 while(ch!=4)
 {
  cout<<"\n enter choice :";
  cin>>ch;
  switch(ch)
  {
  case 1:d.insert(); break;
  case 2:d.del(); break;
  case 3:d.disp(); break;
  case 4:exit(0);
  }
 }
 getch();
}