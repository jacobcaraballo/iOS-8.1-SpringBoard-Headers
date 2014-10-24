/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIScrollView.h"

@class NSArray, NSDictionary, NSMutableDictionary, SBScrollViewItemWrapper, SBScrollViewLayoutInfos, _UILegibilitySettings;

@interface SBAppSwitcherPeopleScrollView : UIScrollView
{
    NSArray *_wrappers;
    NSDictionary *_wrappersToViews;
    NSDictionary *_sectionsToPlaceholders;
    struct CGPoint _closingGestureBeginningContentOffset;
    SBScrollViewLayoutInfos *_interactiveClosingGestureBeginningLayout;
    SBScrollViewLayoutInfos *_interactiveClosingGestureTargetLayout;
    SBScrollViewLayoutInfos *_interactiveClosingGestureInterpolatedLayout;
    NSMutableDictionary *_sectionLabels;
    SBScrollViewLayoutInfos *_cachedLayoutInfos;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _lastLayoutWasCompact;
    SBScrollViewItemWrapper *_expandedItemWrapper;
}

- (void)_addOrRemoveSectionLabels;
- (id)_indexPathForItem:(id)arg1;
- (id)_indexPathsToViewsForViews:(id)arg1;
- (double)_interItemSpacing;
- (id)_labelFont;
- (id)_labelForSection:(unsigned long long)arg1;
- (id)_labelImageParametersForLabelString:(id)arg1;
- (void)_layoutSectionLabels;
- (id)_placeholderViewForSection:(long long)arg1;
- (long long)_sectionForPlaceholderView:(id)arg1;
- (void)applyContentSizeForLayoutInfos:(id)arg1;
- (void)applySubviewFramesForLayoutInfos:(id)arg1;
- (void)beginInteractiveClosingOfExpandedItem;
@property(retain, nonatomic) SBScrollViewLayoutInfos *cachedLayoutInfos; // @synthesize cachedLayoutInfos=_cachedLayoutInfos;
- (void)cancelInteractiveClosingOfItem;
- (void)collapseExpandedItem;
- (void)dealloc;
- (void)expandItemWrapper:(id)arg1;
@property(retain, nonatomic) SBScrollViewItemWrapper *expandedItemWrapper; // @synthesize expandedItemWrapper=_expandedItemWrapper;
- (void)finishInteractiveClosingOfItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)layoutFrameForItemWrapper:(id)arg1;
- (id)layoutInfosWithExpandedItemWrapper:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (double)monogramSize;
- (struct CGPoint)presentationOffset;
- (void)removeContent;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)updateDataVisibleOnly:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateInteractiveClosingWithProgress:(double)arg1;
- (_Bool)useVerticallyCompactLayoutSize;

// Remaining properties
@property(nonatomic) id <SBAppSwitcherPeopleScrollViewDelegate> delegate;

@end

