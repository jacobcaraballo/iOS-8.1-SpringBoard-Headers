/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBLeafIcon.h"

@class NSURL, SBBookmark, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon
{
    SBBookmark *_bookmark;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)initWithBookmark:(id)arg1;
- (_Bool)isBookmarkIcon;
@property(readonly, retain, nonatomic) NSURL *launchURL;
- (id)matchedWebApplication;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
@property(readonly, retain, nonatomic) UIWebClip *webClip;

@end
