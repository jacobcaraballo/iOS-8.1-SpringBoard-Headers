/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBAppSwitcherPageContentView <NSObject>
- (long long)orientation;
- (void)setOrientation:(long long)arg1;

@optional
- (void)prepareToBecomeVisibleIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)simplifyForMotion;
- (void)unsimplifyAfterMotion;
@end

