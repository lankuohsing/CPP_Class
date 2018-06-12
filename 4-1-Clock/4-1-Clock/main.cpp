#include<iostream>
using namespace std;
class Clock{
public:
	Clock ( int newH, int newM, int newS );
	
	Clock ( ){
		hour = 0;
		minute - 0;
		second = 0;
	}
	void setTime ( int newH = 0, int newM = 0, int newS = 0 );
	void showTime ( );
private:
	int hour, minute, second;
};

//时钟类成员函数的具体实现

Clock::Clock ( int newH, int newM, int newS ){
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::setTime ( int newH, int newM, int newS ){
	hour = newH;
	minute = newM;
	second = newS;
}
inline void Clock::showTime ( ){
	cout << hour << ":" << minute << ":" << second << endl;
}
//主函数
int main ( ){
	Clock myClock(1,1,1);
	cout << "First time set and output:" << endl;
	//myClock.setTime ( );
	myClock.showTime ( );
	cout << "Second time set and output:" << endl;
	myClock.setTime ( 8, 30, 30 );
	myClock.showTime ( );
	Clock myClock1 ( myClock );
	myClock1.showTime ( );
	system ( "pause" );
	return 0;
}