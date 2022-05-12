
inline void swap(int* (*arr)[499], int indOne,int indTwo){
  int* num = *arr[indOne];
  *arr[indOne] = *arr[indTwo];      
  *arr[indTwo] = num; }; 
  
  void bubbleSort(int* (*arr)[499]);
  void cocktailSort(int* (*arr)[499]);
  void combSort(int* (*arr)[499]);
  void oddEvenSort(int* (*arr)[499]);
  
  void insertSort(int* (*arr)[499]);
  void gnomeSort(int* (*arr)[499]);
  void librarySort(int* (*arr)[499]);
  void patienceSort(int* (*arr)[499]);
  void shellSort(int* (*arr)[499]);