
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int a,i,temp=1;
    int calc()
    {
        
        for(i=1;i<=a;i++)
        {
        temp=temp*i;
        }
        cout<<temp;
        return 0;
    }
};
int main()
{
  sample s;
  cin>>s.a;
  s.calc();
}
