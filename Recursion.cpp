#include<iostream>
using namespace std;
void printname(int i, int n){
    if(i>n) return ;
    cout<<i<<endl;
    printname(i+1,n);
}
void printreverse(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    printreverse(i-1,n);

}
void printbacktracking(int i, int n){
    if(i<1) return ;
    printbacktracking(i-1,n);
    cout<<i<<endl;
}
void printbtreverse(int i, int n){
    if(i>n) return;
    printbtreverse(i+1,n);
    cout<<i<<endl;

}
int printsum(int n){
    if(n==0) return 0;
    int sum=(n +printsum(n-1));
    return sum;
}
void printsumP(int n ,int sum){
    if(n<1){ 
        cout<<sum<<endl;
        return;
    }
    printsumP(n-1,sum+n);

}
int fact(int n){
    if (n==1) return 1;
    return (n*fact(n-1));
}
void reverseArray(int i, int arr[], int n){
    if(i>=n/2) return;
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    reverseArray(i+1 , arr, n );
}
bool stringPalindrome(int i,string &s){
    if(i>=s.size()/2) return true ;
    if(s[i] != s.size()-i-1) return false;
}
int main(){
    int n;
    cin>>n;
    printname(1,n);
    cout<<endl;
    printreverse(n,n);
    cout<<endl;
    printbacktracking(n,n);
    cout<<endl;
    printbtreverse(1,n);
    cout<<endl;
    int result = printsum(n);
    cout<<result<<endl;
    printsumP(n,0);
    cout<<endl;
    int value = fact(n);
    cout<<value<<endl;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }
    reverseArray(0,arr,n);
    for(int j= 0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    cout<<endl;
    string s;
    cin>>s;
    cout<<stringPalindrome(0,s);

}