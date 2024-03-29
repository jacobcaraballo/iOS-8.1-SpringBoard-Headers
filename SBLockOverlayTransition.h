/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject
{
    SBLockOverlayContext *_from;
    SBLockOverlayContext *_to;
    SBLockScreenViewController *_lockScreenVC;
}

+ (id)underlayRequesterNameForContext:(id)arg1;
- (void)_hideLockContent;
- (void)dealloc;
- (id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3;
- (void)performTransitionAnimated:(_Bool)arg1 completion:(id)arg2;

@end

