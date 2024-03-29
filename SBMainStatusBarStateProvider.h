/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBStatusBarStateProvider.h"

#import "UIStatusBarStateObserver-Protocol.h"

@class NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    _Bool _overridePercent;
    _Bool _killActivity;
    _Bool _itemIsDisabled[25];
    _Bool _itemWasDisabled[25];
    _Bool _timeEnabled;
    _Bool _timeCloaked;
    _Bool _allButBatteryCloaked;
    _Bool _telephonyAndBluetoothCloaked;
}

+ (id)sharedInstance;
- (void)_composePostDataFromAggregatorData:(CDStruct_0e61b686 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_0e61b686 *)arg3;
- (void)_updateDisabledItems;
- (void)dealloc;
- (void)enableTime:(_Bool)arg1;
- (void)enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;
- (id)init;
- (_Bool)isTimeEnabled;
- (void)setAllItemsExceptBatteryCloaked:(_Bool)arg1;
- (void)setTelephonyAndBluetoothItemsCloaked:(_Bool)arg1;
- (void)setTimeCloaked:(_Bool)arg1;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0e61b686 *)arg2 withActions:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

