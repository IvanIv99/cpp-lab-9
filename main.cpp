#include <iostream>
using namespace std;

class Class{

};

template <typename T>
float Function(T* arr, int n, string type){
    float sum = 0;
    for (int i = 0; i < n; i++){
        if (type != "float" && type != "double")
            sum += (int)arr[i];
        else
            sum += arr[i];
    }
    return sum;
}

int main(){
    int arr1[] = {1, 2, 3};
    char arr2[] = "abcdef";
    Class* arr3[] = { new Class() };
    float arr4[] = { 11.3, 17.4 };
    cout << Function(arr4, 2, "float");
    delete arr3[0];
}