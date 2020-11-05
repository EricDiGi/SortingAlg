#include <iostream>
#include "Algorithms.hpp"

using namespace std;

int main(){
    int arr[10] = {65,98,534,321,99,21,0,56,987,64};
    Sort s;
    s.SetArray(arr,10);
    s.QuickSort(0,9);
    cout << s;

    s.SetArray(arr,10);
    //int* a = new int[10];
    //a = arr;
    Sort s1;
    int tak[10] = {65,98,555,321,99,222,0,56,999,64};
    s1.SetArray(tak,10);
    s1.MergeSort(tak,0,9);
    cout << s1;
}