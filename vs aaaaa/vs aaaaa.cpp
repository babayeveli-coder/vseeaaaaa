#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {


    //1

    const int size = 5;
    int matrix[size][size];
    int sum = 0;

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 21; // 0-20 aralığında ədəd
            sum += matrix[i][j];
        }
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Cəm: " << sum << endl;

    return 0;



    //2


    const int size = 5;
    int matrix[size][size];
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 21;
        }
    }

    // Cəmləri hesabla
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][size - 1 - i];
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Əsas dioqonalın cəmi: " << mainDiagonalSum << endl;
    cout << "Əks dioqonalın cəmi: " << secondaryDiagonalSum << endl;

    return 0;


    //3


    const int size = 5;
    int matrix[size][size];
    int minElement = 100, maxElement = -100;

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 201 - 100; // -100-100 aralığında ədəd
            if (matrix[i][j] < minElement) minElement = matrix[i][j];
            if (matrix[i][j] > maxElement) maxElement = matrix[i][j];
        }
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Minimal element: " << minElement << endl;
    cout << "Maksimal element: " << maxElement << endl;

    return 0;


    //4


    const int size = 5;
    int matrix[size][size];
    int negativeCount = 0, positiveCount = 0, zeroCount = 0;

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 11 - 5; // -5-5 aralığında ədəd
            if (matrix[i][j] < 0) negativeCount++;
            else if (matrix[i][j] > 0) positiveCount++;
            else zeroCount++;
        }
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Mənfi elementlərin sayı: " << negativeCount << endl;
    cout << "Müsbət elementlərin sayı: " << positiveCount << endl;
    cout << "Sıfır elementlərin sayı: " << zeroCount << endl;

    return 0;



    //5



    const int size = 5;
    int matrix[size][size];

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 21;
        }
    }

    // Cəmləri hesabla
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        int rowSum = 0;
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
            rowSum += matrix[i][j];
        }
        cout << "| Cəm: " << rowSum << endl;
    }

    return 0;


    //6


    const int size = 5;
    int matrix[size][size];

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 21;
        }
    }

    // Cəmləri hesabla
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < size; ++j) {
        int colSum = 0;
        for (int i = 0; i < size; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Sütun " << j + 1 << " cəm: " << colSum << endl;
    }

    return 0;


    //7



    const int size = 5;
    int matrix[size][size];

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 51 - 10; // -10-40 aralığında ədəd
        }
    }

    // Cəmləri hesabla
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        bool hasNegative = false;
        int rowSum = 0;
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
            rowSum += matrix[i][j];
            if (matrix[i][j] < 0) {
                hasNegative = true;
            }
        }
        cout << "| Cəm: " << (hasNegative ? 0 : rowSum) << endl;
    }

    return 0;


    //8



    const int rows = 5;
    const int cols = 5;
    int matrix[rows][cols];

    // Massivi doldur
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (i + 1) * 10 + (j + 1); // İki rəqəmli ədəd
        }
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


    //9


    const int size = 5;
    int matrix[size][size];

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 21;
        }
    }

    // Sütunların yerini dəyiş
    for (int i = 0; i < size; ++i) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][size - 1];
        matrix[i][size - 1] = temp;

        temp = matrix[i][1];
        matrix[i][1] = matrix[i][size - 2];
        matrix[i][size - 2] = temp;
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


    //10


    const int size = 6;
    int matrix[size][size];

    srand(time(0));

    // Massivi doldur
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 21;
        }
    }

    // Qonşu sətirlərin yerini dəyiş
    for (int i = 0; i < size - 1; i += 2) {
        for (int j = 0; j < size; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i + 1][j];
            matrix[i + 1][j] = temp;
        }
    }

    // Massivi çap et
    cout << "Massiv:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
