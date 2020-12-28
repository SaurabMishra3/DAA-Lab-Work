#include<stdio.h>
void  merge(int arr[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1+1], R[n2+1];
    for(int i = 1; i <= n1; i++){
        L[i] = arr[p+i-1];
    }
    for(int j = 1; j <= n2; j++){
        R[j] = arr[q+j];
    }

    L[n1+1] = 9999;
    R[n2 + 1] = 9999;
    int i = 1;
    int j = 1;
    for(int k = p; k <= r; k++){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
    }

}

void mergeSort(int arr[], int p, int r){
    if(p < r){
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);

    }
}




int main(){
    int n; 
    printf("enter the number of element  :");
    
    scanf("%d",&n);
    int arr[n+1];
    for(int i = 1; i <= n; i++) {
    printf("enter element  :");
    scanf("%d",&arr[i]);}
    mergeSort(arr, 1, n);
    for(int i = 1; i <= n; i++){
        
        printf(" %d    ",arr[i]);}
    return 0;
} 
