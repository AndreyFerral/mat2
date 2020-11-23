#include <iostream>
#include <math.h>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "RUS");
    const int i = 3;
    //const int j = 3;

    double a[i][i] = {
        { 0.87, 0.12, -0.14 },
        { 0.07, 0.92, -0.14 },
        { 0.11, -0.18, 1.15 }
    };

    //const int n = 3;
    const int m = 1;

    double ar[i][m] = {
    { 3.18 },
    { 0.09 },
    { -4.08 }
    };

    double First = 0;
    double Second = 0;
    double Third = 0;

    std::cout << abs(a[0][0]) << " > " << abs(a[0][1]) + abs(a[0][2]) << std::endl;
    std::cout << abs(a[1][1]) << " > " << abs(a[1][0]) + abs(a[1][2]) << std::endl;
    std::cout << abs(a[2][2]) << " > " << abs(a[2][0]) + abs(a[2][1]) << std::endl;
    std::cout << "det A != 1" << std::endl;

    int OneMatrix[3][3] = {
    { 1, 0, 0 },
    { 0, 1, 0 },
    { 0, 0, 1 }
    };

    std::cout << "\nПервоначальная матрица:\n";
    for (int f1 = 0; f1 != i; f1++) {
        for (int f2 = 0; f2 != i; f2++) {
            std::cout << a[f1][f2] << " ";
        }
        std::cout << std::endl;
    }

    for (int f1 = 0; f1 != i; f1++) {
        for (int f2 = 0; f2 != i; f2++) {
            if (f1 == f2) a[f1][f2] = OneMatrix[f1][f2] - a[f1][f2];
        }
    }
    
    std::cout << "\nМатрица С:\n";
    for (int f1 = 0; f1 != i; f1++) {
        for (int f2 = 0; f2 != i; f2++) {
            std::cout << a[f1][f2] << " ";
        }
        std::cout << std::endl;
    }

    double NormaC = std::max(std::max((abs(a[0][0]) + abs(a[0][1]) + abs(a[0][2])), (abs(a[1][0]) + abs(a[1][1]) + abs(a[1][2]))), (abs(a[2][0]) + abs(a[2][1]) + abs(a[2][2])));
    std::cout << "\nПервая норма С: " << NormaC << " < 1\n";

    //вектор начального приближения
    double x0[i][m] = {
    { 1 },
    { 1 },
    { 1 }
    };

    double x1[i][m] = {
    { 0 },
    { 0 },
    { 0 }
    };
    
    double test[3][3];

    // мы должны матрицу С перемножить на вектор с 1 столбцом
    // для этого надо перемножить каждый элемент строчки на элемент С и суммировать их

    /*
    while () {

        x1 = x0*C + D;
        n++;
    }
    std::cout << "x2: " << x1;
    */




    /*
    for (int f1 = 0; f1 != i; f1++) {
        for (int f2 = 0; f2 != i; f2++) {
            test[f1][f2] = a[f1][f2] * x0[f1][0];
        }
    }

    std::cout << "\nМатрица С*2:\n";
    for (int f1 = 0; f1 != i; f1++) {
        for (int f2 = 0; f2 != i; f2++) {
            std::cout << test[f1][f2] << " ";
        }
        std::cout << std::endl;
    }

    x1[0][0] = test[0][0] + test[0][1] + test[0][2];
    x1[1][0] = test[1][0] + test[1][1] + test[1][2];
    x1[2][0] = test[2][0] + test[2][1] + test[2][2];

    std::cout << "\n___:\n";
    for (int f1 = 0; f1 != i; f1++) {
        std::cout << x1[f1][0] << std::endl;
    }

    // Осталось прибавить еще D - массив ar
    */
	return 0;
}