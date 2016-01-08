class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        majority_element = 0
        count = 0
        
        for el in nums:
            if count == 0:
                majority_element = el
                count += 1
            else:
                if el == majority_el:
                    count += 1
                else:
                    count -= 1
        
        return majority_element