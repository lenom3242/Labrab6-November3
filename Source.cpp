#include <iostream>
#include <ctime>
#include <string>
using namespace std;
class GeomFigure {
protected:
	int x=0, y=0;
	string id;
public:
	virtual void information() {
		cout << "(" << x << "; " << y << ")" << endl;
		cout << "ID: " << id << endl;
	}
	void changeloc(int newx, int newy)  {

		x = newx; y = newy;
	}
	virtual int ploshadcalc() {
		return 0;
	}
	virtual int perimetrcalc() {
		return 0;
	}
	GeomFigure(string id = "anon", int x = 0, int y=0) : x(x), y(y), id(id) {}
	virtual ~GeomFigure() {
		cout << "GeomFigure is deleted" << endl;
	}
};
class Rectangle : public GeomFigure {
private:
	int dlina;
	int shirina;
public:
	void setdlina(int newdlina) {dlina = newdlina;}
	void setshirina(int newshirina) {shirina = newshirina;}
	int getdlina() {return dlina;}
	int getshirina() {return shirina;}
	void information() {
		cout << "ID: " << id << endl;
		cout << "Dlina: " << dlina << endl;
		cout << "Shirina " << shirina << endl;
		cout << "(" << x << "; " << y << ")" << endl;

	}
	int ploshadcalc() {
		return 0;
	}
	int perimetrcalc() {
		return 0;
	}
	Rectangle(int dlina = 1, int shirina = 1, string id = "anon", int x = 0, int y = 0) : dlina(dlina), shirina(shirina), GeomFigure(id, x, y) {}
	~Rectangle() {
		cout << "Rectangle is deleted" << endl;
	}
};
class Circle : public GeomFigure {
private:
	int rad;
public:
	void setrad(int newrad) {
		rad = newrad;
	}
	int getrad() {
		return rad;
	}
	void information() {
		cout << "ID: " << id << endl;
		cout << "radius: " << rad << endl;
		cout << "(" << x << "; " << y << ")" << endl;
	}
	int ploshadcalc() {
		return 0;
	}
	int perimetrcalc() {
		return 0;
	}
	Circle(int rad=1, string id = "anon", int x=0, int y=0) : rad(rad), GeomFigure(id,x,y) {}
	~Circle() {
		cout << "Circle is deleted" << endl;
	}
};
class Triangle : public GeomFigure{
private:
	int a=0, b=0, c=0;
public:
	void setabc(int newa,int newb,int newc) {
		if (newa + newb > newc && newa + newc > newb && newc + newb > newa){
			a = newa; b = newb; c = newc;
		}
	}
	int geta() { return a; }
	int getb() { return b; }
	int getc() { return c; }
	void information() {
		cout << "ID: " << id << endl;
		cout << "A,B,C: " << a << "," << b << "," << c  << endl;
		cout << "(" << x << "; " << y << ")" << endl;
	}
	int ploshadcalc() {
		return (a + b + c) / 2;
	}
	int perimetrcalc() {
		return a + b + c;
	}
	Triangle(string id = "anon", int x = 0, int y = 0, int newa = 3, int newb = 4, int newc = 3) : a(newa), b(newb), c(newc), GeomFigure(id,x,y) {
		if (newa + newb > newc && newa + newc > newb && newc + newb > newa) {
			a = newa; b = newb; c = newc;
		}
		else
		{
			a = 3;
			b = 4;
			c = 5;
		}

	}
	~Triangle() {
		cout << "Triangle is deleted" << endl;
	}
};
void changeloc(GeomFigure *ar[]) {
	for (int d = 0; d < 10; d++) {
		ar[d]->changeloc(0, 0);
	}
}

void main() {
	srand(time(0));
	GeomFigure** figures = new GeomFigure * [10];
	int counter = 0;
	counter = rand() % 3;
	for (int i = 0; i < 10; i++) {
		switch (counter)
		{
		case 0: {
			figures[i] = new Rectangle(rand() % 25, rand() % 25, "Rectangle " + to_string(rand() % 10000));
			counter++;
			break;
		}
		case 1: {
			figures[i] = new Circle(rand() % 10, "Circle " + to_string(rand() % 10000), rand() % 25, rand() % 25);
			counter++;
			break;
		}
		case 2: {
			figures[i] = new Triangle("Triangle " + to_string(rand() % 10000), rand() % 25, rand() % 25, rand() % 25, rand() % 25, rand() % 25);
			counter++;
			break;
		}
		default: {
			figures[i] = new Rectangle(rand() % 25, rand() % 25, "Rectangle " + to_string(rand() % 10000));
			counter++;
			break;
		}
		}
		counter = rand() % 3;
	}
	for (int i = 0; i < 10; i++)
		figures[i]->information();
	changeloc(figures);
	cout << "All figures are centered";
	for (int i = 0; i < 10; i++)
		figures[i]->information();
	for (int i=0;i<10;i++)
		delete[] figures[i];

}