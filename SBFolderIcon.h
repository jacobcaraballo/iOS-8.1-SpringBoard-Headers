/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIcon.h"

#import "SBFolderObserver-Protocol.h"
#import "SBIconIndexNodeObserver-Protocol.h"
#import "SBIconObserver-Protocol.h"

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, SBFolder;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver>
{
    NSMutableArray *_cachedMiniGrids;
    SBFolder *_folder;
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    long long _progressState;
    double _progressPercent;
}

+ (Class)_iconGridImageClass;
+ (unsigned long long)_maxIconsInGridImage;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_appPlaceholdersDidChange:(id)arg1;
- (void)_containedIconImageChanged:(id)arg1;
- (id)_miniIconGridForPage:(long long)arg1;
- (void)_updateBadgeValue;
- (void)_updateProgress;
- (void)addNodeObserver:(id)arg1;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)displayName;
- (id)folder;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (id)generateIconImage:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;
- (id)gridImages;
- (_Bool)hasFolderIconView;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)initWithFolder:(id)arg1;
- (_Bool)isFolderIcon;
- (void)launchFromLocation:(int)arg1;
- (unsigned long long)listIndexForContainedIcon:(id)arg1;
- (void)localeChanged;
- (id)miniGridCellImageForIcon:(id)arg1;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (_Bool)progressIsPaused;
- (double)progressPercent;
- (long long)progressState;
- (void)purgeCachedImages;
- (void)removeNodeObserver:(id)arg1;
- (_Bool)shouldAnimateProgress;
- (void)updateLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

