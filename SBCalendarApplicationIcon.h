/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBApplicationIcon.h"

@interface SBCalendarApplicationIcon : SBApplicationIcon
{
}

+ (id)countriesRequiringBlackDayOfWeek;
- (void)_drawIconIntoCurrentContextWithImageSize:(struct CGSize)arg1 iconBase:(id)arg2;
- (id)colorForDayOfWeek;
- (void)dealloc;
- (id)generateIconImage:(int)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)initWithApplication:(id)arg1;
- (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
- (void)localeChanged;
- (id)numberFont;

@end
