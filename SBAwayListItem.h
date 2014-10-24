/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SBAwayListCellButtonHandler-Protocol.h"
#import "SBUIQuietModePlayability-Protocol.h"

@class NSDate, NSString, SBLockScreenActionContext;

@interface SBAwayListItem : NSObject <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying>
{
    NSDate *_timestamp;
    _Bool _isNewItem;
    SBLockScreenActionContext *_lockScreenActionContext;
    NSString *_buttonLabel;
}

@property(copy, nonatomic) NSString *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
- (void)buttonPressed;
- (_Bool)canBeClearedByNotificationCenter;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (_Bool)inertWhenLocked;
- (_Bool)isCritical;
@property(nonatomic) _Bool isNewItem; // @synthesize isNewItem=_isNewItem;
- (_Bool)overridesQuietMode;
- (void)prepareWithCompletion:(id)arg1;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)wantsHighlightOnInsert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

