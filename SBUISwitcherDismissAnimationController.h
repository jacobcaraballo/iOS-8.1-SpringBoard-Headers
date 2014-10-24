/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

@class FBWindowContextHostManager, SBAppSwitcherController, SBAppSwitcherPageView, SBDisplayLayout, UIView;

@interface SBUISwitcherDismissAnimationController : SBUIMainScreenAnimationController
{
    SBAppSwitcherController *_switcherController;
    UIView *_appContextHostView;
    FBWindowContextHostManager *_contextHostManager;
    SBAppSwitcherPageView *_animatingPageView;
    SBDisplayLayout *_activatingDisplayLayout;
    _Bool _finishedSwitcherAnimation;
    _Bool _finishedCrossfadingToHostView;
}

- (id)_animationProgressDependency;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_crossfadeApp;
- (void)_evaluateDependenciesForCrossfadeStart;
- (_Bool)_isActivatingFromContinuityApp;
- (void)_noteCrossfadeDidFinish;
- (void)_noteSwitcherAnimationFinished;
- (void)_prepareAnimation;
- (void)_reportAnimationFinishedIfNecessary;
- (void)_startAnimation;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 activatingDisplayLayout:(id)arg2 deactivatingApp:(id)arg3;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;

@end
