// #include <iostream>
// using namespace std;
// int unique(){

// }
// int main(){

// }
int findUnique(int *arr, int size)

{

    //Write your code here

    for(int i = 0; i < size; i++) {

        int count = 0;

        for(int j = 0; j < size; j++) {

            if(arr[i] == arr[j]) {

                count++;

            }

        }

        if(count == 1) {

            return arr[i];

        }

    }

    return -1;

}