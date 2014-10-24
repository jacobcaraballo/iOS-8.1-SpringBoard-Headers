/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UILabel.h"

#import "SBBulletinDateLabel-Protocol.h"

@class NSDate, NSString, NSTimer;

@interface SBDefaultDateLabel : UILabel <SBBulletinDateLabel>
{
    NSDate *_timeZoneRelativeStartDate;
    NSDate *_timeZoneRelativeEndDate;
    _Bool _allDay;
    _Bool _isTimestamp;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    _Bool _effectiveAllDay;
    _Bool _isCoalescingUpdates;
    _Bool _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
    int _labelType;
    id <SBDateLabelDelegate> _delegate;
}

+ (id)_currentCalendar;
- (void)_configureTimer;
- (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(_Bool)arg3 sameDayDates:(_Bool)arg4 eventOngoing:(_Bool)arg5 withCurrentDate:(id)arg6 forStartLabel:(_Bool)arg7;
- (void)_forceUpdate;
- (void)_invalidateTimer;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_resetEffectiveAllDayState:(_Bool)arg1;
- (void)_updateEffectiveAllDayTimes;
- (void)_updateTimerFired:(id)arg1;
- (id)constructLabelString;
- (void)dealloc;
@property(nonatomic) id <SBDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
- (_Bool)isDateWithinEffectiveAllDayRange:(id)arg1;
- (_Bool)isEffectiveAllDay;
@property(nonatomic) _Bool isTimestamp; // @synthesize isTimestamp=_isTimestamp;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
- (void)prepareForReuse;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;
- (void)update;
- (void)updateTextIfNecessary;
- (void)updateTextIfNecessary:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

