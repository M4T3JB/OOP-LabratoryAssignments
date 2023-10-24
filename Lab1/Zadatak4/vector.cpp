#include "vector.hpp"

void MyVector::vector_new (size_t sz)
{
    vel = sz;
    size = 0;
    arr = new int[vel];
}
void MyVector::vector_delete()
{
    delete (arr);
}
void MyVector::vector_push_back(int n)
{
    if (size == vel)
    {
        vel = vel * 2;
        int *tmp = new int[vel];
        for (int i = 0; i < vel/2; i++)
        {
            tmp[i] = arr[i];
        }
        delete arr;
        arr == tmp;
    }
    arr[size] = n;
    size++;
}
void MyVector::vector_pop_back()
{
    arr[size - 1] = NULL;
    size--;
}
int& MyVector::vector_front()
{
    return arr[0];
}
int& MyVector::vector_back()
{
    return arr[size - 1];
}
size_t MyVector::vector_size()
{
    return size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
