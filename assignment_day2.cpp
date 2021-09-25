#include<iostream>
using namespace std;
//Structure definition/declaration
struct Student
{
int roll;
float marks;
};
int main()
{
//pointer definition
Student *ptr= new Student;
//input
ptr->roll=9;
ptr->marks=99.9;
//printing details
cout<<"Roll no. of student : "<<ptr->roll<<"\nMarks obtained by the student : "<<ptr->marks<<endl;

}
