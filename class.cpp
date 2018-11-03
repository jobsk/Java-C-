# include <iostream>
using namespace std;

class Arr
{
    int max;
    int * s;
    int * test;
    
    public:
    Arr();
    int Max();
    void display();
};
    
Arr::Arr()    
{
    int x[7] = {17, 15, 3, 1, 23,6, 7};
    test = x;
    s = new int[7];
    for (int i = 0; i < sizeof(x)/sizeof(int); i++)
    {
        s[i] = x[i];
        cout << s[i] <<endl;
    }
    
    max = s[0];
}

int Arr::Max
()
{
    for (int i = 1; i < sizeof(s)/sizeof(int); i++)
    {
        if (max <= s[i])
            max = s[i];
    }
    return max;
}
    
void Arr::display()
{
    cout << "the array is; ";
    for (int i = 0; i < sizeof(s)/sizeof(int); i++)
    {
        cout << s[i] << " ";
        }
    cout << endl;
    cout << " the max value is " << Max() <<endl;
}

int main()
{
   Arr a;
   a.display();
   return 0;
   }

    
        
     