#include <iostream>
using namespace std;

class Employee{
	public:
		Employee();
		Employee(int, float, float);
		void addEmployee(int, float, float);
		void displayEmployee();
	private:
		int id;
		float payrate;
		float hours;
};

Employee::Employee()
{
	id = 0;
	payrate = 0.0;
	hours = 0.0;
}

Employee::Employee(int x, float y, float z)
{
	id = x;
	payrate = y;
	hours = z;
}

void Employee::addEmployee(int empid, float p, float h)
{
	id = empid;
	payrate = p;
	hours = h;
}

void Employee::displayEmployee()
{
	cout << "Employee ID: " << id << endl;
	cout << "Employee payrate: " << payrate << endl;
	cout << "Employee hours: " << hours << endl;
}

int main()
{
	int id;
	float pay, hour;
	Employee emp1(1235, 5.5, 40), emp2;
	cout << "Enter id for employee 1: ";
	cin >> id;
	cout << "Enter payrate for employee 1: ";
	cin >> pay;
	cout << "Enter hours for employee 1: ";
	cin >> hour;
	emp1.addEmployee(id, pay, hour);
	cout << "Enter id for employee 2: ";
	cin >> id;
	cout << "Enter payrate for employee 2: ";
	cin >> pay;
	cout << "Enter hours for employee 2: ";
	cin >> hour;
	emp2.addEmployee(id, pay, hour);
	return 0;
}























