class Solution(object):
    def addToArrayForm(self, num, k):
        i = len(num) - 1
        result = []

        while i >= 0 or k > 0:
            if i >= 0:
                k += num[i]
                i -= 1

            result.append(k % 10)
            k //= 10

        result.reverse()
        return result