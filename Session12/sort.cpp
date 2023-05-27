#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (int j = 0; j < n - i - 1; j++)

            if (arr[j] > arr[j + 1]){

                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}