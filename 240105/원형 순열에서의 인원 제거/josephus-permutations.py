from collections import deque

class Queue:
    def __init__(self):
        self.dq = deque()

    def push(self, item):
        self.dq.append(item)

    def empty(self):
        return not self.dq

    def size(self):
        return len(self.dq)

    def pop(self):
        if self.empty():
            raise Exception("Queue is empty")

        return self.dq.popleft()

    def front(self):
        if self.empty():
            raise Exception("Queue is empty")

        return self.dq[0]

n, k = map(int, input().split())
q = Queue() # 큐 생성

for num in range(1, n+1) :
    q.push(num)

i = 1
while q.size() != 1:
    new_q = Queue()

    while not q.empty():
        if i % k == 0:
            print(q.pop(), end = ' ')
        else:
            new_q.push(q.pop())
        i += 1
        
    q = new_q

print(q.front())