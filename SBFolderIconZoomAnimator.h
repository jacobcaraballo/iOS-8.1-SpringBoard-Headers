/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBScaleIconZoomAnimator.h"

@class SBFloatyFolderView, SBFolderController, SBFolderIcon, SBFolderIconView, SBFolderZoomSettings, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator
{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
}

- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (void)_cleanupAnimation;
- (_Bool)_forceSquareZoomDimension;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (struct CGRect)_zoomedFrame;
- (void)dealloc;
- (id)initWithOuterController:(id)arg1 innerController:(id)arg2 folderIcon:(id)arg3;

// Remaining properties
@property(retain, nonatomic) SBFolderZoomSettings *settings;
@property(readonly, retain, nonatomic) SBFolderIcon *targetIcon;
@property(readonly, retain, nonatomic) SBFolderIconView *targetIconView;

@end
