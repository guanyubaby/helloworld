#include<iostream>
using namespace std;
class point
{
	public:
		point(){x=0;y=0;};
		point(int a,int b):x(a),y(b){};
	//	void display(){cout<<"������:("<<x<<","<<y<<")"<<endl;};
		friend  ostream & operator<<(ostream &os,point&p);
		point operator+(point &a){
			point c;
			c.x=a.x+x;
			c.y=a.y+y;
			return c;
			
		};
	private:
		int x;
		int y;
	
	
};

ostream & operator<<(ostream &os,point&p)
{
	os<<"������:("<<p.x<<","<<p.y<<")"<<endl;

	return os;
};
main()
{
	point p(3,4),x(1,2);
	//p.display();
	point sum=p+x;
	cout<<sum;
	cout<<"hello world"<<endl;
}
