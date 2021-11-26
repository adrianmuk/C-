#include <iostream>

using namespace std;
struct item{
    int arr[5];
    string name;

};
int main()
{
    item product;
    product.arr[5] = {1, 2, 3, 4, 5};
    cout<<product.arr[1];
    return 0;
}
