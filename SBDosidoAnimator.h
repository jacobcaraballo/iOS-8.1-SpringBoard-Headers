/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class UIView;

@interface SBDosidoAnimator : NSObject
{
    long long _fromOrientation;
    UIView *_parentView;
    UIView *_transformContainer;
    UIView *_transformedContent;
    UIView *_fromView;
    UIView *_toView;
}

- (void)_doRealDosido:(id)arg1 withSpacingBetween:(double)arg2 completion:(id)arg3;
- (void)_doReducedMotionDosido:(id)arg1 completion:(id)arg2;
@property(retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView; // @synthesize fromView=_fromView;
- (void)_rotateViewIfNecessary:(id)arg1 inverted:(_Bool)arg2;
@property(retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView; // @synthesize toView=_toView;
- (id)_transformedContentView;
- (void)animateFromView:(id)arg1 toView:(id)arg2 withSpacingBetween:(double)arg3 outAnimationFactory:(id *)arg4 completion:(id)arg5;
@property(readonly, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_transformContainer;
- (void)dealloc;
@property(readonly, nonatomic) double defaultDuration; // @dynamic defaultDuration;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2;

@end

