class DynamicArray {
    int* arr;
    int capacity;
    int idx;
public:
    DynamicArray(int capacity) {
        this->idx = 0;
        this->capacity = capacity;
        arr = new int[capacity] {};
    }

    ~DynamicArray() {
        delete[] arr;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (capacity <= idx) {
            resize();
        }
        arr[idx++] = n;
    }

    int popback() {
        idx--;
        return arr[idx];
    }

    void resize() {
        int* newarr = new int[capacity*2] {};
        for (int i = 0; i < capacity; i++) {
            newarr[i] = arr[i];
        }
        capacity *= 2;
        delete[] arr;
        arr = newarr;
    }

    int getSize() {
        return idx;
    }

    int getCapacity() {
        return capacity;
    }
};
