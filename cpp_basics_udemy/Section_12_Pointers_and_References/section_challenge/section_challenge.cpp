#include <iostream>

using namespace std;

int *apply_all(const int *const arr1, size_t arr1_size, const int *const arr2, size_t arr2_size)
{
    int *new_storage{nullptr};
    new_storage = new int[arr1_size * arr2_size];

    int idx{0};
    for (size_t i = 0; i < arr2_size; i++)
    {
        for (size_t j = 0; j < arr1_size; j++)
        {
            new_storage[idx] = arr1[j] * arr2[i];
            idx++;
        }
    }

    return new_storage;
}

void print(const int *const arr, size_t size)
{
    cout << "[ ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";

    cout << endl;
}

int main(int argc, char const *argv[])
{
    int array1[]{1, 2, 3, 4, 5, 6};
    int array2[]{10, 20, 30, 40};

    const size_t arr1_size{sizeof(array1) / sizeof(array1[0])};
    const size_t arr2_size{sizeof(array2) / sizeof(array2[0])};

    cout << "Array 1: ";
    print(array1, arr1_size);

    cout << "Array 2: ";
    print(array2, arr2_size);

    int *results = apply_all(array1, arr1_size, array2, arr2_size);
    cout << "Result: ";
    print(results, (arr1_size * arr2_size));

    return 0;
}
