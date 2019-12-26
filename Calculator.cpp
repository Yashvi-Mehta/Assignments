#include<iostream>
using namespace std;
class Calculator
{
	float num1,num2;
	void getNum()
	{
		cout<<"Enter 2 numbers\n";
		cin>>num1;
		cin>>num2;
	}
	public:
	float addition()
	{
		getNum();
		return num1+num2;
	}
	float subtraction()
	{
		getNum();
		return num1-num2;
	}
	float multiplication()
	{
		getNum();
		return num1*num2;
	}
	float division()
	{
		getNum();
		return num1/num2;
	}
};
int main()
{
	int n;
	Calculator calculator;
	cout<<"Menu choice. Enter your option.\n";
	cout<<"1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n";
	cin>>n;
	switch(n){
		case 1:cout<<"Addition is "<<calculator.addition();
				break;
		case 2:cout<<"Subtraction is "<<calculator.subtraction();
				break;
		case 3:cout<<"Multiplication is "<<calculator.multiplication();
				break;
		case 4:cout<<"Division is "<<calculator.division();
				break;
		default:cout<<"Wrong input.";
			}
}
