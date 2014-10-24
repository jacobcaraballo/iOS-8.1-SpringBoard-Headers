/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBApplicationTerminationAssertion-Protocol.h"

@class NSString, SBApplicationTerminationAssertionManager;

@interface SBApplicationTerminationAssertionImpl : NSObject <SBApplicationTerminationAssertion>
{
    NSString *_displayId;
    id _pluginHoldToken;
    unsigned char _reason;
    SBApplicationTerminationAssertionManager *_manager;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayId; // @synthesize displayId=_displayId;
- (id)initWithDisplayId:(id)arg1 pluginHoldToken:(id)arg2 reason:(unsigned char)arg3 manager:(id)arg4;
@property(readonly, retain, nonatomic) id pluginHoldToken; // @synthesize pluginHoldToken=_pluginHoldToken;
@property(readonly, nonatomic) unsigned char reason; // @synthesize reason=_reason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

