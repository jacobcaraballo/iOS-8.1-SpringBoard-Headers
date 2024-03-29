/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "FBTransaction.h"

@class SBAlertManager;

@interface SBWorkspaceTransaction : FBTransaction
{
    SBAlertManager *_alertManager;
    _Bool _clearsCompletionAsynchronously;
}

- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_performDeviceCoherencyCheck;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) _Bool clearsCompletionAsynchronously; // @synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1;
- (void)keepAliveForAsyncBlock:(id)arg1;

@end

