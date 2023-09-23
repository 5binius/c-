// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>

using namespace std;


class Date {

    int day, month, year;

public:
    Date(int a, int b, int c);
    Date(string);
    void show();
    int getYear();
    int getMonth();
    int getDay();


};

Date::Date(int a, int b, int c) {
    year = a;
    month = b;
    day = c;

}
Date::Date(string str)
{
    char* str_buff = new char[100];
    strcpy(str_buff, str.c_str());

    year = stoi(strtok(str_buff, "/"));
    month = stoi(strtok(nullptr, "/"));
    day = stoi(strtok(nullptr, "/"));


}
int Date::getMonth() {
    return month;
};
int Date::getYear() {
    return year;
};
int Date::getDay() {
    return day;
};
void Date::show() {
    cout << year << "년" << month << "월" << day << "일" << endl;

}
int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

}

