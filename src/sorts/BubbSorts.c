#include "sorts.h"

void bubbleSort(int* (*arr)[499]){
  short n = 0;
  short i = 0;  

  for (; n < (498); n++){
    for (; i < 498; ++i){
      if (**arr[i - 1] > **arr[i]){
        swap(arr, i, (i-1)); } } } };
       
void cocktailSort(int* (*arr)[499]){
  short n = 0;
  short i = 0;  

  for (; n < (498); n++){
    for (; i < 498; ++i){
      if (**arr[i - 1] > **arr[i]){
        swap(arr, i, (i-1)); } }
          
    for (; i < 498; --i){
      if (**arr[i] > **arr[i - 1]){
        swap(arr, i, (i-1)); } } } };
      
void combSort(int* (*arr)[499]){
  short n = 0;
  short i = 0;
  short j = 250;
  
  for(;n < (498); n++){
    for (; i < 498; ++i, j--){
      if (**arr[i] > **arr[j]){
        swap(arr, i, j); } } } };

 void oddEvenSort(int* (*arr)[499]){
  short i = 0;  
  short n = 0;  

  for (; n < (498); n++){
    for (; i < 498; i += 2){
      if (**arr[i + 1] > **arr[i]){
        swap(arr, i, (i+1)); } }
          
    for (i = 1; i < 498; i += 2){
      if (**arr[i] > **arr[i + 1]){
        swap(arr, i, (i+1)); } } } };
