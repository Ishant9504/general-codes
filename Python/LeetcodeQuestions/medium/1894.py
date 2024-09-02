class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        total_chalk = sum(chalk)
        k %= total_chalk
        
        for i, chalk_amount in enumerate(chalk):
            if k < chalk_amount:
                return i
            k -= chalk_amount
        
        return -1