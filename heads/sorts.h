#define SORT_NUM 499

inline void swap(int* (*arr)[499], int indOne,int indTwo){
  int* num = *arr[indOne];
  *arr[indOne] = *arr[indTwo];      
  *arr[indTwo] = num; }; 
  
  void bubbleSort(int* (*arr)[SORT_NUM]);
  void cocktailSort(int* (*arr)[SORT_NUM]);
  void combSort(int* (*arr)[SORT_NUM]);
  void oddEvenSort(int* (*arr)[SORT_NUM]);
  
  void insertSort(int* (*arr)[SORT_NUM]);
  void gnomeSort(int* (*arr)[SORT_NUM]);
  void librarySort(int* (*arr)[SORT_NUM]);
  void patienceSort(int* (*arr)[SORT_NUM]);
  void shellSort(int* (*arr)[SORT_NUM]);