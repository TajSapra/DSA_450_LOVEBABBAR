#include<bits/stdc++.h>
using std::cout;
 
int maximum(int a, int b);
 
int findMedianSortedArrays(int *a, int n,int *b, int m){
    int min_index = 0, max_index = n, i, j;
    while (min_index <= max_index){
        i = (min_index + max_index) / 2;
        j = ((n + m + 1) / 2) - i;
        if (i < n && j > 0 && b[j - 1] > a[i])       
            min_index = i + 1;       
        else if (i > 0 && j < m && b[j] < a[i - 1])       
            max_index = i - 1;       
        else{
            if (i == 0)           
                return b[j - 1];           
            if (j == 0)           
                return a[i - 1];           
            else           
                return maximum(a[i - 1], b[j - 1]);          
        }
    }     
    cout << "ERROR!!! " << "returning\n";   
    return 0;
}
int maximum(int a, int b){
    return a > b ? a : b;
}
int main(){
    int a[] = {900};
    int b[] = { 10,13,14};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    if (n < m)
        cout << "The median is: "
             << findMedianSortedArrays(a, n, b, m);
    else
        cout << "The median is: "
             << findMedianSortedArrays(b, m, a, n);
    return 0;
}