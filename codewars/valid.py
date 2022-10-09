# cook your dish here
def areBracketsBalanced(expr):
    stack = []
    for char in expr:
        if char in ["(", "{", "["]:

            stack.append(char)
        else:
            if not stack:
                return False
            current_char = stack.pop()
            if current_char == '(':
                if char != ")":
                    return False
            if current_char == '{':
                if char != "}":
                    return False
            if current_char == '[':
                if char != "]":
                    return False

    if stack:
        return False
    return True

if __name__ == "__main__":
    for i in range(n):
        expr=input()
        if areBracketsBalanced(expr):
          print("Balanced")
        else:
          print("Not Balanced")