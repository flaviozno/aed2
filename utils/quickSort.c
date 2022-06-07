void quicksort(int *vector,int left,int right){
   int i, j, pivot, temp;
   if(left<right){
      pivot=left;
      i=left;
      j=right;
      while(i<j){
         while(vector[i]<=vector[pivot]&&i<right)
         i++;
         while(vector[j]>vector[pivot])
         j--;
         if(i<j){
            temp=vector[i];
            vector[i]=vector[j];
            vector[j]=temp;
         }
      }
      temp=vector[pivot];
      vector[pivot]=vector[j];
      vector[j]=temp;
      quicksort(vector,left,j-1);
      quicksort(vector,j+1,right);
   }
}
