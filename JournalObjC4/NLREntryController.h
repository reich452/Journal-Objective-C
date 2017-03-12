//
//  NLREntryController.h
//  JournalObjC4
//
//  Created by Nick Reichard on 3/11/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NLREntry;

@interface NLREntryController : NSObject

@property (nonatomic, strong) NSMutableArray *entries;

- (void)addEntry:(NLREntry *)entry;
- (void)removeEntry:(NLREntry *)entry;

+ (NLREntryController *)shared;


@end
