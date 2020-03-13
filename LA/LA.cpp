#include <iostream>

class Point {
private: 
	int x, y;
public:
	Point() {
		this->x = 0; this->y = 0;
	}
	Point(int x1, int y1) {
		this->x = x1; this->y = y1; 
	}

	double dist(Point other) {
		double x_comp = pow(other.x - this->x, 2);
		double y_comp = pow(other.y - this->y, 2);

		double dist = sqrt(x_comp + y_comp);
		return dist;
	}

	double norm() {
		double result = sqrt(pow(x, 2) + pow(y, 2));
		return result;
	}

};

class Vector {
	Point p;
	double angle;
public:
	Vector(int x, int y) {
		this->p = Point(x, y);
	}

	Vector(int x1, int y1, int x2, int y2) {
		double x_comp =(double) x2 - x1;
		double y_comp =(double) y2 - y1;
		this->p = Point(x_comp, y_comp);
	}

	double dot(Vector other) {
		double norm_this = this->p.norm();
		double norm_other = other.p.norm();

		std::cout << " Enter the angle between two vectors " << std::endl;
		std::cin >> angle;

		double result = norm_this * norm_other * cos(angle);

		return result;
	}
};


int main() {
	std::cout << " hello world  ";
	return 0;
}