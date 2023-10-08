//Write a code to check if a given matrix is symmetric.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{2,1,4},{3,4,1}};
    bool flag = true;
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            if(array[i][j]!=array[j][i]){
                flag = false;
            }
            
        }
    }
    if(flag){
        cout<<"The matrix is symmetric";
    }
    else cout<<"no symmetry";
}