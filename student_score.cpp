#include<iostream.h>

class Student{
	int id;     //ѧ��ѧ�š�
    char yuwen; //���ĳɼ����弶���ƣ�A��B��C��D��E��������Ч����
    float shuxue;  // ��ѧ�ɼ����ٷ��ƣ���
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
		cout<<"  ѧ��: "<<id<<",���ĳɼ�: "
			<<yuwen<<",��ѧ�ɼ�: "<<shuxue<<endl;
}

void Student::Change( ){
	cout<<"������ѧ����ѧ�š����ĳɼ�(�弶���ƣ�A/B/C/D/E��������Ч)����ѧ�ɼ���\n";
	cin>>id>>yuwen>>shuxue;
}

void Student::Comp(Student &a, Student &b){
	Student max,min;
	max= shuxue>a.shuxue?(shuxue>b.shuxue? *this:b):(a.shuxue>b.shuxue?a:b);
	min= shuxue<a.shuxue?(shuxue<b.shuxue? *this:b):(a.shuxue<b.shuxue?a:b);
	cout<<"��ѧ�ɼ���ߺ���͵�ѧ���ֱ��ǣ�\n";
	max.Print();
	min.Print();
}