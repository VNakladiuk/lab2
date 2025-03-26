#pragma once

struct Point {
    double x, y;
};

double distance(const Point& p1, const Point& p2);

struct Triangle {
    Point A, B, C;

    double area() const; // Видалено зайвий параметр

    bool contains(const Point& P) const;

    double vDob(const Point& p1, const Point& p2, const Point& p3) const;
};

void nameji(const Triangle& t, const Point& P);
