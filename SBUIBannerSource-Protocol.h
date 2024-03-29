/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBUIBannerSource <NSObject>
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;

@optional
- (void)bannerViewDidAppear:(id)arg1;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(id)arg1;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
@end

