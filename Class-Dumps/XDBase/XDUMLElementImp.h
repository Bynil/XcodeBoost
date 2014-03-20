//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "XDUMLElement.h"

@class NSMutableDictionary;

@interface XDUMLElementImp : NSObject <XDUMLElement, NSCoding>
{
    NSMutableDictionary *_elementsByBucket;
    id _uniqueElementID;
    id <XDUMLElement> _owner;
}

- (id)elementsInAllBuckets;
- (id)elementsInBucketNamed:(id)arg1;
- (unsigned long long)elementsCountInBucketNamed:(id)arg1;
- (void)removeElementAtIndex:(unsigned long long)arg1 fromBucketNamed:(id)arg2;
- (void)removeElement:(id)arg1 fromBucketNamed:(id)arg2;
- (unsigned long long)indexForElement:(id)arg1 inBucketNamed:(id)arg2;
- (id)elementForName:(id)arg1 inBucketNamed:(id)arg2;
- (void)addElement:(id)arg1 toBucketNamed:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (void)deleteElementsBucketWithName:(id)arg1;
- (void)createElementsBucketWithName:(id)arg1 allowsDuplicates:(BOOL)arg2 preserveInsertOrder:(BOOL)arg3;
- (void)decodeBucketName:(id)arg1 withCoder:(id)arg2;
- (void)encodeBucketName:(id)arg1 withCoder:(id)arg2;
- (void)namedElement:(id)arg1 inBucket:(id)arg2 wasRenamedFrom:(id)arg3 to:(id)arg4;
- (void)_convertBucketStorage:(id)arg1;
- (BOOL)shouldEncodeBucketNamed:(id)arg1;
- (id)newStereotypeWithName:(id)arg1;
- (void)removeStereotype:(id)arg1;
- (void)addStereotype:(id)arg1;
- (id)stereotypes;
- (void)removeObjectFromOwnedCommentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inOwnedCommentsAtIndex:(unsigned long long)arg2;
- (id)ownedComments;
- (void)setOwner:(id)arg1;
- (id)owner;
- (id)ownedElements;
- (void)setUniqueElementID:(id)arg1;
- (id)createUniqueElementID;
- (id)uniqueElementID;
- (id)bucketContainer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
