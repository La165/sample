#include<iostream>
using namespace std;
class test
{
	int i;
	public:
		test()
		{
			cout<<"Default constructor"<<endl;
			i= 0;
		}
		test(int a)
		{
			cout<<"Parameterized constructor"<<endl;
			i=a;
		}
		test(const test&x)
		{
			cout<<"copy constructor"<<endl;
			i=x.i;
		}
		void show()
		{
			cout<<i<<endl;
		}
};
int main()
{
	test a;
	a.show();
	test b(100);
	b.show();
	test c(b);
	c.show();
}
