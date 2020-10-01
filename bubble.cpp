#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubble_sort(vector<int> a){
    int n = a.size();
    bool s;
    for(int i =0;i<n-1;i++){
         s = false;
        for(int j=0;j<n-i-1;j++){
            
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                // swap(a[j],a[j+1]);
                s = true;
            }
        }
        if(s == false){
            break;
        }
    }
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }


}
int main(){
    vector<int> lol= {7,11,89,8,5,47.53,67,65,45};
    bubble_sort(lol);
    // for(int i=0;i<lol.size();i++){
    //     cout << lol[i] << " ";
    // }

}
