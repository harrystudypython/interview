#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include <algorithm>
#include <array>
#include <list>
#include <vector>
using namespace std;
int max_proft(vector<int> numbers)
{
    int k=numbers.size();
    if (k<2) return 0;
    int maxproft=0;
    int max_price=0;
    int in=0;
    int out = 0;
    for (int i=0; i<k; i++)
    {
        for (int j=i; j<k; j++)
        {
            max_price=numbers[j]-numbers[i]-j+i;
            if (max_price>maxproft)
            {
                maxproft=max_price;
                in=i;
                out=j;
            }
        }
        cout<<"buy"<<in<<"sold"<<out<<endl;
    }
    return 0;
}

int main()
{
    vector<int> a = {3,6,100};
    max_proft(a);
    return 0;
}
