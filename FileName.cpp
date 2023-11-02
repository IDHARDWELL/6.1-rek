#include <iostream> 
#include <time.h>
#include <iomanip>
using namespace std;

void Create(int* t, const int size, const int Low, const int High, int i)
{
    t[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(t, size, Low, High, i + 1);
}
void Print(int* t, const int size, int i)
{
    cout << setw(4) << t[i];
    if (i < size - 1)
        Print(t, size, i + 1);
    else
        cout << endl;
}
int Sum(int* t, const int size, int i) {
    if (i < size) {
        if (!(t[i] % 2 == 0) || (t[i] < 0)) {
            int el = t[i];
            t[i] = 0;
            return el + Sum(t, size, i + 1);
        }
        else
            return Sum(t, size, i + 1);
    }
    return 0;
}
int Count(int* t, const int size, int i) {
    if (i < size) {
        if (!(t[i] % 2 == 0) || (t[i] < 0)) {
            return 1 + Count(t, size, i + 1);
        }
        else
            return Count(t, size, i + 1);
    }
    return 0;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int t[n];
    int Low = -5;
    int High = 12;

    Create(t, n, Low, High, 0);
    Print(t, n, 0);
    cout << "Sum: " << Sum(t, n, 0) << ", Count: " << Count(t, n, 0) << endl;
    Print(t, n, 0);

    return 0;
}