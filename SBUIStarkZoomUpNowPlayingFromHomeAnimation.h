/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIStarkZoomUpAppFromHomeAnimation.h"

@class NSNumber;

@interface SBUIStarkZoomUpNowPlayingFromHomeAnimation : SBUIStarkZoomUpAppFromHomeAnimation
{
    NSNumber *_activated;
}

- (void)_cleanupAnimation;
- (void)_setupStartDependencies;
- (void)_startAnimation;
- (id)_viewToAnimate;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;

@end

