#include "sorts.h"

void bubbleSort(int* (*arr)[SORT_NUM]){
  size_t n = 0;
  size_t i = 0;  

  for (; n < (SORT_NUM  - 1); n++){
    for (; i < (SORT_NUM - 1); ++i){
      if (**arr[i - 1] > **arr[i]){
        swap(arr, i, (i-1)); } } } };
       
void cocktailSort(int* (*arr)[SORT_NUM]){
  size_t n = 0;
  size_t i = 0;  

  for (; n < (SORT_NUM - 1); n++){
    for (; i < (SORT_NUM - 1); ++i){
      if (**arr[i - 1] > **arr[i]){
        swap(arr, i, (i-1)); } }
          
    for (; i < 498; --i){
      if (**arr[i] > **arr[i - 1]){
        swap(arr, i, (i-1)); } } } };
      
void combSort(int* (*arr)[SORT_NUM]){
  size_t n = 0;
  size_t i = 0;
  size_t j = 250;
  
  for(;n < (SORT_NUM - 1); n++){
    for (; i < (SORT_NUM -1); ++i){
      if (**arr[i] > **arr[j]){
        swap(arr, i, j);
        j--; } } } };

 void oddEvenSort(int* (*arr)[SORT_NUM]){
  size_t i = 0;  
  size_t n = 0;  

  for (; n < (SORT_NUM - 1); n++){
    for (; i < (SORT_NUM - 1); i += 2){
      if (**arr[i + 1] > **arr[i]){
        swap(arr, i, (i+1)); } }
          
    for (i = 1; i < (SORT_NUM - 1); i += 2){
      if (**arr[i] > **arr[i + 1]){
        swap(arr, i, (i+1)); } } } };
