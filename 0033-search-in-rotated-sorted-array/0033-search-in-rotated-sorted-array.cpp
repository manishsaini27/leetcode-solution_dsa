class Solution {
public:

    int getPivot(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1;
        int mid = start+(end - start)/2;
        if(nums[start] <= nums[end]){
                return 0;
            }
        while(start<end){
            

            if(nums[mid]>= nums[0]){
                start= mid+1;
            }else {
                end  = mid;
            }
            mid  = start+(end-start)/2;
        }
        return start;
    }

    int BinarySearch(vector<int>& nums,int start, int end , int key){
        int mid = start+(end-start)/2;

        while(start <= end){
            if(nums[mid] == key) {
                return mid;
            }
            if(key > nums[mid]){
                start = mid+1;
            }
            else {
                end = mid -1;
            }
            mid = start+(end-start)/2;
        }
    return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums);
        if(target>= nums[pivot] && target<= nums[n-1]){
            return BinarySearch(nums , pivot ,n-1, target);
        }else{
            return BinarySearch(nums , 0 , pivot-1 , target);
        }
    }
};