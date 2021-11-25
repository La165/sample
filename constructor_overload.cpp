#include<iostream>
using namespace std;
class num
{
	int a,b;
	public:
		num()
		{
			a=10,b=20;
		}
		num(int x,int y)
		{
			a=x;
			b=y;
		}
		void add()
		{
			cout<<"sum of"<<a<<"and"<<b<<"is"<<a+b<<endl;
		}
};
int main()
{
	num n;
	n.add();
	num x(1,2);
	x.add();
	return 0;
}
