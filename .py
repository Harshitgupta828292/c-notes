class MyArray:
    def __init__(self, total_size, used_size):
        self.total_size = total_size   # reserve size (sirf info ke liye)
        self.used_size = used_size     # actual used elements
        self.ptr = [0] * total_size    # list of given size (like malloc in C)

    def set_val(self):
        for i in range(self.used_size):
            val = int(input(f"Enter the element {i}: "))
            self.ptr[i] = val

    def show(self):
        for i in range(self.used_size):
            print(self.ptr[i], end=" ")
        print()


# Main part (like C me int main)
if __name__ == "__main__":
    marks = MyArray(10, 5)   # 10 reserve, 5 used
    print("We are running set_val now")
    marks.set_val()
    print("We are running show now")
    marks.show()
