class Solution {
public:
    int firstOccurance(vector<int>& nums, int target) {
        int start = 0;
        int end  = nums.size() - 1;
        int mid = start + (end-start)/2;
        int ans  = -1;
        while(start <= end ) {
            if(nums[mid] == target){
                ans  = mid;
                end = mid -1;

            }else if (target > nums[mid]){
                start =  mid +1;
            }else if  (target < nums[mid]){
                end = mid -1;
            }
            mid = start +(end-start)/ 2;
        }
        return ans;
}
 int lastOccurance(vector<int>& nums, int target) {
        int start = 0;
        int end  = nums.size() - 1;
        int mid = start + (end-start)/2;
        int ans  = -1;
        while(start <= end ) {
            if(nums[mid] == target){
                ans  = mid;
                start = mid +1;

            }else if (target > nums[mid]){
                start =  mid +1;
            }else if  (target < nums[mid]){
                end = mid -1;
            }
            mid = start +(end -start)/ 2;
        }
        return ans;
}
vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurance(nums, target);
        int last = lastOccurance(nums, target);

     
        return {first, last};
    }
};