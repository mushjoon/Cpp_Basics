#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};

    cout << "How many temps?";
    cin >> size;

    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    return 0;
}
