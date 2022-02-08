#include<iostream>
using namespace std;

int knapsack(int value[], int weight[], int items, int capacity )
{
    if (capacity <0 )
        return INT32_MIN;

    if (items < 0 || capacity ==0 )
        return 0;
    int in = value[items] + knapsack(value, weight, items-1, capacity - weight[items]);
    int ex = knapsack(value, weight, items -1, capacity);
    return max(in,ex);

}

int main()
{
    int v[]={10,20,30,40,60,70};
    int w[] ={1,2,3,6,7,4};
    int W =7;
    int n = sizeof(v)/ sizeof(v[0]);
    
    cout<<"Knapsack value is "<<knapsack(v,w,n-1,W)<<endl;
    return 0;
}