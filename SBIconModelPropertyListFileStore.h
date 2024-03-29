/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBIconModelStore-Protocol.h"

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

- (_Bool)_delete:(id)arg1 error:(id *)arg2;
- (id)_load:(id)arg1 error:(id *)arg2;
- (_Bool)_save:(id)arg1 url:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSURL *currentIconStateURL; // @synthesize currentIconStateURL=_currentIconStateURL;
- (void)dealloc;
- (_Bool)deleteCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconState:(id *)arg1;
@property(retain, nonatomic) NSURL *desiredIconStateURL; // @synthesize desiredIconStateURL=_desiredIconStateURL;
- (id)loadCurrentIconState:(id *)arg1;
- (id)loadDesiredIconState:(id *)arg1;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

