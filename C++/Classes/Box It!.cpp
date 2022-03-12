#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

class Box
{
private:
    int l, b, h;

public:
    Box() : l(0), b(0), h(0)
    {
    }
    Box(int l, int b, int h) : l(l), b(b), h(h)
    {
    }
    Box(Box &bx) : l(bx.l), b(bx.b), h(bx.h)
    {
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    friend bool operator<(Box bo,Box bx)
    {
        return bo.l < bx.l ||( (bo.b < bx.b) && (bo.l == bx.l)) ||( bo.h < bx.h && bo.b == bx.b && bo.l == bx.l);
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    friend ostream &operator<<(ostream &os, Box &bx);
};
ostream &operator<<(ostream &os, Box &bx)
{
    os << bx.l << " " << bx.b << " " << bx.h;
    return os;
}
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("..\\..\\1-in.txt", "r", stdin);
    freopen("..\\..\\3-out.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);


    check2();

    // Box b1; // Should set b1.l = b1.b = b1.h = 0;
    // Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
    // cout << b2.getLength() << endl;                      // Should return 2
    // cout<<b2.getBreadth()<<endl; // Should return 3
    // cout<<b2.getHeight()<<endl;	// Should return 4
    // cout<<b2.CalculateVolume()<<endl; // Should return 24
    // bool x = (b1 < b2);	// Should return true based on the conditions given
    // cout << x;
    // cout<<b2; // Should print 2 3 4 in order.

    return 0;
}
