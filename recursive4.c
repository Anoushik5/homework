#include <stdio.h>
   
   void print_arr(int arr[], int size);
   
   int main(){
   
       int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
       int size = 10;
       print_arr(arr,size);
      return 0;
  }
  
  void print_arr(int arr[], int size){
  
      if(size <= 0){
      return;
  }
  
  
  
  printf("%d ", arr[size - 1]);
  print_arr(arr, size - 1); // or &arr[0]
  
  
  }
 
