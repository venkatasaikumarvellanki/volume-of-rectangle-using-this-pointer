//volume of rectangle using this pointer
#include<iostream>
using namespace std;
class volume 
{
	int l,b,h;
	public:
		volume(int l,int b,int h)
		{
			this->l=l;  this->b=b;  this->h=h;
		}
		void a()
		{
			cout<<l*b*h;
		}
};
main()
{
	class volume obj(5,4,3);
	obj.a();
}
