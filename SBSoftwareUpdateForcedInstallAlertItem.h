/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSTimer;

@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem
{
    NSTimer *_timer;
    unsigned long long _timeLeftUntilInstall;
    _Bool _delayOnDismissForNonUserAction;
    _Bool _delayAfterNextUnlock;
    _Bool _countdown;
}

- (void)_installUpdate;
- (void)_timerFired;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
@property(nonatomic) _Bool countdown; // @synthesize countdown=_countdown;
- (void)dealloc;
@property(nonatomic) _Bool delayAfterNextUnlock; // @synthesize delayAfterNextUnlock=_delayAfterNextUnlock;
@property(nonatomic) _Bool delayOnDismissForNonUserAction; // @synthesize delayOnDismissForNonUserAction=_delayOnDismissForNonUserAction;
- (_Bool)dismissOnLock;
- (id)initWithDescriptor:(id)arg1;
- (id)lockLabel;
- (void)performUnlockAction;
- (id)shortLockLabel;
- (_Bool)shouldShowInLockScreen;
- (_Bool)undimsScreen;
- (void)updateBodyText;
- (void)willDeactivateForReason:(int)arg1;
- (void)willPresentAlertView:(id)arg1;

@end
