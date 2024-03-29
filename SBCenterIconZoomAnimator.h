/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate-Protocol.h"

@class NSString, SBCenterZoomSettings, UIView;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    UIView *_zoomView;
    double _iconZoomedZ;
    double _centerRow;
    double _centerCol;
    struct CGPoint _cameraPosition;
}

- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_calculateCentersAndCameraPosition;
- (void)_cleanupAnimation;
- (double)_iconZoomDelay;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
@property(readonly, nonatomic) struct CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void)dealloc;
- (void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2;
- (void)iconListViewLayoutInvalidated:(id)arg1;
- (id)initWithFolderController:(id)arg1;
@property(readonly, retain, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBCenterZoomSettings *settings;
@property(readonly) Class superclass;

@end

