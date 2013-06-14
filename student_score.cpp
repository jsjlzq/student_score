#include<iostream.h>

class Student{
	int id;     //学生学号。
    char yuwen; //语文成绩（五级分制：A、B、C、D和E，其它无效）。
    float shuxue;  // 数学成绩（百分制）。
public:
	Student(){id=0, yuwen=NULL;shuxue=0;}
	Student(int,char,float);
	void Print( );
	void Change( );
	void Comp(Student &a, Student &b);
};

void main(){
	Student A(78,'E',86),B(84,'D',82),C;
	C.Change();
	A.Comp(B,C);

}


Student::Student(int a,char b, float c){
	id=a, yuwen=b;shuxue=c;
}

void Student::Print( ){ 
		cout<<"  学号: "<<id<<",语文成绩: "
			<<yuwen<<",数学成绩: "<<shuxue<<endl;
}

void Student::Change( ){
	cout<<"请输入学生的学号、语文成绩(五级分制：A/B/C/D/E，其它无效)和数学成绩：\n";
	cin>>id>>yuwen>>shuxue;
}

void Student::Comp(Student &a, Student &b){
	Student max,min;
	max= shuxue>a.shuxue?(shuxue>b.shuxue? *this:b):(a.shuxue>b.shuxue?a:b);
	min= shuxue<a.shuxue?(shuxue<b.shuxue? *this:b):(a.shuxue<b.shuxue?a:b);
	cout<<"数学成绩最高和最低的学生分别是：\n";
	max.Print();
	min.Print();
}