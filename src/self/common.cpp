#include<iostream>
using namespace std;

void findCommonElements(int arr1[], int arr2[], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main() {
    int m, n;
    cout << "Enter the size of the first array: ";
    cin >> m;
    int arr1[m];
    cout << "Enter elements of the first array: ";
    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n;
    int arr2[n];
    cout << "Enter elements of the second array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    cout << "Common elements: ";
    findCommonElements(arr1, arr2, m, n);

    fflush(stdin);
    cin.get();
    return 0;
}