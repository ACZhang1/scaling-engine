#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout); 
     //Idea: first read in n
    //use math to calculate if we don't miss any number,
    //the total should be n(n+1)/2

    //read in n-1 numbers and add them up
    //the difference between the two sums is the missing number
    cin>>n;
    int x = n(n+1)/2;
    int sum = 0;
    for(int i = 0; i < n-1; ++i){
        int tmp;
        cin>>tmp;
        sum += tmp;
    }
    int ans = x-sum;
    cout<<ans<<endl;
}