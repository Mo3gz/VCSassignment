#include <iostream>

using namespace std;

int getMin(int array[], int size){
    int result = array[0];

    for (int i = 1; i < size; i++){
        if(array[i] < result)
            result = array[i];
    }
    
    return result;
}

int main(){
    int array[] = {1, 2, 3, 400, 50};
    int size = 5;

    cout << "Summation: " << getSum(array, size) << endl;
    cout << "Minimum: " << getMin(array, size) << endl;
    return 0;
}