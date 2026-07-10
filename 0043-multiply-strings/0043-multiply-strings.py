class Solution(object):
    def multiply(self, num1, num2):
        if num1 == "0" or num2 == "0":
            return "0"

        res = [0] * (len(num1) + len(num2))

        for i in range(len(num1) - 1, -1, -1):
            for j in range(len(num2) - 1, -1, -1):
                mul = (ord(num1[i]) - ord('0')) * (ord(num2[j]) - ord('0'))

                p1 = i + j
                p2 = i + j + 1

                total = mul + res[p2]
                res[p2] = total % 10
                res[p1] += total // 10

        ans = ""
        for x in res:
            if not (ans == "" and x == 0):
                ans += str(x)

        return ans