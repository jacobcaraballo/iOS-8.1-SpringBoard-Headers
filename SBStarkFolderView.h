/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBFolderView.h"

@class SBStarkIconLayoutOverrideStrategy, UIButton;

@interface SBStarkFolderView : SBFolderView
{
    _Bool _buttonUXEnabled;
    UIButton *_scrollLeftButton;
    UIButton *_scrollRightButton;
    struct CGSize _scrollButtonSize;
    SBStarkIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
    struct UIEdgeInsets _listViewInsets;
}

- (void)_evaluateScrollingForListViewsIfNecessary;
- (void)_layoutSubviews;
- (id)_newPageControl;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_scrollButtonPressed:(id)arg1;
- (void)_updateIconListFrames;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_updateScrollButtonStatesForIndex:(long long)arg1;
- (void)dealloc;
@property(retain, nonatomic) SBStarkIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;
- (void)resetIconListViews;
- (void)setInteractionAffordances:(unsigned long long)arg1;
- (void)updateIconListViews;

@end

