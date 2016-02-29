#include <iostream>



class Point{
public:
	float x;
	float y;
	bool isZero(const Point&);
};

bool Point::isZero(const Point& p){

	if (p.x == 0 && p.y == 0) return true;
	else                      return false;
}

int main(){

	Point p1;
	p1.x = 0;
	p1.y = 0;
	if (p1.isZero(p1)) std::cout << "yep" << std::endl;

	getchar();
	return 0;
}