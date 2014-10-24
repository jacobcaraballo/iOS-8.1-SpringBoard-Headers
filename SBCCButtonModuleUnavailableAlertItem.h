/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAlertItem.h"

@class SBCCButtonModule;

@interface SBCCButtonModuleUnavailableAlertItem : SBAlertItem
{
    SBCCButtonModule *_module;
}

+ (_Bool)presentAlertItemForButtonModule:(id)arg1;
- (_Bool)allowMenuButtonDismissal;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
- (_Bool)dismissOnLock;
@property(retain, nonatomic) SBCCButtonModule *module; // @synthesize module=_module;
- (_Bool)shouldShowInLockScreen;

@end

