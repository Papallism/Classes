#include <iostream>
using namespace std;

class Time{
	public:
		Time();
		void setTime(int, int, int);
		void print24hour();
		void print12hour();
		int getHour();
		int getMinute();
		int getSecond();
		void addTime(Time);
	private:
		int hour;
		int minute;
		int second;
};

int main()
{
	Time t1, t2;
	t1.setTime(10, 4, 20);
	t1.print12hour();
	cout << endl;
	t1.print24hour();
	cout << endl << t1.getHour() << endl << t1.getMinute() << endl << t1.getSecond() << endl;
	t2.setTime(23, 59, 41);
	t1.addTime(t2);
	cout << endl;
	t1.print12hour();
	cout << endl;
	t1.print24hour();
	
	return 0;
}

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

void Time::setTime(int h, int m, int s)
{
	if((h < 24) && (h >= 0))
		hour = h;
	if((m < 60) && (m >= 0))
		minute = m;
	if((s < 60) && (s >= 0))
		second = s;
}

void Time::print24hour()
{
	cout << hour << ":" << minute << ":" << second;
}

void Time::print12hour()
{
	if((hour==0) || (hour==12))
		cout << 12 << ":";
	else
		cout << hour % 12 << ":";
	cout << minute << ":" << second;
	if(hour<12)
		cout << " AM";
	else
		cout << " PM";
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::addTime(Time t)
{
	second += t.second;
	if(second > 59)
	{
		second %= 60;
		minute++;
	}
	minute += t.minute;
	if(minute > 59)
	{
		minute %= 60;
		hour++;
	}
	hour += t.hour;
	if(hour > 23)
		hour %= 24;
}















