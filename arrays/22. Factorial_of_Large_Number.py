def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)
n=int(input())
print(factorial(n))
# for gfg type list output format
# def helper(n):
#     if n == 1:
#         return 1
#     return n * helper(n - 1)
# class Solution:
#     def factorial(self, n):
#         ans=str(helper(n))
#         ans2=[int(x) for x in ans]
#         return ans