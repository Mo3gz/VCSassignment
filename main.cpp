#include <iostream>

using namespace std;

int getSum(int array[], int size) {
    int result = 0;

    for (int i = 0; i < size; i++)
        result += array[i];

    return result;
}

int getAverage(int array[], int size) {
    int result = getSum(array, size);

    return static_cast <double> (result) / size;
}

int getMin(int array[], int size) {
    int result = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < result)
            result = array[i];
    }

    return result;
}

int main() {
    int array[] = {1, 2, 3, 400, 50};
    int size = 5;

    cout << "Summation: " << getSum(array, size) << endl;
    cout << "Average: " << getAverage(array, size) << endl;
    cout << "Minimum: " << getMin(array, size) << endl;
    return 0;
}