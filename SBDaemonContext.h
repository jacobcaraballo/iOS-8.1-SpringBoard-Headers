/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface SBDaemonContext : NSObject
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithPid:(int)arg1 queue:(id)arg2;
- (int)pid;
- (void)removeRequestForKey:(id)arg1;

@end

