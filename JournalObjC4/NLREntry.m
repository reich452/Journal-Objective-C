//
//  NLREntry.m
//  JournalObjC4
//
//  Created by Nick Reichard on 3/10/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import "NLREntry.h"

@implementation NLREntry


// Initializer memberize. 
- (instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText timestamp:(NSDate *)timestamp
{
    self = [super init];
    if (self) {
        _title = title;
        _bodyText = bodyText;
        _timestamp = timestamp;
    }
    return self; 
}

@end
