/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSString, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject
{
    NSString *_name;
    long long _type;
    double _priority;
    UIWindow *_window;
    NSString *_bundleID;
    int _pid;
}

@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 type:(long long)arg2 priority:(double)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;

@end

