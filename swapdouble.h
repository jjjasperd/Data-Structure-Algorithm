//
//  swapdouble.h
//  swap
//
//  Created by DuanYujia on 1/25/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef swap_swapdouble_h
#define swap_swapdouble_h
void swapdouble(*Node p, *Node afterp){
    *Node beforep;
    
    beforep = p -> prev;
    afterp = p -> next;
    
    p ->next = afterp -> next;
    afterp -> next = p;
    beforep -> next = afterp;
    p ->prev = afterp;
    p ->next->prev = p;
    afterp -> prev = beforep;
    
    
}

#endif
