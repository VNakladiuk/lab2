#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

const double EPSILON = 1e-6; // Похибка для порівняння

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double Triangle::vDob(const Point& p1, const Point& p2, const Point& p3) const {
    return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}

bool Triangle::contains(const Point& P) const {
    double d1 = vDob(A, B, P);
    double d2 = vDob(B, C, P);
    double d3 = vDob(C, A, P);

    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}

void nameji(const Triangle& t, const Point& P) {
    if (abs(distance(P, t.A) + distance(P, t.B) - distance(t.A, t.B)) < EPSILON)
        cout << "Tochka nalejyt AB\n";
    if (abs(distance(P, t.A) + distance(P, t.C) - distance(t.A, t.C)) < EPSILON)
        cout << "Tochka nalejyt AC\n";
    if (abs(distance(P, t.B) + distance(P, t.C) - distance(t.B, t.C)) < EPSILON)
        cout << "Tochka nalejyt BC\n";
}

double Triangle::area() const {
    double a = distance(A, B);
    double b = distance(B, C);
    double c = distance(C, A);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
