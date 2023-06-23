int search(int* nums, int numsSize, int target){
    int low=0, high=numsSize-1;
    while(low<=high){
        int m=(low+high)/2;
        
        if(nums[m]==target){
            return m;
        }
        else if (nums[m]<target){
            low=m+1;
        }
        else{
            high=m-1;
        }
    }
    
    return -1;
}