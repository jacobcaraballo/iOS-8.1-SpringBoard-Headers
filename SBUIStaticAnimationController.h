/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

@class SBApplication, UIView;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController
{
    UIView *_staticAppView;
    UIView *_hostView;
}

- (id)_animationProgressDependency;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_hideAppHostView;
- (void)_prepareAnimation;
- (void)_setupStartDependencies;
- (_Bool)_shouldDismissBanner;
- (void)_startAnimation;
- (_Bool)_willAnimate;
@property(readonly, retain, nonatomic) SBApplication *app;
- (void)dealloc;
- (id)initWithApp:(id)arg1;

@end
