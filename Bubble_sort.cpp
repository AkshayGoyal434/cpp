#include <iostream>
using namespace std;
class sort
{
private:
    int temp;
    int arr[5];

public:
    void getData()
    {
        cout << "Enter elements of Array : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter " << i + 1 << " element of Array : " << endl;
            cin >> arr[i];
        }
    }
    void bubble_sort()
    {
        for (int i = 0; i < 5 - 1; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    sort obj;
    obj.getData();
    obj.bubble_sort();
    obj.display();
    return 0;
}