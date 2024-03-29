/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBIconIndexMutableListObserver-Protocol.h"
#import "SBIconIndexNode-Protocol.h"
#import "SBIconListModelObserver-Protocol.h"

@class NSCountedSet, NSHashTable, NSMutableSet, NSString, SBFolderIcon, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver>
{
    NSString *_displayName;
    NSString *_defaultDisplayName;
    _Bool _open;
    SBFolderIcon *_icon;
    _Bool _cancelable;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSCountedSet *_coalesceChangesRequests;
    unsigned long long _maxListCount;
    unsigned long long _maxIconCountInLists;
    NSHashTable *_nodeObservers;
    NSHashTable *_folderObservers;
    SBIconIndexMutableList *_lists;
}

- (void)_addList:(id)arg1;
- (id)_createNewListWithIcon:(id)arg1;
- (_Bool)_isCoalescingContentChanges;
- (id)_listsForCompaction;
- (void)_removeLists:(id)arg1;
- (void)_setLists:(id)arg1;
- (id)addEmptyList;
- (void)addFolderObserver:(id)arg1;
- (id)addIcon:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)allIcons;
- (_Bool)canAddIcon;
- (_Bool)canEditDisplayName;
- (_Bool)canRemoveIcons;
- (void)compactIconsAndLists;
- (_Bool)compactLists;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
- (id)defaultDisplayName;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (id)folderIcons;
@property(nonatomic) SBFolderIcon *icon; // @synthesize icon=_icon;
- (id)iconAtIndexPath:(id)arg1;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)iconsOfClass:(Class)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(_Bool)arg1;
- (id)indexPathForIcon:(id)arg1;
- (id)indexPathForIcon:(id)arg1 includingPlaceholders:(_Bool)arg2;
- (id)indexPathForIconWithIdentifier:(id)arg1;
- (id)indexPathForNodeIdentifier:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)init;
- (id)initWithMaxListCount:(unsigned long long)arg1 maxIconCountInLists:(unsigned long long)arg2;
- (id)insertIcon:(id)arg1 atIndexPath:(id *)arg2;
@property(nonatomic, getter=isCancelable) _Bool cancelable; // @synthesize cancelable=_cancelable;
- (_Bool)isEmpty;
- (_Bool)isFull;
- (_Bool)isIconStateDirty;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_open;
- (id)leafIcons;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)listAtIndex:(unsigned long long)arg1;
- (id)listContainingIcon:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (unsigned long long)listCount;
- (Class)listModelClass;
- (id)lists;
- (void)markIconStateClean;
- (unsigned long long)maxListCount;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2;
- (id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3;
- (id)placeIcon:(id)arg1 atIndexPath:(id *)arg2;
- (void)purgeLists;
- (void)removeEmptyList:(id)arg1;
- (void)removeFolderObserver:(id)arg1;
- (void)removeIconAtIndexPath:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)setDefaultDisplayName:(id)arg1;
- (_Bool)shouldRemoveWhenEmpty;
- (void)startCoalescingContentChangesWithRequestID:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(_Bool)arg2;
- (id)visibleIcons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

