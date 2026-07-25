class Solution:
    def rearrangeString(self, s, x, y):
        y_chars = []
        other_chars = []
        x_chars = []

        for ch in s:
            if ch == y:
                y_chars.append(ch)
            elif ch == x:
                x_chars.append(ch)
            else:
                other_chars.append(ch)

        return "".join(y_chars + other_chars + x_chars)