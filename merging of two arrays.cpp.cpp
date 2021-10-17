#include<iostream>
using namespace std;
int n,m,NA=0,NB=0,NC=0;
int arr1[50],arr2[50],arr3[100];
void input(){
   cout<<"Enter the size of 1st array";
         cin>>n;
         cout<<"Enter the array elements";
       for(int i=0;i<n;i++){
        cin>>arr1[i];
       }
     cout<<"Enter the size of 2nd  array";
         cin>>m;
         cout<<"Enter the array elements";
       for(int i=0;i<m;i++){
        cin>>arr2[i];
       }
}

void merging(){
      while(NA<n && NB<m){
        if(arr1[NA]<=arr2[NB]){
            arr3[NC]=arr1[NA];
            NA=NA+1;
            NC=NC+1;
        }
        else{
            arr3[NC]=arr2[NB];
            NB=NB+1;
             NC=NC+1;
        }
      }
      if(NA==n){
        while(NB<m){
            arr3[NC]=arr2[NB];
            NB=NB+1;
            NC=NC+1;
        }
      }
      else{
        while(NA<n){
            arr3[NC]=arr1[NA];
            NC=NC+1;
            NA=NA+1;
        }
      }
}
void merged_array(){
   for(int i=0;i<n+m;i++){
    cout<<arr3[i]<<" ";
   }

}
int main(){
          input();
           merging();
            merged_array();

}
