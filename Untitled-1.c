#include<stdio.h>
//计算过程：递归
int Fib1(int n)
{
    printf("%d ",n);
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    return Fib1(n - 1) + Fib1(n - 2);
}

//迭代计算过程的中间过程
int iter(int n,int k,int before_result,int result)
{
    printf("Fib2(%d,%d,%d,%d)\n",n,k,before_result,result);
    if(n == 0 || n == 1 || k == n)
    {
        return result;
    }
    else
        return Fib2(n,k+1,result,result + before_result);
}
//计算过程：迭代
int Fib2(int n)
{
    return iter(n,1,0,1);
}
int main()
{
    printf("%d",Fib(30));
}
