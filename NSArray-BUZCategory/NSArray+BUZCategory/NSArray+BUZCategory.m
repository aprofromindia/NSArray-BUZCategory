//
//  NSArray+BUZCategory.m
//  NSArray-BUZCategory
//
//  Created by Apro on 29/03/15.
//  Copyright (c) 2015 Apro. All rights reserved.
//

#import "NSArray+BUZCategory.h"

@implementation NSArray (BUZCategory)

- (id)buz_objectAtIndexOrNil:(NSUInteger)index{
    
    if(index >= self.count) {
        return nil;
    }
    return self[index];
}

@end
