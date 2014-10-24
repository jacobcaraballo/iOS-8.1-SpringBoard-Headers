/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBRootFolder.h"

#import "SBIconIndexNodeObserver-Protocol.h"

@class NSString, SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver>
{
    SBIconListModel *_dock;
}

- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(id)arg3;
- (void)_setDock:(id)arg1;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
- (id)dock;
- (id)iconsOfClass:(Class)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (_Bool)isIconStateDirty;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)listAtIndex:(unsigned long long)arg1;
- (id)listContainingIcon:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (void)markIconStateClean;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)removeEmptyList:(id)arg1;
- (_Bool)supportsDock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
