#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ex03_01();
void ex03_02();

int main(){

	//ex03_01();
	ex03_02();
}

void ex03_01(){
	class Fan
	{
	public:
		int speed;
		bool on;
		double radius;
		Fan()
		{
			speed = 1;
			on = 0;
			radius = 5;
		}
		Fan(int newspeed, bool onoff, double newradius){
			speed = newspeed;
			on = onoff;
			radius = newradius;
		}
		
	};
	Fan fan1(3, 1, 10);
	Fan fan2(2, 0, 5);

	cout << "speed: " << fan1.speed << endl << "Fan is on: " << fan1.on << endl << "Fan radius: " << fan1.radius << endl;
	cout << "speed: " << fan2.speed << endl << "Fan is on: " << fan2.on << endl << "Fan radius: " << fan2.radius << endl;

}

void ex03_02(){

	class quadratic
	{
	public:
		double a, b, c;
		double root1, root2;
		double discriminant;

		void solvequadratic()
		{
			if (a == 0)
			{
				cout << "Can't divide by zero" << endl;
			}
			discriminant = ((b*b) / -(4 * a*c));
			if (discriminant < 0)
			{
				cout << "0" << endl;
			}
			else if (discriminant > 0)
			{
				root1 = ((-1 * b) / +(sqrt(discriminant)) / (2 * a));
				root2 = ((-1 * b) / -(sqrt(discriminant)) / (2 * a));

				cout << "roots:" << root1 << "and" << endl << root2 << endl;
			}
			else if (discriminant == 0)
			{
				cout << "the equation has no real roots";
			}
		}
	};

	quadratic q;
	cout << "enter three numbers" << endl;
	cin >> q.a;
	cin >> q.b;
	cin >> q.c;
	q.solvequadratic();
}


