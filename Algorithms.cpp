#include <iostream>
#include "Algorithms.hpp"

using namespace std;

void Sort::SetArray(int a[],int s){
    this->arr = a;
    this->size = s;
}

void Sort::QuickSort(int l, int r){
    if(r-l<=0){return;}
    
    int j = partition(l,r);
    QuickSort(l, j-1);
    QuickSort(j+1,r);
}

int Sort::partition(int l, int r){
    int i = l;
    int p = r;
    for(int iter = l; iter < r; iter++){
        if(arr[iter] < arr[p]){
            this->swap(&arr[i], &arr[iter]);
            i++;
        }
    }
    this->swap(&arr[i],&arr[r]);
    return i;
}

void Sort::swap(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

void Sort::MergeSort(int arr[], int l, int r){
    if(l>=r){return;}
    int m = l + (r-l)/2;
    MergeSort(arr,l,m);
    MergeSort(arr, m+1,r);

    Merge(arr, l, m, r);
}


void Sort::Merge(int arr[], int l, int m, int r){
    int t1 = m - l + 1;     int t2 = r - m;
    int ll[t1];  int rr[t2];
    //COPY
    for(int i = 0; i < t1; i++)
        ll[i] = arr[l+i];
    for(int i = 0; i < t2; i++)
        rr[i] = arr[m+1+i];
    
    int L = 0; int R = 0; int M = l;
    while(L < t1 && R < t2){
        if(ll[L]<=rr[R]){
            arr[M] = ll[L];
            L++;
        }
        else{
            arr[M] = rr[R];
            R++;
        }
        M++;
    }

    while(L < t1){
        arr[M] =  ll[L];
        L++; M++;
    }
    while(R < t2){
        arr[M] =  rr[R];
        R++; M++;
    }
}