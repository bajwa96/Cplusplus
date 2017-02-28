#include<iostream>
using namespace std;
class Person
{
protected:
    char name[100];
    char gender;
public:
    void ReadData();
    void DisplayData();
};
class Student:public Person
{
protected:
    int rollno;
    char branch[20];
public:
    void ReadData();
    void DisplayData();
};
class Exam:public Student
{
protected:
    int marks[3];
    int total;
public:
    Exam();
    void ReadData();
    void DisplayData(Exam[],int);
};

void Person::DisplayData(){
	
}
void Person::ReadData(){
	
}

void Student::ReadData(){
	
}

void Student::DisplayData(){
	
}

void Exam::DReadData(){
	
}
void Exam::DisplayData(Exam[],int){
	
}
int main()
{
    int n;
    cin>>n;
    Exam objannual[100];
    for(int i=0;i<n;i++)
    {
    objannual[i].ReadData();
    }
    objannual[0].DisplayData(objannual,n);
    return 0;
}
