#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int key;
    int arr[10]= {5, 7, -2, 19, 28, 37, 1, 22, 0, 6};
    cout<<"Enter the key to search "<< endl;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key not present";
    }
}
