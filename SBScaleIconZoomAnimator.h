/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIconZoomAnimator.h"

@class SBIcon, SBIconView, SBScaleZoomSettings, UIView;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;
    double _dockStretch;
    struct SBIconCoordinate _dockListCenterCoordinate;
    struct SBIconCoordinate _mainListCenterCoordinate;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIcon *_targetIcon;
    struct CGPoint _zoomScaleDimension;
}

- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (void)_applyOuterFadeFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (void)_calculateIconScootch;
- (void)_cleanupAnimation;
- (_Bool)_forceSquareZoomDimension;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (struct CGPoint)_scootchForIcon:(id)arg1 inDock:(_Bool)arg2;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (struct CGRect)_zoomedFrame;
- (struct CGPoint)_zoomedIconCenter;
- (double)_zoomedVisualAltitude;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1 targetIcon:(id)arg2;
@property(readonly, retain, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
@property(readonly, retain, nonatomic) SBIconView *targetIconView;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;

// Remaining properties
@property(retain, nonatomic) SBScaleZoomSettings *settings;

@end

