/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSLock, NSObject<OS_dispatch_semaphore>, PKPassLibrary;

@interface SBResetManager : NSObject
{
    _Bool _threadRunning;
    NSLock *_lock;
    int _mode;
    NSLock *_progressLock;
    float _progress;
    _Bool _paymentCardsExist;
    PKPassLibrary *_passLibrary;
    struct {
        float _field1;
        struct __CFArray *_field2;
        float _field3;
    } *_paymentCardDeletionProgressStack;
    id _postCardDeletionHandler;
    NSObject<OS_dispatch_semaphore> *_resetThreadSemaphore;
}

+ (id)sharedInstance;
- (void)_beginReset:(id)arg1;
- (void)_postResetEnded;
- (void)_resetFinished;
- (void)_resetThread;
- (void)_setProgress:(float)arg1;
- (void)beginReset;
- (void)dealloc;
- (id)init;
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
- (void)performPaymentCardDeletionWithCompletion:(id)arg1;
- (float)progress;
- (void)setMode:(int)arg1;

@end

