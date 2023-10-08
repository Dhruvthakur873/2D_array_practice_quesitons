//reverse columns:
//Write a function to reverse each columns of a 2D array in ascending order.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<3;i++){
        int k = 0;
        int j = 2;

        while(k<=j){
            swap(array[k][i],array[j][i]);
            k++;
            j--;
        }
    }
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<array[i][j]<<"  ";         
        }cout<<endl;
    }
    

}