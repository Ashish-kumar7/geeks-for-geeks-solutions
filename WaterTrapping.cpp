#include <iostream>
#include <algorithm>
using namespace std ;

int total_water(int arr[], int n){
  int total_sum = 0 ;
  int left_max =arr[0] ;
  int right_max = arr[n-1] ;
  for(int i=1;i<n-1;i++){
    left_max = (arr[i]>left_max)?arr[i]:left_max ;
    for(int j=n-2;j>=i;j--){
      right_max = (arr[j]>right_max)?arr[j]:right_max ;
      }
      total_sum = std::min(left_max,right_max) - arr[i] + total_sum ;
      
  }
  return total_sum ;
}

int main(){
  int wall[] = {3,0,2,0,4} ;
  int size = sizeof(wall)/sizeof(wall[0]) ;
  cout<<total_water(wall,size) ;
  return 0 ;
}


