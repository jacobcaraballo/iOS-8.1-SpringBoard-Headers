/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBNotificationCenterSectionInfo.h"

@class SBBBWidgetBulletinInfo;

@interface SBWidgetSectionInfo : SBNotificationCenterSectionInfo
{
    SBBBWidgetBulletinInfo *_widgetBulletinInfo;
}

- (void)dealloc;
- (_Bool)isWidgetSection;
@property(retain, nonatomic) SBBBWidgetBulletinInfo *widgetBulletinInfo; // @synthesize widgetBulletinInfo=_widgetBulletinInfo;

@end

