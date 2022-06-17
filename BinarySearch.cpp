int search(vector<int>& nums, int target) {
       int n=nums.size();
        int s= 0;
        int e= n-1;
        int mid = s + (e-s)/2;
        while (s<=e){
            if (nums[mid]==target ){
              return mid; 
            }
            if (target>nums[mid]){
                s=mid+1;
            }
            if ( target<nums[mid]){
                e=mid-1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }

// Using Recursion

#include<iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e , int k ) {
    //base case
    //element not found
    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    //element found
    if(arr[mid] == k)
        return true;
    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}
int main() {
    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;
    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;
    return 0;
}
