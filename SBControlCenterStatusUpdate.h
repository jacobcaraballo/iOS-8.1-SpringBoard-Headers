/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface SBControlCenterStatusUpdate : NSObject
{
    int _type;
    NSString *_reason;
    NSArray *_statusStrings;
}

+ (id)statusUpdateWithString:(id)arg1 reason:(id)arg2;
- (void)addStatusString:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)popStatusString;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSArray *statusStrings; // @synthesize statusStrings=_statusStrings;
@property(nonatomic) int type; // @synthesize type=_type;

@end
