#include "point.h"
#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Type the triangle: " << endl;

    Triangle t;

    cout << "Type A coordinates: ";
    cin >> t.A.x >> t.A.y;

    cout << "Type B coordinates: ";
    cin >> t.B.x >> t.B.y;

    cout << "Type C coordinates: ";
    cin >> t.C.x >> t.C.y;

    if (t.area() == 0) {
        cout << "Trikutnik virojenyy\n";
    }

    cout << "\nType the number of points: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Type point coordinates " << i + 1 << ": ";
        cin >> x >> y;
        Point p = { x, y };

        if (t.contains(p)) {
            cout << "Tochka (" << p.x << ", " << p.y << ") nalejyt.\n";
            nameji(t, p);
        }
        else {
            cout << "Tochka (" << p.x << ", " << p.y << ") ne nalejyt.\n";
        }
    }

    return 0;
}
