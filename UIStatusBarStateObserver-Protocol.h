/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol UIStatusBarStateObserver <NSObject>
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0e61b686 *)arg2 withActions:(int)arg3;

@optional
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
@end
