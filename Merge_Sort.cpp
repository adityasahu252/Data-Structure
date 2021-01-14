#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void Merge_the_list(int arr[],int lb,int mid,int ub)
{        
            int k=lb;
          int  i=lb;
           int j=mid+1;
     int temp[ub - lb+1];//this is the formula for defining the array size.
           
           while (i<=mid && j<=ub)
           {
               if(arr[i]<=arr[j])
               {
                   temp[k]=arr[i];
                   i++;
                   k++;

               }
               else
               {
                   temp[k]=arr[j];
                   j++;
                   k++;
               }
           }
           
            if(i>mid){
                while(j<=ub)
                {
                        temp[k]=arr[j];
                        j++;
                        k++;
                }
            }
            else{
                while(i<=mid){
                    temp[k]=arr[i];
                    i++;
                    k++;
                }
            }
            
       for(int h=lb;h<=ub;h++)  
        {
           arr[h]=temp[h];
           cout<<arr[h];
          
           
       }
    
      

}

void Merge_Sort(int arr[],int lb, int ub){

    if (lb<ub)
    {
        int mid=(lb+ub)/2;
        Merge_Sort(arr,lb,mid);
        Merge_Sort(arr,mid+1,ub);
        Merge_the_list(arr,lb,mid,ub);
         
        
    }

     

    

}

 



int main(){
    system("cls");
    int arr[]={9, 3, 5, 2, 8, 6, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    Merge_Sort(arr,0,size-1);
    printArray(arr,size);
    
return 0;
}