#include "sorts.h"

InsertSort(int* (*arr)[SORT_NUM]){
  size_t i = 1;
  size_t j;
  
    for(;i< SORT_NUM; ++i ){
      if (**arr[i - 1] > **arr[i]){
        for (j = i; j != 0 && 
          **arr[j-1] < **arr[j] ; j-- ){
          swap(arr, (j-1), j);} } } };
          
GnomeSort(int* (*arr)[SORT_NUM]){
  size_t i = 0;
  bool s;
  
  for(;i< SORT_NUM; i++){
    if (**arr[i] < **arr[i - j]){
      swap(arr, (j-1), j);      
      i--; } } };
      
ShellSort(int* (*arr)[SORT_NUM]){
  size_t i = 1;
  size_t j;
  int b;
  
    for(;i< SORT_NUM; ++i ){
      if (**arr[i - 1] > **arr[i]){
        for (j = i; j != 0 && 
          **arr[j] < **arr[j+b] &&
          (j+b) < SORT_NUM; j-- ){
          swap(arr,j, (j+b)); } } } };

      
