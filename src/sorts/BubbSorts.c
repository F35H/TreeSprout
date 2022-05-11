
void BubbleSort(int[] *arr, const arrSize){
  int i = 0;  
  bool s;

  for (; n < (arrSize - 1); n++){
    for (; i < arrSize; ++i){
      if (*arr[i - 1] > *arr[i]){
        swap(arr, i, (i-1)); } } } };
       
void CocktailSort(int[] *arr, const arrSize){
  int i = 0;  
  bool s;

  for (; n < (arrSize - 1); n++){
    for (; i < arrSize; ++i){
      if (*arr[i - 1] > *arr[i]){
        swap(arr, i, (i-1)); } }
          
    for (; i < arrSize; --i){
      if (*arr[i] > *arr[i - 1]){
        swap(arr, i, (i-1)); } } } };
      
void CombSort(int[] *arr, const arrSize){
  int n = 0;
  int i = 0;
  float j = (arrSize  * 0.5)
  
  for(;n < (arrSize - 1); n++){
    for (; i < arrSize; ++i, j--){
      if (*arr[i] > *arr[j]){
        swap(arr, i, j); } } } };

 void OddEvenSort(int[] *arr, const arrSize){
  int i = 0;  
  bool s;

  for (; n < (arrSize - 1); n++){
    for (; i < arrSize; i += 2;){
      if (*arr[i + 1] > *arr[i]){
        swap(arr, i, (i+1)); } }
          
    for (i = 1; i < arrSize; i += 2){
      if (*arr[i] > *arr[i + 1]){
        swap(arr, i, (i+1)); } } } };
