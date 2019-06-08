#include<iostream>
using namespace std;
class point 
{
	public:
		friend istream& operator >>(istream& in,point& t);
		friend ostream& operator <<(ostream& os,point& t);
		
		point operator+(point t)
		{
			point c;
			c.x=x+t.x;
			c.y=y+t.y;
			return c;
		}
		point operator-(point& t)
		{
			point c;
			c.x=x-t.x;
			c.y=y-t.y;
			return c;
		}
		bool operator ==(point& t)
		{
			if(x==t.x&&y==t.y)
				return true;
				else return false;
		}
		bool operator !=(point& t)
		{
			if(x!=t.x||y!=t.y)
				return true;
				else return false;
		}
	private:
		int x;
		int y;
};
istream& operator >>(istream& in,point& t)
		{
			in>>t.x>>t.y;
			return in;
		}

ostream& operator <<(ostream& os,point& t)
		{
			os<<"(" <<t.x<<","<<t.y<<")"<<endl;
			return os;
		}
main()
 {
    point  x,y,z1,z2;
      cin>>x>>y;
       z1=x+y;
       z2=x-y;
      cout<<z1<<z2;

    if(x==y)   cout<<"x==y"<<endl;
      else   cout<<"x!=y"<<endl;

    if(z1!=z2)   cout<<"z1!=z2"<<endl;
      else   cout<<"z1==z2"<<endl;
 
 }

