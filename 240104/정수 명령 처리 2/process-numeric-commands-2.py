from collections import deque

class Queue:
    def __init__(self): # 빈 큐 하나를 생성한다.
        self.dq = deque() 

    def push(self,item):
        self.dq.append(item)

    def empty(self): # 큐가 비어있으면 True를 반환한다.
        return not self.dq

    def size(self):
        return len(self.dq)

    def pop(self): # 큐의 맨 앞에 있는 데이터를 반환하고 제거한다.
        if self.empty():
            raise Exception("Queue is empty")
        
        return self.dq.popleft()

    def front(self): # 큐의 맨 앞에 있는 데이터를 제거하지 않고 반환한다.
        if self.empty():
            raise Exception("Queue is empty")

        return self.dq[0]

n = int(input())
q = Queue()

for _ in range(n):
    command = input()

    if command.startswith("push"):
        x =int(command.split()[1])
        q.push(x)

    elif command.startswith("pop"):
        print(q.pop())

    elif command == "size":
        print(q.size())

    elif command == "empty":
        print(1 if q.empty() else 0)
    
    elif command == "front":
        print(q.front())