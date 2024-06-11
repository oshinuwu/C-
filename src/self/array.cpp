//program to demonstrate array sorting
#include <iostream>
using namespace std;
class array
{

public:
   int Arr(int x)
    {   int arr[x];
        cout<<"enter the numbers"<<endl;
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }
        bubbleSort(arr,x);
        printArray(arr,x);
    }
    //sorting array
    void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//displays the sorted array
void printArray(int arr[], int size) {
    cout<<"the sorted numbers are:"<<endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

};
int main()
{
    int x;
    cout<<"enter the no of inputs"<<endl;
    cin>>x;
    array a;
    a.Arr(x);

    fflush(stdin);
    cin.get();
    return 0;
}

