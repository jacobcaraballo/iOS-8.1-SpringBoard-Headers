/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

#import "SBControlCenterObserver-Protocol.h"

@class NSString, SBChevronView, SBControlCenterContentContainerView;

@interface SBControlCenterContainerView : UIView <SBControlCenterObserver>
{
    UIView *_darkeningView;
    double _revealPercentage;
    SBChevronView *_chevronToTrack;
    _Bool _useMaxDarkness;
    _Bool _animatingDynamically;
    _Bool _adjustingBrightness;
    UIView *_dynamicsContainerView;
    SBControlCenterContentContainerView *_contentContainerView;
}

- (id)_contentChevronView;
- (id)_currentBGColor;
- (void)_updateContentFrame;
- (void)_updateDarkeningFrame;
- (void)abortAnimatedTransition;
@property(nonatomic) _Bool animatingDynamically; // @synthesize animatingDynamically=_animatingDynamically;
@property(readonly, retain, nonatomic) SBControlCenterContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (void)dealloc;
@property(readonly, retain, nonatomic) UIView *dynamicsContainerView; // @synthesize dynamicsContainerView=_dynamicsContainerView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isAdjustingBrightness) _Bool adjustingBrightness; // @synthesize adjustingBrightness=_adjustingBrightness;
- (void)layoutSubviews;
@property(nonatomic) double revealPercentage;
- (void)setContentHeight:(double)arg1;
- (void)trackChevronView:(id)arg1;
- (void)updateBackgroundSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

