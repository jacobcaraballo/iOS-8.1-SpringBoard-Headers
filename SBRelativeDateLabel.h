/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBDefaultDateLabel.h"

#import "SBRelativeDateTimerDelegate-Protocol.h"

@class NSString, SBRelativeDateTimer;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate>
{
    SBRelativeDateTimer *_relativeDateTimer;
    unsigned long long _value;
    int _resolution;
    long long _comparedToNow;
}

- (id)constructLabelString;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(int)arg2 comparedToNow:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

