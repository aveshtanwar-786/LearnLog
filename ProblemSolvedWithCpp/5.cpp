#include <iostream>

#include <algorithm>
using std::cout;
using std::endl;

template<typename T>
bool vectorIncludes(vector<T> &v, const T& key)
{
if (std::find(v.begin(), v.end(), key) != v.end()){
return true;
} else {
return false;
}
}
int main() {
int key = 72;
vector<int> arr1 = {10, 22, 77, 123, 15, 62};
vectorIncludes(arr1, key) ?
cout << "arr1 includes " << key << endl :
cout << "arr1 does not include " << key << endl;
return 0;
}