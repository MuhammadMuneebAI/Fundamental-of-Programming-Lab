#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    int choice;
    cout<<"SHAPE CALCULATOR"<<endl;
    cout << "Enter the shape (1 = circle, 2 = rectangle, 3 = square, 4 = parallelogram, 5 = triangle): ";
    cin >> choice;

    switch (choice)
	{
        case 1:
            double radius, area_c, perimeter_c;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area_c = M_PIbg * pow(radius, 2);
            perimeter_c = 2 * M_PI * radius;
            cout << "Area of the circle: " << area_c << endl;
            cout << "Perimeter of the circle: " << perimeter_c << endl;
            break;
        case 2:
            double length, width, area_r, perimeter_r;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area_r = length * width;
            perimeter_r = 2 * (length + width);
            cout << "Area of the rectangle: " << area_r << endl;
            cout << "Perimeter of the rectangle: " << perimeter_r << endl;
            break;
        case 3:
            double side, area_s, perimeter_s;
            cout << "Enter the length of the side of the square: ";
            cin >> side;
            area_s = pow(side, 2);
            perimeter_s = 4 * side;
            cout << "Area of the square: " << area_s << endl;
            cout << "Perimeter of the square: " << perimeter_s << endl;
            break;
        case 4:
            double base, height, area_p, perimeter_p, length_p;
            cout << "Enter the base of the parallelogram: ";
            cin >> base;
            cout << "Enter the height of the parallelogram: ";
             cin >> height;
            cout << "Enter the length of the parallelogram: ";
             cin >> length_p;
            area_p = base * height;
            perimeter_p = 2 * (base + length_p);
            cout << "Area of the parallelogram: " << area_p << endl;
            cout << "Perimeter of the parallelogram: " << perimeter_p << endl;
            break;
        case 5:
            double base_t, height_t, area_t, perimeter_t, side1_t, side2_t, side3_t;
            cout << "Enter the base of the triangle: ";
            cin >> base_t;
            cout << "Enter the height of the triangle: ";
            cin >> height_t;
            cout << "Enter the length of the side one of the triangle: ";
            cin >> side1_t;
            cout << "Enter the length of the side Two of the triangle: ";
            cin >> side2_t;
            cout << "Enter the length of the side Three of the triangle: ";
            cin >> side3_t;
            area_t = 0.5 * base_t * height_t;
            perimeter_t = side1_t + side2_t + side3_t;
            cout << "Area of the triangle: " << area_t << endl;
            cout << "Perimeter of the triangle: " << perimeter_t << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
return 0;
}

