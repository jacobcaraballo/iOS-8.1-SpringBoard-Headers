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

@interface SBWindowHideRequest : NSObject
{
    NSString *_reason;
    struct SBWindowLevelRange_struct _windowLevelRange;
}

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)description;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property struct SBWindowLevelRange_struct windowLevelRange; // @synthesize windowLevelRange=_windowLevelRange;

@end

