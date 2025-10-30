#include <iostream>
using namespace std;
int main() {
    int* sales = new int[100];
    for (int i = 0; i < 100; ++i) {
        sales[i] = i + 1;  
    }
    cout << "Sales data before resizing (first 10 values):" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << sales[i] << " ";
    }
    cout << endl;
    int* resized_sales = new int[200];
    for (int i = 0; i < 100; ++i) {
        resized_sales[i] = sales[i];
    }
    for (int i = 100; i < 200; ++i) {
        resized_sales[i] = i + 1;  
    }
    cout << "Sales data after resizing (first 10 values):" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << resized_sales[i] << " ";
    }
    cout << endl;

    cout << "Sales data after resizing (last 10 values):" << endl;
    for (int i = 190; i < 200; ++i) {
        cout << resized_sales[i] << " ";
    }
    cout << endl;
    delete[] sales;         
    delete[] resized_sales; 
    return 0;
}
