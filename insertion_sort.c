#include <stdio.h>
void insersion_sort(int *array,int size);

int main(){
    int array[6] = {6,5,4,3,7,2};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Original Array:\n");
    for(int i = 0;i < size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    insersion_sort(array,size);
    printf("Sorted Array:\n");
    
    for(int i = 0;i < size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

}


void insersion_sort(int *array,int size){
    for(int i = 1;i < size;i++){
        int key = array[i];
        int j = i-1;
        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    } 
}
