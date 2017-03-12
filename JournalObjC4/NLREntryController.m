//
//  NLREntryController.m
//  JournalObjC4
//
//  Created by Nick Reichard on 3/11/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//  // Primary job is to manage our entries

#import "NLREntryController.h"

@implementation NLREntryController

- (void)addEntry:(NLREntry *)entry
{
    [self.entries addObject:entry];
}

- (void)removeEntry:(NLREntry *)entry
{
    [self.entries removeObject:entry]; 
}

+ (NLREntryController *)shared {
    static NLREntryController *shared = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [NLREntryController new];
    });
    return shared;
}


@end
