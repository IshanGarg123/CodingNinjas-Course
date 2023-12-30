
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int a[], int low, int high)
{
    int pivot, index, i;
    index = low;
    pivot = high;

    for(i = low; i < high; i++) {
        if(a[i] < a[pivot]) {
            swap(&a[i], &a[index]);
            index++;
        }
    }

    swap(&a[pivot], &a[index]);

    return index;
}
int QuickSort(int a[], int low, int high)
{
    int pindex = high;
    if(low < high) {
        int pindex = Partition(a, low, high);
        
        QuickSort(a, low, pindex - 1);
        QuickSort(a, pindex + 1, high);
    }
    return 0;
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    QuickSort(input, 0, size - 1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    quickSort(a,n);

    cout << "the sorted array is" << endl;

    for(int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }
}