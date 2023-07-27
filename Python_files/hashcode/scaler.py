class Solution:
    # @param A : integer
    # @return an integer
    def solve(self, A):
        list1=[]
        for i in range(1,A+1):
            list1.append(i)
        for i in range(A-1):
            list1.pop()
            x=list1[A-i-2]
            list1.pop()
            list1.reverse()
            list1.extend([x])
            list1.reverse()
        return list1[0]

a=Solution()
print(a.solve(5))
print(a.solve(949306))
