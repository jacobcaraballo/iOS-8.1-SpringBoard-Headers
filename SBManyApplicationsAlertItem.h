/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAlertItem.h"

@class NSArray, NSURL;

@interface SBManyApplicationsAlertItem : SBAlertItem
{
    NSURL *_url;
    NSArray *_applications;
    id _completion;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)allowMenuButtonDismissal;
@property(readonly, retain, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(readonly, copy, nonatomic) id completion; // @synthesize completion=_completion;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
- (_Bool)dismissOnLock;
- (id)init;
- (id)initWithURL:(id)arg1 applications:(id)arg2 completion:(id)arg3;
- (_Bool)shouldShowInLockScreen;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

@end

