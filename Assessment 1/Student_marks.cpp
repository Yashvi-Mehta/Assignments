#include<iostream>
using namespace std;
class Student{
	/* 5 subject marks+total+avg*/
	int student_id;
	string student_name;
	float english_marks,math_marks,physics_marks;
	float total_marks,average_marks;
	bool isMarksValid(int marks)
	{
		if(marks<1|marks>100)
		return false;
		else
		return true;
	}
	public:
		Student()
		{
			student_id=0;
			english_marks=0;
			math_marks=0;
			physics_marks=0;
			total_marks=0;
			average_marks=0;
			
		}
		void getDetails()
		{
			cout<<"Enter your student id\n";
			cin>>student_id;
			if(student_id<=0||student_id>50)
			{
				cout<<"Invalid Student Id.Please enter correct id\n";
				cin>>student_id;
			}
			cout<<"Enter your name\n";
			cin>>student_name;
			cout<<"Enter your English marks out of 100\n";
			cin>>english_marks;
			if(!isMarksValid(english_marks))
			{
				cout<<"Invalid english marks. Should be in range 1-100.\nPlease enter correct marks\n";
				cin>>english_marks;
				if(!isMarksValid(english_marks))
				{
					cout<<"Again invalid input.\nProgram Terminated\n";
					return;
				}
			}
			cout<<"Enter your Math marks out of 100\n";
			cin>>math_marks;
			if(!isMarksValid(math_marks))
			{
				cout<<"Invalid math marks. Should be in range 1-100.\nPlease enter correct marks\n";
				cin>>math_marks;
				if(!isMarksValid(math_marks))
				{
					cout<<"Again invalid input.\nProgram Terminated\n";
					return;
				}
			}
			cout<<"Enter your Physics marks out of 100\n";
			cin>>physics_marks;
			if(!isMarksValid(physics_marks))
			{
				cout<<"Invalid physics marks. Should be in range 1-100.\nPlease enter correct marks\n";
				cin>>physics_marks;
				if(!isMarksValid(physics_marks))
				{
					cout<<"Again invalid input.\nProgram Terminated\n";
					return;
				}
			}
			total_marks=english_marks+math_marks+physics_marks;
			average_marks=total_marks/3;
			
		}
		void printDetails()
		{
			//cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Student Details~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			//cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		//	cout<<"Student Id\tStudent Name\tEnglish Marks\tMath Marks\tPhysics Marks\tTotal Marks\tAverage Marks\n";
			//cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<student_id<<"\t\t"<<student_name<<"\t\t"<<english_marks<<"\t\t"<<math_marks<<"\t\t"<<physics_marks<<"\t\t"<<total_marks<<"/300\t\t"<<average_marks<<"/100"<<endl;
			//cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}

};
int main()
{
	Student student1;
	Student student2;
	Student student3;
	student1.getDetails();
	student2.getDetails();
	student3.getDetails();
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Student Details~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	//cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"Student Id\tStudent Name\tEnglish Marks\tMath Marks\tPhysics Marks\tTotal Marks\tAverage Marks\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	student1.printDetails();
	student2.printDetails();
	student3.printDetails();
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	return 0;
	
}
