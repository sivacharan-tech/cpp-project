#include<iostream>
using namespace std;
class Mobile
{
	string name;
	public:
	//Default constructor
	Mobile()
	{
		cout<<"Default constructor";
	}	
	
	Mobile(string m_name)
	{
		name=m_name;
		cout<<"Mobile name: "<<name;
	}
	
	Mobile(Mobile &m)	
	{
		name=m.name;
		cout<<"Mobile name: "<<name;
	}
	~Mobile()
	{
		cout<<"Destructor";
	}	

};

main()
{
	Mobile m;
	Mobile m1("Samsung");
	Mobile m2(m1);	
}
