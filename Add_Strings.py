class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        import sys
        sys.set_int_max_str_digits(10000)
        int_num1 = int (num1)
        int_num2 = int (num2)
        
        result = int_num1 + int_num2
        
        return str(result)