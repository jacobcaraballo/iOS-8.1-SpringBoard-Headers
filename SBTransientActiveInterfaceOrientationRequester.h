/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject
{
    long long _orientation;
    NSString *_reason;
}

- (void)dealloc;
- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

@end

