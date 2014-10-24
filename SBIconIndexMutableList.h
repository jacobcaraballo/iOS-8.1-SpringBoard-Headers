/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"
#import "SBIconIndexNodeObserver-Protocol.h"

@class NSMapTable, NSMutableArray, NSString;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration>
{
    NSMutableArray *_nodes;
    NSMapTable *_index;
    id <SBIconIndexMutableListObserver> _observer;
}

- (void)addNode:(id)arg1;
- (id)containedNodeIdentifiers;
- (_Bool)containsNode:(id)arg1;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)indexDescriptionWithPrefix:(id)arg1;
- (unsigned long long)indexOfNode:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)init;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)nodes;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
@property(nonatomic) id <SBIconIndexMutableListObserver> observer; // @synthesize observer=_observer;
- (void)removeAllNodes;
- (void)removeNode:(id)arg1;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)removeNodesAtIndexes:(id)arg1;
- (void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
