#include
int shellSort(int A[], int n){
    int incr = n /2;
    int t;
    while(incr > 0){
        for(int i = incr; i < n; i++){
            int j = i - incr;
 
            while (j > 0)
            {
                if(A[j] > A[j+incr]){
                    //swap them
                    t = A[j];
                    A[j] = A[j+incr];
                    A[j+incr] = t;
                    j = j - incr;
                }
                else{
                    j = 0;
                }
            }
        }
        incr = incr / 2;
    }
    printf("\nSorted Array: ");
    for(int i = 1; i < n; i++) printf("%d    ",A[i]);
}
 
int main(){
    int n;
   scanf("%d",&n);
printf("enter  number of elements  :");
 
    int arr[n+1];
    for(int i = 1; i <= n; i++) scanf("%d  ",&arr[i]);
    printf( "Input Sort: ");
    for(int i = 1; i <= n; i++) printf("%d   ",arr[i]);
    shellSort(arr, n+1);
    return 0;
}
