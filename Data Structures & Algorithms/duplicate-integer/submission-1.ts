class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums: number[]): boolean {
        let v = new Set<number>()
        for(let i=0;i<nums.length;i++){

          if(  v.has(nums[i])){
                return true;
            }

             v.add(nums[i]);

        }
          return false;

    }
}
