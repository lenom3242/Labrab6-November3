//#include <iostream>
//using namespace std;
//
//void main() {
//	int vibor;
//	cin >> vibor;
//	int* b = new int[vibor];
//	
//	for (int i = 0; i < vibor; i++)
//	{
//		b[i] = rand() % 50;
//	}
//
//	for (int i = 0; i < vibor; i++)
//	{
//		cout << b[i] << " ";
//	}
//	delete[]b;
//}
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Circle
//{
//	int rad, x, y;
//	static string name;
//public:
//	int getX();
//	void setX(int inputX);
//	int getY();
//	void setY(int inputY);
//	void setRad(int inputRad);
//	int getRad();
//	float dlinaOkruzhnosti();
//	float ploshad();
//	float dlinadugi(int grad);
//	void uravnenie();
//	static string getname();
//};
//void Circle::uravnenie()
//{
//	cout << "(x-" << x << ")^2+" << "(y-" << y << ")^2 = " << rad * rad;
//}
//float Circle::dlinadugi(int grad)
//{
//	return ((3.14 * rad * grad) / 180.0);
//}
//float Circle::dlinaOkruzhnosti()
//{
//	int dlinaOkruzhnosti;
//	dlinaOkruzhnosti = rad * 2 * 3.14;
//	return dlinaOkruzhnosti;
//}
//float Circle::ploshad()
//{
//	return 3.14 * rad * rad;
//}
//void Circle::setX(int inputX)
//{
//	x = inputX;
//}
//void Circle::setY(int inputY)
//{
//	y = inputY;
//}
//int Circle::getX()
//{
//	return x;
//}
//int Circle::getY()
//{
//	return y;
//}
//int Circle::getRad()
//{
//	return rad;
//}
//void Circle::setRad(int inputRad)
//{
//	rad = inputRad;
//}
//string Circle::getname()
//{
//	return name;
//}
//string Circle::name = "Okruzhnost";
//void main()
//{
//	Circle C1;
//	C1.setX(0);
//	C1.setY(1);
//	C1.setRad(2);
//	C1.uravnenie();
//	Circle* C2 = new Circle;
//
//	C2->setX(-1);
//	C2->setY(1);
//	C2->setRad(4);
//	delete C2;
//	cout << Circle::getname();
//}
#include <iostream>
using namespace std;
#include <string>
class Circle
{
	int rad, x, y;
	static string name;
public:
	int getX();
	void setX(int inputX);
	int getY();
	void setY(int inputY);
	void setRad(int inputRad);
	int getRad();
	float dlina();
	float ploshad();
	float dlinadugi(int grad);
	void uravnenie();
	static string getname();
};
void Circle::uravnenie()
{
	cout << "(x-" << x << ")^2+" << "(y-" << y << ")^2 = " << rad * rad;
}
float Circle::dlinadugi(int grad)
{
	return ((rad * 2 * 3.14) / 360.0) * grad;
}
float Circle::dlina()
{
	int dlina;
	dlina = rad * 2 * 3.14;
	return dlina;
}
float Circle::ploshad()
{
	return 3.14 * rad * rad;
}
void Circle::setX(int inputX)
{
	x = inputX;
}
void Circle::setY(int inputY)
{
	y = inputY;
}
int Circle::getX()
{
	return x;
}
int Circle::getY()
{
	return y;
}
int Circle::getRad()
{
	return rad;
}
void Circle::setRad(int inputRad)
{
	rad = inputRad;
}
string Circle::getname()
{
	return name;
}
string Circle::name = "Test";
void main()
{
	Circle C1;
	C1.setX(0);
	C1.setY(1);
	C1.setRad(2);
	
	Circle* C2p = new Circle;

	C2p->setX(-1);
	C2p->setY(1);
	C2p->setRad(4);
	
	delete C2p;
	cout << Circle::getname();
}