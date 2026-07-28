class Solution:
    def lexicalOrder(self, n):
        result = []

        for i in range(1, n + 1):
            result.append(str(i))

        result.sort()

        return [int(x) for x in result]