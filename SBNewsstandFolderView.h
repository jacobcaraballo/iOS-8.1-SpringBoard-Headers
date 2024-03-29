/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBFolderView.h"

#import "SBIconIndexNodeObserver-Protocol.h"

@class NSString, SBNewsstandBackgroundView, UIButton;

@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver>
{
    UIButton *_storeButton;
    UIButton *_emptyImageButton;
    SBNewsstandBackgroundView *_backgroundView;
}

- (void)_layoutSubviews;
- (void)_newsstandStoreAvailabilityDidChangeNotification:(id)arg1;
- (_Bool)_showsTitle;
- (void)_storeButtonTapped:(id)arg1;
- (double)_titleFontSize;
- (void)_updateEmptyState;
- (void)dealloc;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)setFolder:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

