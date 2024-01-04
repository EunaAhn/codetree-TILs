import sys

class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def empty(self):
        return not self.items #스택이 비어있으면 True를 반환함

    def size(self):
        return len(self.items)

    def pop(self):
        if self.empty():
            raise Exception("Stack is empty")
        
        return self.items.pop()

    def top(self):
        if self.empty():
            raise Exception("Stack is empty")
    
        return self.items[-1]

string = input()
s = Stack()

for char in string:
    if char == '(':
        s.push('(')
    else:
        if s.empty():
            print("No")
            sys.exit(0)
        s.pop()

if s.empty():
    print("Yes")
else:
    print("No")