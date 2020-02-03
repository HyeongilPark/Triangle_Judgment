#include <cmath>
#include <iostream>

using namespace std;

bool is_triangle(double x0, double y0, double x1, double y1, double x2, double y2);

int main() {
    const double sample1 = is_triangle(1.0, 1.0, 2.0, 1.0, 2.0, 2.0);
    const double sample2 = is_triangle(1.0, 0.0, 2.0, 0.0, 2.0, 0.0);

    if (sample1) {
        std::cout << "Sample1 is True" << std::endl;
    } else {
        std::cout << "Sample1 is False" << std::endl;
    }
    if (sample2) {
        std::cout << "Sample2 is True" << std::endl;
    } else {
        std::cout << "Sample2 is False" << std::endl;
    }

    return 0;
}

bool is_triangle(double x0, double y0, double x1, double y1, double x2, double y2) {
    const double comparison_value = 0.001;

    const double distance_AB = sqrt(((x0 - x1) * (x0 - x1)) + ((y0 - y1) * (y0 - y1)));
    const double distance_AC = sqrt(((x0 - x2) * (x0 - x2)) + ((y0 - y2) * (y0 - y2)));
    const double distance_BC = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    double high_Length;
    double remaining_Length1;
    double remaining_Length2;

    if (distance_AB >= distance_AC && distance_AB > distance_BC) {
        high_Length       = distance_AB;
        remaining_Length1 = distance_AC;
        remaining_Length2 = distance_BC;
    } else if (distance_AC > distance_AB && distance_AC >= distance_BC) {
        high_Length       = distance_AC;
        remaining_Length1 = distance_AB;
        remaining_Length2 = distance_BC;
    } else if (distance_BC > distance_AC && distance_BC >= distance_AB) {
        high_Length       = distance_BC;
        remaining_Length1 = distance_AB;
        remaining_Length2 = distance_AC;
    }

    const double result_Length = high_Length - (remaining_Length1 + remaining_Length2);

    if (abs(result_Length) < comparison_value) {
        return false;
    } else {
        return true;
    }
}
