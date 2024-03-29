/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAppSwitcherPeopleButtonAndLabelView.h"

@class SBAppSwitcherPeopleContactAction;

@interface SBAppSwitcherPeopleContactActionView : SBAppSwitcherPeopleButtonAndLabelView
{
    SBAppSwitcherPeopleContactAction *_action;
}

+ (_Bool)_centerImageVerticallyForLayout;
+ (double)_layoutLabelFontSizeCompact:(_Bool)arg1;
+ (double)_layoutLabelVerticalPaddingCompact:(_Bool)arg1;
+ (struct CGSize)preferredLayoutSizeForMonogramSize:(double)arg1 compact:(_Bool)arg2;
+ (struct CGSize)preferredLayoutSizeForMonogramSize:(double)arg1 compact:(_Bool)arg2 forAction:(id)arg3;
+ (void)warmContactActionImages;
- (id)_legibilityImageForImageNamed:(id)arg1;
- (id)_mappedImageNamed:(id)arg1 renderingMode:(long long)arg2;
- (struct CGSize)_maxLabelLayoutSize;
- (double)_strengthForLegibilityStyle:(long long)arg1;
@property(retain, nonatomic) SBAppSwitcherPeopleContactAction *action; // @synthesize action=_action;

@end

