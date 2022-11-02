void quickSort(int *,int, int);

int main(){
    int *array,i,size;
    printf("Dizinin boyutunu giriniz: "); scanf("%d",&size);
    array=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("Dizinin %d. elemani :",i+1); scanf("%d",&array[i]);
    }
    printf("Dizinin baslangic durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    quickSort(array,0,size-1);
    printf("\n\nDizinin son durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

void quickSort(int *array,int first,int last){
    int i; // �lk eleman� tutacak saya� de�i�keni
    int j; // Son eleman� tutacak saya� de�i�keni
    int pivot; // Pivot eleman� tutacak saya� de�i�keni
    int tmp; // Yer de�i�tirme i�lemi i�in kullan�lacak de�i�ken
    pivot=first; // Pivot ilk eleman se�ilir
   
    // Burada yap�lan i�lem son eleman ilk elemandan b�y�kse, son eleman ilk elemandan b�y�k oldu�u s�rece ba�tan ve sondan pivottan b�y�k olan ve
    // pivottan k���k olan bir eleman se�ilip yer de�i�tirilir. 
    if(last>first){
        pivot=first;
        i=first;
        j=last;
        while (i<j){
            while (array[i]<=array[pivot] && i<last && j>i){ // Ba�tan pivottan b�y�k olan bir eleman bulunur
                i++;
            }
            while (array[j]>=array[pivot] && j>=first && j>=i){ // Sondan pivottan k���k olan bir eleman bulunur
                j--;
            }
            if (j>i){ // Swap i�lemi yap�l�r
                tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
        // Yeniden pivot se�ilir ve b�l�nen ba�l� listenin di�er par�alar� tekrar quick sort fonksiyonuna g�nderilir
        tmp=array[j];
        array[j]=array[pivot];
        array[pivot]=tmp;
        quickSort(array,first,j-1);
        quickSort(array,j+1,last);
����}

}
