 #include<iostream>
 using namespace std;

 void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int size3=size1+size2;

   int i=0, m=0, n=0;
   while(i<size3){

    if (m<size1 && n<size2){
       if (arr1[m]<arr2[n]){
           ans[i]=arr1[m];
           m++;
       } else {
         ans[i] = arr2[n];
         n++;
       }
    } else if (m >= size1) {
      ans[i] = arr2[n];
      n++;
    } else if (n >= size2) {
      ans[i] = arr1[m];
      m++;
    }
    i++;
}
}

// 1 2 3 4 4 6 7 11 
int main(){
    int arr1[4]={1,2,3,4}, arr2[5]={6,7,9,10,15};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[m+n];

    merge(arr1, m, arr2, n, arr3);

    for(int i=0; i<m+n; i++){
        cout<<arr3[i]<<" ";
    }

}