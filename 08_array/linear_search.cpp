#include <iostream>
using namespace std;

int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,3,-5,-2,-4,8,-7,2,1};
    cout<<"Enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if (found){
        cout<<"key is present"<<endl;
    }else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}