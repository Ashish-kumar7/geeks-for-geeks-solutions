class Geeks{
    static void printArr(int arr[],int n){
        //Your code for printing arr here
        for(int i=0;i<n;i++){
            System.out.print(arr[i]);
            System.out.print(" ");
        }
        System.out.println();
    }
   static void setToZero(int arr[],int n){
        //use Arrays.fill to set arr to zero
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
    }
 static void xor1ToN(int arr[], int n){
            for(int i=0;i<n;i++){
            arr[i]=arr[i]^i;
        }
    }
}