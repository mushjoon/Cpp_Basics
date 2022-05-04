#include <iostream>
#include <vector>

using namespace std;

void printMenu();
void printNumbers(vector<int> *);
void addNumber(vector<int> *);
double getMean(vector<int> *);
int getSmallest(vector<int> *);
int getLargest(vector<int> *);

int main(int argc, char const *argv[])
{
    bool done{false};
    vector<int> myVec{};

    do
    {
        cout << "\n==================== MENU ========================";
        printMenu();
        char userInput{};
        cin >> userInput;
        userInput = tolower(userInput);

        switch (userInput)
        {
        case 'q':
            cout << "Good Bye!" << endl;
            done = true;
            break;
        case 'p':
            printNumbers(&myVec);
            break;
        case 'a':
            addNumber(&myVec);
            break;
        case 'm':
            if (getMean(&myVec) == 0)
            {
                cout << "Unable to calculate the mean - no data\n";
            }
            else
            {
                cout << "The mean is: " << getMean(&myVec) << endl;
            }
            break;
        case 's':
            if (getSmallest(&myVec) == 0)
            {
                cout << "Unable to determine the smallest number - list is empty\n";
            }
            else
            {
                cout << "The smallest number is: " << getSmallest(&myVec) << endl;
            }
            break;
        case 'l':
            if (getLargest(&myVec) == 0)
            {
                cout << "Unable to determine the largest number - list is empty\n";
            }
            else
            {
                cout << "The largest number is: " << getLargest(&myVec) << endl;
            }
            break;
        default:
            cout << "Unknown command - try again\n";
            break;
        }

    } while (done == false);

    return 0;
}

void printMenu()
{
    cout << "\nP - Print numbers\n";
    cout << "A - Add a number\n";
    cout << "M - Display mean of the numbers\n";
    cout << "S - Display the smallest number\n";
    cout << "L - Display the largest number\n";
    cout << "Q - Quit\n";
    cout << "Enter your choice: ";
}

void printNumbers(vector<int> *vec)
{
    if (vec->size() == 0)
    {
        cout << "[] - the list is empty\n";
    }
    else
    {
        cout << "[ ";
        for (int i = 0; i < vec->size(); i++)
        {
            cout << vec->at(i) << " ";
        }
        cout << "]" << endl;
    }
}

void addNumber(vector<int> *vec)
{
    int newInt{};
    cout << "Enter an integer to add to the list: ";
    cin >> newInt;
    vec->push_back(newInt);
}

double getMean(vector<int> *vec)
{
    int sum{}; 
    double mean{};

    if (vec->size() == 0)
    {
        mean = 0.0;
    }
    else
    {
        for (int i = 0; i < vec->size(); i++)
        {
            sum += vec->at(i);
        }

        mean = static_cast<double>(sum) / vec->size();
    }

    return mean;
}

int getSmallest(vector<int> *vec)
{
    int smallest{};

    if (vec->size() == 0)
    {
        smallest = 0;
    }
    else
    {
        smallest = vec->at(0);

        for (int i = 0; i < vec->size(); i++)
        {
            if (vec->at(i) < smallest)
            {
                smallest = vec->at(i);
            }
        }
    }

    return smallest;
}

int getLargest(vector<int> *vec)
{
    int largest{};

    if (vec->size() == 0)
    {
        largest = 0;
    }
    else
    {
        largest = vec->at(0);

        for (int i = 0; i < vec->size(); i++)
        {
            if (vec->at(i) > largest)
            {
                largest = vec->at(i);
            }
        }
    }

    return largest;
}