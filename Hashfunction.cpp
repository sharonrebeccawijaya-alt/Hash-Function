#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size

    cout <<"Masukkan ukuran array : ";
    cin >> size;
   
    int arr[size]={0};

    int input;
    cout << "Masukkan angka yang ingin disimpan";
    cin >> input;

    int hashValue= input % size;
    arr[hashValue]=input;

    cout<<"angka"<<input<<"disimpan di index: "<<hashValue<<endl;
return 0; 

}