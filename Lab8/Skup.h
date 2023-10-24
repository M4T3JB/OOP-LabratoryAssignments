#pragma once
#include <string>
using namespace std;

template <typename T>
class Array {
    T* arr;
    int size;
    int cnt;
public:

    Array(int size) : size(size), arr(new T[size]) {}

    void remove(int nmb)
    {
        int index = -1;
        for (int i = 0; i < cnt; i++) {
            if (arr[i] == nmb) {
                index = i;
                break;
            }
        }
        if (index == -1)
            return;

        for (int i = index; i < cnt - 1; i++) {
            arr[i] = arr[i + 1];
        }
        cnt--;
    }

    void print() {
        for (int i = 0; i <= cnt - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    }

    bool check(int num) {
        for (int i = 0; i < cnt - 1; i++) {
            if (num == arr[i])
                return 1;
        }

        return 0;
    }


    void add(T element) {
        if (cnt >= size) {
            T* novi = new T[size * 2];
            for (int i = 0; i < cnt; i++) {
                novi[i] = arr[i];
            }
            delete[] arr;
            arr = novi;
            size *= 2;
        }
        arr[cnt] = element;
        cnt++;
    }

    ~Array() {
        delete[] arr;
    }




};