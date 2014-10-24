/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAlertAdapter.h"

@interface SBStarkRelockUIAlert : SBAlertAdapter
{
    _Bool _animatingDismiss;
}

- (void)_animateDismiss;
- (id)_animationFactory;
- (void)_dismissAndLock;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (void)handleAutoLock;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonHeld;
- (_Bool)handleMenuButtonTap;
- (_Bool)hasTranslucentBackground;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (_Bool)shouldPendAlertItemsWhileActive;

@end
