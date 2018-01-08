//Roman Madalina
//321 AC
#include <iostream>
#include <vector>
using namespace std;
template <typename T>

class Stack {
public:
bool Empty() const;
void push(const T& item);
void pop();
const T& top() const
{if (Empty())
 cout<< "Stiva este goala";
return v.back();}
vector <T> v;
int size() const;
};

template <typename T> bool Stack<T>::Empty() const
{return (v.empty());}
template<typename T> void Stack<T>::push(const T& item)

{ v.push_back(item); }

template<typename T> void Stack<T>::pop()
{if (Empty()) throw "Stiva este goala";
v.pop_back();}

    int main() {
int n;
int i;
cout<<"Cate elemente sunt in stiva? n=";
cin>>n;
Stack <int> stiva;
for (i=1;i<=n;i++)
stiva.push(i);
cout<<"Stiva este:\n";
while (!stiva.Empty())
{ cout << stiva.top() << " ";
stiva.pop();}

	return 0;
}
