/* 
 * File:   main.cpp
 * Author: caoshan
 *
 * Created on August 17, 2015, 9:21 AM
 */

#include <cstdlib>
#include <iostream>

typedef int Numver[10];

using namespace std;

/*
 * 假定x = 9999。 答案：8

思路：将x转化为2进制，看含有的1的个数。
 */

class test{
public:
 int func(int x) 
{ 
int countx =0; 
while(x) 
{ 
countx ++; 
x = x&(x-1);
//cout<<x<<endl;
} 
return countx; 
}
};

int main(int argc, char** argv) {
    cout<<"Hello World"<<endl;
    int out;
    test testobj;
    out=testobj.func(9);
    cout<<out<<endl;
    
    return 0;
}



