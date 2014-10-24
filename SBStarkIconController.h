/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

#import "SBApplicationRestrictionObserver-Protocol.h"
#import "SBFolderControllerDelegate-Protocol.h"
#import "SBIconModelDelegate-Protocol.h"
#import "SBIconViewDelegate-Protocol.h"
#import "SBIconViewMapDelegate-Protocol.h"
#import "SBLeafIconDataSource-Protocol.h"

@class AVExternalDevice, NSIndexPath, NSSet, NSString, SBIcon, SBIconModel, SBIconViewMap, SBStarkFakeIconOperationController, SBStarkFolderController, SBStarkIconLayoutOverrideStrategy, _UILegibilitySettings;

@interface SBStarkIconController : UIViewController <SBIconModelDelegate, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBLeafIconDataSource>
{
    SBIconModel *_iconModel;
    SBIconViewMap *_iconViewMap;
    SBStarkFolderController *_rootFolderController;
    unsigned long long _interactionAffordances;
    AVExternalDevice *_externalDevice;
    _UILegibilitySettings *_legibilitySettings;
    SBIcon *_highlightedIcon;
    SBIcon *_launchingIcon;
    SBIcon *_focusedIconForLayout;
    NSIndexPath *_indexPathToResetTo;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    SBStarkIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
    _Bool _geoSupported;
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    _Bool _invalidated;
    _Bool _hidden;
}

- (_Bool)_buttons:(id)arg1 hasType:(long long)arg2;
- (void)_clearHighlightedIcon;
- (Class)_controllerClassForFolderClass:(Class)arg1;
- (void)_geoSupportChanged;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (void)_iconModelWillReloadIcons:(id)arg1;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_launchIcon:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_prepareToResetRootIconLists;
- (void)_resetRootIconLists;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (_Bool)canAddDownloadingIconForApplication:(id)arg1;
- (_Bool)canAddWebClip:(id)arg1;
- (_Bool)canSaveIconState:(id)arg1;
- (Class)controllerClassForFolder:(id)arg1;
- (id)currentFolderController;
- (void)dealloc;
- (void)didDeleteIconState:(id)arg1;
- (void)didSaveIconState:(id)arg1;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController; // @synthesize fakeIconOperationController=_fakeIconOperationController;
- (_Bool)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
- (_Bool)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;
- (_Bool)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconAllowsUninstall:(id)arg1;
- (_Bool)iconAppearsInNewsstand:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (id)iconDisplayName:(id)arg1;
- (id)iconForLeafID:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (_Bool)iconIsBeta:(id)arg1;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
@property(retain, nonatomic) SBStarkIconLayoutOverrideStrategy *iconLayoutOverrideStrategy; // @synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy;
- (unsigned long long)iconPriority:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)iconTouchBegan:(id)arg1;
- (Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (id)iconsView;
- (id)initWithInteractionAffordances:(unsigned long long)arg1 externalDevice:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidate;
- (_Bool)isHidden;
- (void)loadView;
- (unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (void)relayout;
- (id)rootFolder;
- (void)setHidden:(_Bool)arg1 withAnimationFactory:(id)arg2;
- (_Bool)supportsDock;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

