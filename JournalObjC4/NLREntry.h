//
//  NLREntry.h
//  JournalObjC4
//
//  Created by Nick Reichard on 3/10/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NLREntry : NSObject

@property (nonatomic, copy)NSString* title;
@property (nonatomic, copy)NSString* bodyText;

-(instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText;

@end
