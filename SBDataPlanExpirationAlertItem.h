/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBDataPlanAccountAlertItem.h"

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem
{
    NSDate *_expirationDate;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2;

@end

