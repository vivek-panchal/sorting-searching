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
