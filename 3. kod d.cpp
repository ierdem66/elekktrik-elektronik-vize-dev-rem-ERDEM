void insertion(int array[],int size)
{
   
    int i,j,temp;
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }
   
    for(i=0;i<size;i++)
        printf("%d ",array[i]);   
}



int main(int argc, char *argv[]) {
    int dizi[]={9,4,6,2,8,1};
   
    bubble(dizi,6);
    puts("");
    selection(dizi,6);
    puts("");
    insertion(dizi,6);
    getch();
    return 0;
}
