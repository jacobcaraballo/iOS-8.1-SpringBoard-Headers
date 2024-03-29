/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBBBBulletinInfo.h"

@class SBItemInfoLayoutCache, UIImage;

@interface SBSnippetBulletinInfo : SBBBBulletinInfo
{
    struct CGRect _textRect;
    UIImage *_icon;
    SBItemInfoLayoutCache *_layoutCache;
    long long _location;
}

+ (double)topBaselineToCellTopInLayoutMode:(long long)arg1;
- (id)_representedBulletin;
- (void)dealloc;
- (double)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(long long)arg2 bulletinLocation:(long long)arg3;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)identifier;
- (void)invalidateCachedLayoutData;
@property(readonly, nonatomic) double lastSnippetPadding;
- (void)populateReusableView:(id)arg1;
- (Class)reusableViewClass;

@end

