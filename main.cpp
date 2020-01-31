#include <cmath>
#include <iostream>

using namespace std;

bool is_triangle(double x0, double x1, double x2, double y0, double y1, double y2);

int main() {
    double x[3], y[3];

    const int max_cycle_count = 3;
    for (int i = 0; i < max_cycle_count; ++i) {
        std::cout << "x" << i << "の数値入力ごEnterしてください。" << std::endl;
        cin >> x[i];
        std::cout << "y" << i << "の数値入力ごEnterしてください。" << std::endl;
        cin >> y[i];
    }

    const bool judgment_triangle = is_triangle(x[0], x[1], x[2], y[0], y[1], y[2]);

    if (judgment_triangle) {
        std::cout << "this is triangle" << std::endl;
    }

    else if (!judgment_triangle) {
        std::cout << "this is not triangle" << std::endl;
    }

    return 0;
}

bool is_triangle(double x0, double x1, double x2, double y0, double y1, double y2) {
    const double comparison_value = 0.001;

    const double sum_point_three = x2 + y2;
    const double sum_point_two   = x1 + y1;
    const double sum_point_one   = x0 + y0;

    const double remaining_three_one = std::fmod(sum_point_three, sum_point_one);
    const double remaining_two_one   = std::fmod(sum_point_two, sum_point_one);

    // X座標が同じい場合
    if (abs(x0 - x1) < comparison_value) {
        if (abs(x1 - x2) < comparison_value) {
            return false;
        } else {
            return true;
        }
    }
    // Y座標が同じい場合
    else if (abs(y0 - y1) < comparison_value) {
        if (abs(y1 - y2) < comparison_value) {
            return false;
        } else {
            return true;
        }
    }

    // 斜めの場合
    else if (abs(remaining_three_one) < comparison_value) {
        if (abs(remaining_two_one) < comparison_value) {
            return false;
        } else {
            return true;
        }
    }

    else {
        return true;
    }
}
