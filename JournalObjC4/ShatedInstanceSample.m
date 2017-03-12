//
//  ShatedInstanceSample.m
//  JournalObjC4
//
//  Created by Nick Reichard on 3/11/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

#import "ShatedInstanceSample.h"

// Implementation file 

@implementation ShatedInstanceSample

// Dosent exist in memory untill it is ran

+ (ShatedInstanceSample *)shared {
    static ShatedInstanceSample *shared = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [ShatedInstanceSample new];
    });
    return shared;
    
}

// the + is a class method. (Inside the () is what you want to return)
// The * is a pointer that maps to a an instance in memory
// Passed by reference vs pass by value



@end
