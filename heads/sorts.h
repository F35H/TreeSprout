
inline void swap(int[] *arr, int indOne,int indTwo){
  int* num = arr[indOne];
  arr[indOne] = arr[indTwo];      
  arr[indTwo] = num; }; 