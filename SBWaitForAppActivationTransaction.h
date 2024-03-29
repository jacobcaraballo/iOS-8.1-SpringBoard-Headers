/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "BSTransaction.h"

@class SBApplication;

@interface SBWaitForAppActivationTransaction : BSTransaction
{
    SBApplication *_application;
    _Bool _manualListener;
    _Bool _done;
}

- (void)_activationStateChanged:(id)arg1;
- (_Bool)_appStateChanged:(int)arg1;
- (void)_begin;
- (void)_didComplete;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;
- (id)initWithApplication:(id)arg1 manualListener:(_Bool)arg2;
- (void)noteActivationStateChanged:(int)arg1;

@end

