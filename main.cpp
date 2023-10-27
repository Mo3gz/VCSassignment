#include <iostream>

using namespace std;

int getAverage(int array[], int size){
    int result = getSum(array, size);

    return static_cast <double>(result) / size;
}

int main(){
    int array[] = {1, 2, 3, 400, 50};
    int size = 5;

    cout << "Summation: " << getSum(array, size) << endl;
    cout << "Average: " << getAverage(array, size) << endl;
    return 0;
}