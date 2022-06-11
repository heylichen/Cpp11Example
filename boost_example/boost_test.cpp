//
// Created by lc on 2022/6/5.
//
//
// Created by lc on 2022-6-4.
//
#include <algorithm>
#include<stdio.h>
#include<iostream>
#include <functional>
#include <numeric>
#include <vector>

#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

//this is a hello world program on boost_example library
int main() {
    int i = lexical_cast<int>("123");
    cout << i << endl;
    std::vector<int> v ;
    return 0;
}