/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBDisableAppStatusBarAlphaChangesAssertion, UIView;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    UIView *_viewToAnimate;
    UIView *_contextHostView;
    UIView *_fakeStatusBarViewContainer;
    long long _launchingOrientation;
    _Bool _requiresHostView;
    _Bool _activateBeforeHosting;
    _Bool _fromAssistant;
    _Bool _finishedZooming;
    _Bool _finishedActivating;
    _Bool _finishedCrossfadingToHostView;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
}

- (id)_animationProgressDependency;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_doAnimation;
- (void)_finishedZooming;
- (id)_getTransitionWindow;
- (void)_maybeReportAnimationFinished;
- (void)_maybeStartCrossfade;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_prepareAnimation;
- (void)_removeFakeStatusBarIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (void)_setupFakeStatusBarIfNecessary;
- (_Bool)_shouldDismissBanner;
- (void)_showFakeStatusBarIfNecessary;
- (void)_startAnimation;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 fromAlert:(id)arg2;
- (_Bool)isReasonableMomentToInterrupt;

@end

