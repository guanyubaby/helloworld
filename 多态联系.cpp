#include<iostream>
using namespace std;
//��̬��ϰ
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
	output<<"�������ǣ�"<<p.x<<"��������"<<p.y<<endl;
	return output; 
}
class circle :public point
{
	public:
		circle(double a,double b):x(a),y(b){};
		virtual void display(){cout<<"���ĵ�ĺ������ǣ�"<<x<<"���ĵ����������"<<y<<endl;};
	private:
		double x,y;
};
class yuanzhu :public point
{
	public:
		yuanzhu(double a,double b):x(a),y(b){};
		virtual void display(){cout<<"Բ���ĺ������ǣ�"<<x<<"Բ������������"<<y<<endl;};
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
