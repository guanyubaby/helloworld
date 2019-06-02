#include<iostream>
using namespace std;
//多态练习
class point
{
	public:
		point(double a=0,double b=0):x(a),y(b){};
		void setpoint(double a,double b){x=a,y=b;}
		double getx()const {return x;};
		double gety()const {return y;};	
		virtual void display(){cout<<" ";
		};
		friend ostream &operator<<(ostream &,const point &);
	private:
		double x,y;
}; 
ostream & operator<<(ostream &output,const point &p)
{
	output<<"横坐标是："<<p.x<<"纵坐标是"<<p.y<<endl;
	return output; 
}
class circle :public point
{
	public:
		circle(double a,double b):x(a),y(b){};
		virtual void display(){cout<<"中心点的横坐标是："<<x<<"中心点的纵坐标是"<<y<<endl;};
	private:
		double x,y;
};
class yuanzhu :public point
{
	public:
		yuanzhu(double a,double b):x(a),y(b){};
		virtual void display(){cout<<"圆柱的横坐标是："<<x<<"圆柱的纵坐标是"<<y<<endl;};
	private:
		double x,y;
};
int main()
{
	point p(1,2);
	cout<<p<<endl;
	p.setpoint(3,4);
	cout<<p<<endl;
	yuanzhu aa(6,7);
	circle  bb(8,9);
	point *pt=&aa;
	pt->display();
	pt=&bb;
	pt->display();
	
	 
	
}
