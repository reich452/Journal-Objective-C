//
//  ShatedInstanceSample.h
//  JournalObjC4
//
//  Created by Nick Reichard on 3/11/17.
//  Copyright © 2017 Nick Reichard. All rights reserved.
//

// Notes from video with Caleb and Apple Research 

#import <Foundation/Foundation.h>

// Header File: provides the definition for what is publicly available to that class.
// Generally you want to limit the scope of availability. both in swift (private & static) and Obj-C (header file and implementation)

@interface ShatedInstanceSample : NSObject

+ (ShatedInstanceSample *)shared;

// Ojc-C is a higher leve than C  and Swift is a higher level language than Objective-C.

@property (assign, nonatomic) NSInteger fancyInteger; // 32. in vs 64.bit system. It is not a class
@property (assign, nonatomic) float fancyFloat;
@property (strong, nonatomic) NSNumber *fancyNumber;  // Is a class. has properties. Core Data works with NSNUmbers

// ---- Property Atributes:
//  Memory management - ARC: Swift:
// Auto Matic Reference Counting - When you create a revernece to an object. You've created a relationship
// If it is a strong relationship it will hold a reference and stay in memory
// WEAK: - the property will still exist but the automatic reverence count will go to zero
// ARC: is a compiler feature that provides automatic memory management of Objective-C objects. Rather than having to think about retain and release operations, ARC allows you to concentrate on the interesting code, the object graphs, and the relationships between objects in your application

// __STRONG: is the default. An object remains “alive” as long as there is a strong pointer to it.
// __WEAK: specifies a reference that does not keep the referenced object alive. A weak reference is set to nil when there are no strong references to the object.
//__unsafe_unretained specifies a reference that does not keep the referenced object alive and is not set to nil when there are no strong references to the object. If the object it references is deallocated, the pointer is left dangling.
// __autoreleasing is used to denote arguments that are passed by reference (id *) and are autoreleased on return.

// ------ When to use WEAK -----------
// When you have two objects that reference eachother! (that have references to eachother)
// This ojbect has a property pointing to another ojbect and that other object is poining to the first object.
// ------ The TASK APP: The cell holds a refernece. if it was strong the ARC will never go back to zero
//

// ---------- When to use STRONG ------------
// Can't have 2 objects poining to eachother - because it will never be de-alocated. Can't ever leave memory.
// Possible memory leaks if they are refrencing eachother.
// The dog example. You have a leshe to the dog and the dog has a leshe to you!
// A weak reference is no leashe for a dog .
// "If you have an object and other objects have strong references to this object in memory. The system is going to keep that object in memory. But as soon as there are ZERO strong references pointing to that object, it will be cleared from memory."


@end
