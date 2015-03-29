//
//  NSArray+BUZCategory.h
//  NSArray-BUZCategory
//
//  Created by Apro on 29/03/15.
//  Copyright (c) 2015 Apro. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (BUZCategory)

/** NSArray function that returns an item at index or nil
* if index is out of array range.
*
* @param index array index.
* @return id object at index or nil.
*/
- (id) buz_objectAtIndexOrNil:(NSUInteger)index;

@end
