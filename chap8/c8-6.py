class MyStack():
    def __init__(self, data):
        self.num_list = data

    def push(self, elem):
        self.num_list.append(elem)

    def pop(self):
        if self.is_empty() == True:
            return None
        else:
            x = self.num_list[-1]
            self.num_list = self.num_list[:-1]
        return x

    def is_empty(self):
        return self.num_list == []

    def clear(self):
        self.num_list = []

if __name__ == '__main__':
    st = MyStack([5, 2, 3])
    print(st.pop())
    print(st.pop())
    st.push(8)
    st.push(9)
    print(st.pop())
    print(st.pop())
    print(st.pop())
    print(st.pop())
