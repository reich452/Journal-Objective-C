//
//  NLREntry.h
//  JournalObjC4
//
//  Created by Nick Reichard on 3/10/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NLREntry : NSObject

@property (nonatomic, strong)NSString* title;
@property (nonatomic, strong)NSString* bodyText;
@property (nonatomic, strong)NSDate* timestamp;

-(instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText timestamp: (NSDate *)timestamp;

@end
