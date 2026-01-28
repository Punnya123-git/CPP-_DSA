#include <iostream>
#include <vector>
using namespace std;

void printNums(int n){//recursive function
    if(n==1){
        cout<<"1\n";
        return;
    }
    cout<<n<<" ";
    printNums(n-1);
}

void printname(string name,int n){
    if(n<=0){
        return;
    }
    cout<<"doreamon"<<endl;
    printname(name,n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int Sum(int i , int sum){ 
    if(i<1){
        return sum;
    }
    return Sum(i-1,sum+i);
}

int fib(int n) {//tc-O(2^n)
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }

bool isSorted(vector<int>arr,int x){//tc-O(N) sc-O(N)
    if(x==0 || x==1){
        return true;
    }
    return arr[x-1]>=arr[x-2] && isSorted(arr,x-1);
}

void Reverse(vector<int>& arr,int l,int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    return Reverse(arr,l+1,r-1);
}

bool isPalindrome(int i,string s){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return isPalindrome(i+1,s);
}

//subbarray sum equals k
void printS(int idx,vector<int> & ds,int s, int sum, int nums[], int n){
    if(idx==n){
        if(s==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(nums[idx]);
    s+=nums[idx];

    printS(idx+1, ds, s, sum, nums, n);

    s-=nums[idx];
    ds.pop_back();;

    printS(idx+1, ds, s, sum, nums, n);
}

     //OR
//subbarray sum equals k
bool printS(int idx,vector<int> & ds,int s, int sum, int nums[], int n){
    if(idx==n){
        //condition satisfied
        if(s==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        //condition not satisfied
        else return false;
    }
    ds.push_back(nums[idx]);
    s+=nums[idx];

    if(printS(idx+1, ds, s, sum, nums, n)==true){
        return true;
    }

    s-=nums[idx];
    ds.pop_back();;

    //not pick
    if(printS(idx+1, ds, s, sum, nums, n)==true) return true;

    return false;
}

int main(){
    cout<<"reverse no.: ";
    printNums(4);
    cout<<endl;

    cout<<"print name n times : ";
    printname("doreamon",4);
    cout<<endl;

    cout<<"factorial : ";
    cout<<factorial(5)<<endl;
    cout<<endl;

    cout<<"sum of n : ";
    cout<<sum(5)<<endl;
    cout<<endl;

    cout<<"sum of n(different approach) : ";
    cout<<Sum(3,0)<<endl;
    cout<<endl;

    cout<<"fibonacci no.: ";
    cout<<fib(4)<<endl;
    cout<<endl;

    vector<int> arr{1,2,3,4,6,5};
    cout<<"checking whether given array is sorted or no: ";
    cout<<isSorted(arr,arr.size());//1 or 0
    cout<<endl<<endl;

    cout<<"reverse array : ";
    Reverse(arr,0,arr.size()-1);

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //string s="madam";
    cout<<"check if palindrome or not : ";
    cout<<isPalindrome(0,"madam");
    cout<<endl<<endl;

    int nums[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;
    cout<<"subbaray sum equal : "<<endl;
    printS(0, ds, 0, sum, nums, n);
    cout<<endl<<endl;

    return 0;
}