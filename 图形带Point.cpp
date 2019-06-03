#include <iostream>
#include <string>
using namespace std;
class Point 
{
	public:
	Point(int xx,int yy):x(xx),y(yy){};

		int x;
		int y;
};
class Figure: public Point
{
	public:
		Figure(int x,int y):Point(x,y){}
		virtual void draw()=0;
		
};
class Circle:public Figure
{
	public:
		Circle(int a,int b,int c):Figure(a,b),radius(c){};
		void move(Point p){x=p.x;y=p.y;};
		void draw()
		{
			cout<<"A circle with center ("<<x<<", "<<y<<") and radius "<<radius<<"."<<endl;
		};
	protected:
		int radius;
	
};
class Square:public Figure
{
	public:
		Square(int a,int b,int c,int d):Figure(a,b),length(c),axis(d){};
		void rotate(int t){axis=t;};
		void draw()
		{
			cout<<"A square with center ("<<x<<", "<<y<<") side length "<<length<<". The angle between one side and the X-axis is "<<axis<<"."<<endl;

		};
	protected:
		int length;
		int axis;
	
};

int main()
 {
 Circle c(1,2,3); //����Բ�Σ�������Բ�ġ��뾶
Square s(4,5,6,0); //�������Σ�������
Figure *f = &c, &g = s;  //����ָ��ָ���������
f->draw();  //��Բ��
c.move(Point(2, 2));  //��Բ�ƶ�����2��2��λ��
f->draw();  //��Բ��
g.draw(); //������
s.rotate(1); //��ת����
g.draw();
 return 0;
 }


