#include "sorts.h"

InsertSort(int* (*arr)[499]){
  int i = 1;
  int j;
    for(;i< 499; ++i ){
      if (**arr[i - 1] > **arr[i]){
        for (j = i; j != 0; j-- ){
          swap(arr, (j-1), j);} } } };
          
GnomeSort(int* (*arr)[499]){
  int i = 0;
  bool s;
  for(;i< 499; i++){
    if (**arr[i] < **arr[i - j]){
      swap(arr, (j-1), j);      
      i--; } } };
            
