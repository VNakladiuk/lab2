#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Type the triangle: "<<endl;
        Triangle t = { { 0, 0}, { 0, 0 }, { 0, 0 } };
    cout << "Type A coordinates: ";
    cin >> x >> y;
    t.A.x = x;
    t.A.y = y;
    cout << "\nType B coordinates: ";
    cin >> x >> y;
    t.B.x = x;
    t.B.y = y;
    cout << "\nType C coordinates: ";
    cin >> x >> y;
    t.C.x = x;
    t.C.y = y;
    if (t.area(t) == 0) {
        cout << "Trikutnik virojenyy\n";
        return 0;
    }
    cout << "\nType the number of points: ";
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x, y;
        
        cout << "Type point coordinates " << i + 1 << ": ";
        cin >> x;
        cin >> y;
        Point p = { x,y };


        if (t.contains(p)) {
            cout << "Tochka (" << p.x << ", " << p.y << ") nalejyt.\n";
        }
        else {
            cout << "Tochka (" << p.x << ", " << p.y << ") ne nalejyt.\n";
        }
    }

    return 0;
}
   

