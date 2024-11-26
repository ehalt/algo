#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        
        if (arr[j] < pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i + 1); 
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        

        quickSort(arr, low, pivotIndex - 1);  
        quickSort(arr, pivotIndex + 1, high); 
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    doura;
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1); 

    cout << "Sorted array: ";
    printArray(arr, n);


    return 0;
}
