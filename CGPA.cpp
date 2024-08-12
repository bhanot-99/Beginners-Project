#include<bits/stdc++.h>
using namespace std;

class CGPA
{
    public:
    float sumpoint=0;
    int calculate(int n, int *a)
    {
        for(int i=0;i<n; i++)
        {
            if(a[i] > 90)
                sumpoint +=10;
            
            else if(a[i] <= 90 && a[i] > 80)
                sumpoint += 9;
            
            else if(a[i] <= 80 && a[i] > 70)
                sumpoint += 8;
            
            else if(a[i] <= 70 && a[i] > 60)
                sumpoint += 7;
            
            else if(a[i] <= 60 && a[i] > 50)
                sumpoint += 5;
            
            else
            sumpoint += 0;
        }
        return sumpoint/n;
    }
};
 
 
int main()
{
    cout << "How many subject ?";
    int num;
    cin >> num;

    cout << "Enter the marks object in each out of 100:";
    int a[num];
    for(int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    
    CGPA func;
    cout << "Your CGPA is : " << func.calculate(num, a);


 
 return 0;
}