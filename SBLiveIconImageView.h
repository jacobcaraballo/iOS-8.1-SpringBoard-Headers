/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIconImageView.h"

#import "SBControlCenterObserver-Protocol.h"

@class NSString;

@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver>
{
    unsigned long long _pauseCauses;
}

+ (void)_applicationDidExit:(id)arg1;
+ (void)_displayDidDeactivate:(id)arg1;
+ (void)_displayWillActivate:(id)arg1;
+ (void)initialize;
- (void)_activeDisplayChanged:(id)arg1;
- (void)_addPauseCause:(unsigned long long)arg1;
- (void)_didEndScrolling:(id)arg1;
- (_Bool)_isPausedForCause:(unsigned long long)arg1;
- (void)_removePauseCause:(unsigned long long)arg1;
- (void)_significantAnimationDidEnd:(id)arg1;
- (void)_significantAnimationWillBegin:(id)arg1;
- (id)_stringForPauseCause:(unsigned long long)arg1;
- (void)_willBeginScrolling:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAnimationAllowed;
- (void)prepareForReuse;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;
- (void)setPaused:(_Bool)arg1;
- (id)snapshot;
- (void)updateAnimatingState;
- (void)updateImageAnimated:(_Bool)arg1;
- (void)updateUnanimated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
