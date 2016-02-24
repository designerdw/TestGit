//
//  main.cpp
//  Test3
//
//  Created by 박대웅 on 2016. 2. 24..
//  Copyright © 2016년 박대웅. All rights reserved.
//

//#include <cstdio>
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <cassert>

#include "TemplateDef.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Using reverse algorithm with a list" << endl;
    list<char> list1 = make<list<char>>("mark twain");
    reverse(list1.begin(), list1.end());
    assert(list1 == make<list<char>>("niawt kram"));
    cout << " --- Ok." << endl;
    
    cout << "Demonstrating generic find algorithm with an array." << endl;
    char s[] = "C++ is a better C";
    size_t len = strlen(s);
    const char* where = find(&s[0], &s[len], 'e');
    assert(*where == 'e' && *(where + 1) == 't');
    cout << " --- Ok." << endl;
    
    cout << "Demonstrating generic find algorithm with an vector." << endl;
    vector<char> vector1 = make<vector<char>>("mark twain");
    vector<char>::iterator where2 = find(vector1.begin(),vector1.end(),'t');
    assert(*where2 == 't' && *(where2.operator++()) == 'w');
    //assert(*where2 == 't' && *(where2 + 1) == 'w');
    //assert(*where2 == 't' && *(where2++) == 'w');
    cout << " --- Ok." << endl;
    
    return 0;
}
