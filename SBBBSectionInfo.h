/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBBBItemInfo.h"

@class NSString, SBBulletinListSection;

@interface SBBBSectionInfo : SBBBItemInfo
{
    long long _sectionCategory;
}

- (id)identifier;
@property(readonly, nonatomic, getter=isWidgetSection) _Bool widgetSection;
@property(readonly, nonatomic) NSString *listSectionIdentifier;
@property(readonly, nonatomic) SBBulletinListSection *representedListSection;
@property(readonly, nonatomic) long long sectionCategory;

@end

