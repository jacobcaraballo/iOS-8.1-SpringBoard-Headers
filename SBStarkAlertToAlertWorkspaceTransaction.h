/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBStarkWorkspaceTransaction.h"

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
    _Bool _activation;
}

- (void)_begin;
- (id)_initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 activatingAlert:(id)arg3 deactivatingAlert:(id)arg4 activation:(_Bool)arg5;
- (void)dealloc;
- (id)debugDescription;
- (id)initActivationWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)initDeactivationWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4;

@end

