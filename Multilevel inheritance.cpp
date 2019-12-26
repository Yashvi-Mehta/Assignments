#include<iostream>
using namespace std;
class Person
{
	char name[10];
	int age;
	protected:
		void setInfo()
		{
			cout<<"\nEnter name";
			cin>>name;
			cout<<"\nEnter age";
			cin>>age;
		}
	public:
		void getInfo()
		{
			setInfo();
			cout<<"\nName: "<<name<<"\nAge: "<<age;
		}
};
class Employee:public Person
{
	int deptid;
 protected:
	float sal;
	void setInfo()
	{
		cout<<"\nEnter department id";
		cin>>deptid;
		cout<<"\nEnter sal";
		cin>>sal;
	}
	public:
		void getInfo()
		{
   			Person p;
   			p.getInfo();
   			setInfo();
			cout<<"\nDepartment id: "<<deptid<<"\nSalary: "<<sal;
		}
		float getSal()
		{
			return sal;
		}
};
class Manager:public Employee
{
	int mgid;
	float mgsal;
	protected:
	Employee e;
	void setInfo()
	{
		cout<<"\nEnter manager id";
		cin>>mgid;
	}
	public:
		float getInfo()
		{
			//Employee e;
   			e.getInfo();
			setInfo();
			cout<<"\nMANAGER ID: "<<mgid;

			//cout<<"Salary"<<sal;
			return e.getSal();
		}
		float newSal()
		{
			return (getInfo()+4000);
		}
};
int main()
{
	Manager m;
	cout<<"\nNew Salary is "<<m.newSal();
	
}
