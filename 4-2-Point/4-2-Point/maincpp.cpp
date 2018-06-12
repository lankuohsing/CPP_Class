#include<iostream>
using namespace std;
class Point{
public:
	Point ( int xx = 0, int yy = 0 ){//内联函数的隐式表达
		x = xx;
		y = yy;
	}
	Point ( Point &p );//复制构造函数
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
//形参为Point类对象的函数
void fun1 ( Point p ){
	cout << "fun1(): " << p.getX ( ) << endl;
}
//形参为Point类对象的引用的函数
void fun1_1 ( Point &p ){
	cout << "fun1_1(): "<<p.getX ( ) << endl;
}
//返回值为Point类对象的函数
Point fun2 ( ){
	cout << "fun2():" << endl;
	Point a ( 1, 2 );
	return a;
}
//主程序
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