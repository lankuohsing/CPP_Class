#include <iostream>
#include<math.h>
using namespace std;
class Complex
{
public:
	Complex ( ){ real = 0; imag = 0; }
	Complex ( double r, double i ){ real = r; imag = i; }
	float abs ( ){ return sqrt ( real*real + imag*imag ); }
	Complex operator + ( Complex &c2 );  //�������+������Ϊ��Ա����
	friend ostream& operator << ( ostream&, Complex& );  //�������<<������Ϊ��Ԫ����
	friend istream& operator >> ( istream&, Complex& ); //���������������>>��
	//ǿ�ж���Ϊ��Ա�����Ļ���ܱ�Ť�����忴main����
	ostream & operator<<( ostream &output )
	{
		output << "(" << this->real << "+" << this->imag << "i)" ;
		return output;
	}
private:
	double real;
	double imag;
};

Complex Complex::operator + ( Complex &c2 )//�����������+�����غ���
{
	return Complex ( real + c2.real, imag + c2.imag );
}

ostream& operator << ( ostream& output, Complex& c ) //�����������<<�����غ���
{
	output << "(" << c.real << "+" << c.imag << "i)" ;
	return output;
}
istream& operator >> ( istream& input, Complex& c )  //���������������>>��
{
	cout << "input real part and imaginary part of complex number:";
	input >> c.real >> c.imag;
	return input;
}
int main ( )
{
	Complex c1 ( 2, 4 ), c2 ( 6, 10 ), c3;
	c3 = c1 + c2;
	cout <<"c1="<<c1<<",c2="<<c2<<",c1+c2="<<c3<<endl;
	cout << "abs(c3)=" << c3.abs ( ) << endl;
	cout << "c1=";
	//�㿴���ܱ�Ť��
	c1 << cout << endl;
	cout << "c2=";
	c2 << cout << endl;
	/*
	Complex c4, c5;
	cin >> c4 >> c5;
	cout << "c4=" << c4 << endl;
	cout << "c5=" << c5 << endl;
	*/
	system ( "pause" );
	return 0;
}