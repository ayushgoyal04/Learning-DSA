#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int size = n+m;
    // for(int i=0;i<size;i++){
    //     if(arr1[i]>=arr2[i]){
    //         arr3[i] = arr2[i];

    //     }
    // }

    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
            // arr3[k] = arr1[i];
            // k++;
            // i++;
        // same as the above line (smarter and shorter code)
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
            }
    }

    while(i<n){
        arr3[k++] = arr1[i++];        
    }

    while(j<m){
        arr3[k++] = arr2[j++];
    }

}

void print(int arr3[], int n){

    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);



    return 0;
}