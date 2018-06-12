#include<iostream>
#include<cstdlib>
using namespace std;
struct Student{
	int id;
	float gpa;

};
template<class T>
class Store{
private:
	T item;
	bool haveValue;
public:
	Store ( );
	T &getElem ( );//提取数据函数
	void putElem ( const T &x );//存入数据函数

};
//各成员函数
template<class T>
Store<T>::Store ( ) :haveValue ( false ){}//默认构造函数
template<class T>
T &Store<T>::getElem ( ){
	if ( !haveValue ){
		cout << "No item present!" << endl;
		exit ( 1 );
	}
	return item;
}
template<class T>
void Store<T>::putElem ( const T &x ){
	haveValue = true;
	item = x;
}
int main ( ){
	Store<int>s1, s2;
	s1.putElem ( 3 );
	s2.putElem ( -7 );
	cout << s1.getElem ( ) << " " << s2.getElem ( ) << endl;
	Student g = { 1000, 23 };
	Store<Student>s3;
	s3.putElem ( g );
	cout << "The student id is " << s3.getElem ( ).id << endl;
	Store<double>d;
	//cout << "Retrieving object d...";
	//cout << d.getElem ( ) << endl;
	system ( "pause" );
	return 0;
}