/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBApplication.h"

@interface SBNewsstandApplication : SBApplication
{
    _Bool _isMagazineApp;
    _Bool _iconIsBoundOnRight;
    unsigned int _supportsNewsstandContentBackgroundMode:1;
    unsigned long long _allowedContentNotificationsPerDay;
    unsigned char _newsstandWakes;
    unsigned int _lastPostedState;
}

- (void)activate;
- (void)didExitWithType:(int)arg1 terminationReason:(long long)arg2;
- (Class)iconClass;
@property(readonly, nonatomic) _Bool iconIsBoundOnRight; // @synthesize iconIsBoundOnRight=_iconIsBoundOnRight;
- (id)initWithApplicationInfo:(id)arg1 bundle:(id)arg2 infoDictionary:(id)arg3;
- (_Bool)isFakeApp;
@property(readonly, nonatomic) _Bool isMagazineApp; // @synthesize isMagazineApp=_isMagazineApp;
- (_Bool)isNewsstandApplication;
- (void)processDidLaunch:(id)arg1;
- (void)resumeForContentAvailable;
- (void)setApplicationState:(unsigned int)arg1;
- (_Bool)shouldThrottleContentNotificationOnDate:(id)arg1 withLastCount:(unsigned long long *)arg2 onDay:(long long *)arg3;
- (_Bool)supportsBackgroundAppRefresh;

@end
