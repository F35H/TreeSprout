void binTree(int* (*arr)[TREE_NUM], int cmd, int itm){
  switch(cmd){
    case default:
    case CNSTRCT:
      **arr[0] = itm;
    break;
    case DEL:
      for(i=0;**arr[i] != itm; i++);
       
      const oneBack = (TREE_NUM -1)
       
      switch(i)
        default:
          if (**arr[i + 2] != NULL){break;}
        case oneBack:
          if (**arr[i + 1] != NULL){break;}
        case TREE_NUM:
          **arr[i] = NULL;
          return; };
      
      for(;i != (TREENUM+1);i++)
        { **arr[i] = **arr[i+1]; };   
                          
    break;
    case INSRT:
      for(i=0;**arr[i] != NULL; i++);
      **arr[i] = itm;
    break; } };  
    
  void binSearchTree(int* (*arr)[TREE_NUM], int cmd, int itm){
    switch(cmd){
      case default:
      case CNSTRCT:
        **arr[0] = itm;
      break;
      case DEL:
      break;
      case INSRT:    
        for(i = 1;;i++){
          if(**arr[i] == NULL){continue;}
          
          if( **arr[(2*i)+1] == NULL 
            && **arr[i] > **arr[(2*i)+1])
            {**arr[(2*i)+1] = itm} 
            
          if( **arr[(2*i)+2] == NULL 
            && **arr[i] < **arr[(2*i)+2])
            {**arr[(2*i)+2] = itm}    
       break;