//
//  Header.h
//  swap
//
//  Created by DuanYujia on 1/25/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef swap_Header_h
#define swap_Header_h
void swapsingle(*Node beforep){
    Node *p, *afterp;
    
    p = beforep ->next;
    afterp = p->next;
    
    p->next = afterp->next;
    beforep->next = afterp;
    afterp->next = p;
}

#endif
