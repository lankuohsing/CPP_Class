#include<iostream>
using namespace std;
class Point{
public:
	Point ( int xx = 0, int yy = 0 ){//������������ʽ���
		x = xx;
		y = yy;
	}
	Point ( Point &p );//���ƹ��캯��
	int getX ( ){
		return x;
	}
	int getY ( ){
		return y;
	}
private:
	int x, y;

};
Point::Point ( Point &p ){
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;

}
//�β�ΪPoint�����ĺ���
void fun1 ( Point p ){
	cout << "fun1(): " << p.getX ( ) << endl;
}
//�β�ΪPoint���������õĺ���
void fun1_1 ( Point &p ){
	cout << "fun1_1(): "<<p.getX ( ) << endl;
}
//����ֵΪPoint�����ĺ���
Point fun2 ( ){
	cout << "fun2():" << endl;
	Point a ( 1, 2 );
	return a;
}
//������
int main ( ){
	Point a ( 4, 5 );
	Point b = a;
	cout << b.getX ( ) << endl;
	fun1 ( b );
	fun1_1 ( b );
	b = fun2 ( );
	cout << b.getX ( ) << endl;
	system ( "pause" );
	return 0;

}