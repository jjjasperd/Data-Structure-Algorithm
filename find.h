//
//  find.h
//  find
//
//  Created by DuanYujia on 1/25/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef find_find_h
#define find_find_h

#include<iterator>

template <typename iterator, typename Object>
iterator find(iterator start, Iterator end, const Object &x){
    
    iterator iter = start;
    while(iter != end && iter != x){
        ++iter
    }
    return iter;
}


#endif
