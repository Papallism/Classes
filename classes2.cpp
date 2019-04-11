#include <iostream>
using namespace std;

class Student{
	public:
		Student();
		void studentid(char[]);
		void enterGrade(float);
		void displayStudent();
		void displayaverageandid();
	private:
		char id[20];
		float grades[5];
		int totalGrades;
};
