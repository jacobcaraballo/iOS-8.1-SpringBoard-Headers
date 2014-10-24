/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

#import "SBAppSwitcherPageContentView-Protocol.h"

@class FBWindowContextHostManager, NSString, SBAppSwitcherStatusBarViewCache, SBRemoteAlertAdapter, SBWallpaperEffectView, UIView<FBWindowContextAppearance>, UIView<SBAppSwitcherCacheVended>;

@interface SBAppSwitcherRemoteAlertContextHostWrapperView : UIView <SBAppSwitcherPageContentView>
{
    UIView *_containerView;
    SBWallpaperEffectView *_wallpaperView;
    UIView<SBAppSwitcherCacheVended> *_fakeStatusBarView;
    SBAppSwitcherStatusBarViewCache *_statusBarCache;
    SBRemoteAlertAdapter *_remoteAlert;
    FBWindowContextHostManager *_contextHostManager;
    UIView<FBWindowContextAppearance> *_contextHostView;
    long long _orientation;
}

- (void)_layoutStatusBar;
- (struct CGAffineTransform)_rotationTransformForOrientation:(long long)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1 remoteAlert:(id)arg2 statusBarCache:(id)arg3 contextHostManager:(id)arg4;
- (void)layoutSubviews;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
