
#include "Date.h"


Date::Date(){
	setDate(1901,1,1,1,1);
}

Date::Date(int y, int m, int d, int h, int dur){
	setDate(y,m,d,h,dur);
}


//setters
void Date::setDuration(int d){
	if(d > maxDur)d = maxDur;
	if(d < 0)d = 0;
	duration = d;
}

void Date::setHour(int h){
	if(h > 23)h = 23;
	if(h < 0)h = 0;
	hour = h;
}


void Date::setDay(int d){
	int max = getMaxDay();
	if (d>max) d=max;
	if (d<1) d=1;
	day = d;
}

void Date::setMonth(int m){
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y){
	if (y < 1901) y = 1901;
	year = y;
}

void Date::setDate(int y, int m, int d, int h, int dur){
	setMonth(m);
	setDay(d);
	setYear(y);
	setHour(h);
	setDuration(dur);

}

void Date::setDate(Date& d){
	setDate(d.year, d.month, d.day, d.hour, d.duration);
}


//getters
int Date::getDay(){ return day; }
int Date::getMonth(){ return month; }
int Date::getYear(){ return year; }
const string& Date::getMonthName(){return months[month-1];}


//other

bool Date::lessThan(Date& d){
	if (year == d.year){
		if (month == d.month){
			if(day == d.day){
				return hour < d.hour;
			}else{
				return day < d.day;
			}
		}else{
			return month  < d.month;
		}
	}else{
		return year < d.year;
	}
}

bool Date::overlaps(Date& d){
	if(year != d.year || month != d.month || day != d.day)return false;

	// int maxD = duration + d.duration;
	// int minH = hour - d.hour;
	if(hour < d.hour){
		if(hour + duration > d.hour)return true;
	}
	else{
		if(d.hour + d.duration > hour)return true;
	}

	// if(minH < 0)minH *=-1;
	//
	// if(minH <= maxD)return true;

	return false;
}

void Date::print(){
	cout<<"duration: "<<duration<<" Hour: "<<hour<<endl;
	cout <<"Date :"<< getMonthName()<<" "<<getDay()<<", "<<getYear()<<endl;
}

int Date::getMaxDay(){
	switch(getMonth()){
		case 4:
		case 6:
		case 9:
		case 11: 			return 30;
		case 2:				return 28;
		default:			return 31;
	}
}
