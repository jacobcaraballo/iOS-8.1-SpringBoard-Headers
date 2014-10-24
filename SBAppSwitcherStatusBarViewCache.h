/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, UIView, UIWindow;

@interface SBAppSwitcherStatusBarViewCache : NSObject
{
    NSMutableDictionary *_cachedStatusBarQueues;
    NSMutableDictionary *_statusBarsForSnapshots;
    NSMutableSet *_homePageCellStatusBars;
    UIView *_hiddenStatusBarCacheView;
    UIView *_statusBarSnapshottingView;
    _Bool _vendingSnapshots;
    UIWindow *_appSwitcherWindow;
}

- (id)_cacheKeyForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (id)_generationBlockForStyleRequest:(SEL)arg1 orientation:(id)arg2;
- (void)_prepareForSnapshotOfStyleRequest:(id)arg1 orientation:(long long)arg2;
@property(retain, nonatomic) UIWindow *appSwitcherWindow; // @synthesize appSwitcherWindow=_appSwitcherWindow;
- (id)barForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (id)barSnapshotForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (void)dealloc;
- (id)fakeStatusBarForHomePageCell;
- (id)init;
@property(nonatomic, getter=isVendingSnapshots) _Bool vendingSnapshots;
- (void)preheatStatusBarCache;
- (void)recycleBar:(id)arg1;
- (void)recycleBarForHomePageCell:(id)arg1;

@end

