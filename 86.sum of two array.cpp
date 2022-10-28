#include<iostream>
#include<vector>
using namespace std;
/*void reverse(int ans[],int a)
{
    int s=0;
    int e=a-1;
    while(s<e){
        swap(ans[s++],ans[e--]);
    }
}
int sumarray(int arr1[],int n,int arr2[],int m)
{
   int i=n-1;
   int j=m-1;
   int carry=0;
   int ans;
   while(i>=0 && j>=0){
      int sum=arr1[i]+arr2[j]+carry;
      carry=sum/10;
      sum=sum%10;
      ans=sum;
      i--;
      j--;
   }
   //1st part
   while(i>=0 ){
     int sum=arr1[i]+carry;
      carry=sum/10;
      sum=sum%10;
      ans=sum;
      i--;

   }
   //2nd part
   while(j>=0){
     int sum=arr2[j]+carry;
      carry=sum/10;
      sum=sum%10;
     ans=sum;
      j--;
   }
   while(carry !=0){
     int sum=carry;
      carry=sum/10;
      sum=sum%10;
     ans=sum;
      j--;
   }
   int a;
   if(n<=m){
    a=n;
   }
   else{
    a=m;
   }
    //reverse(ans,a);
    return ans;
    int arr[];
    printArray(arr[],a);
}
void printArray(int ans[],int a)
{
    for(int i=0;i<a;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,m;
  int arr1[]={1,3,5};
  int arr2[]={6,7};
  sumarray(arr1,n,arr2,m);

}*/
int calSumUtil(int a[], int b[], int n, int m)
{
    // array to store sum.
    int sum[n];

    int i = n - 1, j = m - 1, k = n - 1;

    int carry = 0, s = 0;
    while (j >= 0) {

        // find sum of corresponding element
        // of both arrays.
        s = a[i] + b[j] + carry;
        sum[k] = (s % 10);

        // Finding carry for next sum.
        carry = s / 10;

        k--;
        i--;
        j--;
    }

    // If second array size is less the first
    // array size.
    while (i >= 0) {

        // Add carry to first array elements.
        s = a[i] + carry;
        sum[k] = (s % 10);
        carry = s / 10;

        i--;
        k--;
    }

    int ans = 0;

    // If there is carry on adding 0 index elements.
    // append 1 to total sum.
    if (carry)
        ans = 10;

    // Converting array into number.
    for (int i = 0; i <= n - 1; i++) {
        ans += sum[i];
        ans *= 10;
    }

    return ans / 10;
}

// Wrapper Function
int calSum(int a[], int b[], int n, int m)
{
    // Making first array which have
    // greater number of element
    if (n >= m)
        return calSumUtil(a, b, n, m);

    else
        return calSumUtil(b, a, m, n);
}

// Driven Program
int main()
{
    int a[] = { 9, 3, 9 };
    int b[] = { 6, 1 };

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    cout << calSum(a, b, n, m) << endl;

    return 0;
}
