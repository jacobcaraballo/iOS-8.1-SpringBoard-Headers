/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBFolderIconListView.h"

@interface SBNewsstandIconListView : SBFolderIconListView
{
    double _iconVPaddingPortrait;
    double _topIconInsetPortrait;
    double _iconVPaddingLandscape;
    double _topIconInsetLandscape;
}

+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;
+ (long long)rotationAnchor;
- (void)_updateVisibleIconsFromRow:(unsigned long long)arg1 toRow:(unsigned long long)arg2 includeIcon:(id)arg3 layoutIfNeeded:(_Bool)arg4;
- (Class)baseIconViewClass;
- (double)bottomIconInset;
- (void)cleanupAfterRotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (double)sideIconInset;
- (double)topIconInset;
- (double)verticalIconPadding;

@end
