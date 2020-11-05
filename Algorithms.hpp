#ifndef Algorithms_HPP
#define Algorithms_HPP

#include <iostream>
using namespace std;

class Sort{
    private:
        int* arr = NULL;
        int size;
    public:
        void SetArray(int a[],int s);

        int partition(int l, int r);
        void QuickSort(int l, int r);
        void swap(int *a, int *b);

        //Merge sort
        void MergeSort(int arr[], int l, int r);
        void Merge(int arr[], int l, int m, int r);

    
    friend ostream &operator<< (ostream &out, const Sort &s){
        for(int i = 0; i < s.size; i++){
            out << s.arr[i] << " ";
        }
        out << endl;
        return out;
    }
};


#endif