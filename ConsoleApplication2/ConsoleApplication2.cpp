// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

class Tower {

    int height;


public:
    Tower();
    Tower(int h);
    int getheight();
};

Tower::Tower() {

    height = 1;
}
Tower::Tower(int h) {
    height = h;
}

int Tower::getheight() {
    return height;

}

int main()
{

    Tower myTower;
    Tower seoulTower(100);
    cout << "height is" << myTower.getheight() << "meter" << endl;
    cout << "height is" << seoulTower.getheight() << "meter" << endl;

    return 0;

}

