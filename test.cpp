#include <iostream>
#include <stack>

using namespace std;

void func(int* arr, int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main(int argc, char const *argv[])
{
  int arr[] = {1,2,4,5,6,7,8,9,10};
  cout << "Ans : " << arr[9];
  func(arr,2,3);
  for (int i = 0; i < 10; ++i){
    cout << arr[i] << ' ';
  }
  return 0;
}