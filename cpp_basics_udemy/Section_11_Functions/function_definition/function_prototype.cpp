#include <iostream>

using namespace std;

const double PI{3.14159};

double calc_area_circle(double);
double calc_volume_cylinder(double, double);
void area_circle();
void volume_cylinder();

int main(int argc, char const *argv[])
{
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area_circle(double radius)
{
    return PI * (radius * radius);
}

double calc_volume_cylinder(double radius, double height)
{
    return (calc_area_circle(radius) * height);
}

void area_circle()
{
    double radius{};

    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is: " << calc_volume_cylinder(radius, height) << endl;
}