//Diagonal Sum:
//Write a function to calculate the sum of the main diagonal elements of a 2D array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j =i;j<=i;j++){
            sum+=array[i][j];           
        }
    }
    cout<<sum;
}