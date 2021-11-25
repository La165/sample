#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
          public:
             student()
	   {
	     rno=1201;
	     name="prasuna";
	     marks=500;
      }
      student(int rn,string nm)
      {
      	rno=rn;
      	name=nm;
      	marks=600;
      }
      student(int rn,string nm,float n)
      {
      	rno=rn;
      	name=nm;
      	marks=n;
      }
      void display()
      {
      	cout<<"\n RNO:"<<rno;
      	cout<<"\n NAME:"<<name;
      	cout<<"\n MARKS:"<<marks;
      }
};
int main()
{
	student s1;
	s1.display();
	student s2(1201,"prasuna");
	s2.display();
	student s3(1201,"prasuna",700);
	s3.display();
	return 0;
}

