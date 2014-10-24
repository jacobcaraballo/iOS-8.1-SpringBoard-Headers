/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBPanGestureRecognizer.h"

#import "_UIScreenEdgePanRecognizerDelegate-Protocol.h"

@class NSString, _UIScreenEdgePanRecognizer, _UIScreenEdgePanRecognizerSettings;

@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate>
{
    unsigned long long m_offscreenEdge;
    _Bool m_shouldUseUIKitHeuristics;
    double m_edgeMargin;
    double m_falseEdge;
    int m_touchesChecked;
    struct CGPoint m_firstTouch;
    double m_edgeCenter;
    double m_allowableDistanceFromEdgeCenter;
    _Bool m_requiresSecondTouchInRange;
    _UIScreenEdgePanRecognizer *m_recognizer;
}

+ (void)reloadDefaults;
- (_Bool)_firstTouchInRange:(const CDStruct_f5d79541 *)arg1;
- (void)_updateAnimationDistanceAndEdgeCenter;
- (struct CGRect)activeScreenBounds;
@property(nonatomic) double allowableDistanceFromEdgeCenter; // @synthesize allowableDistanceFromEdgeCenter=m_allowableDistanceFromEdgeCenter;
- (void)dealloc;
@property(nonatomic) double edgeCenter; // @synthesize edgeCenter=m_edgeCenter;
@property(nonatomic) double edgeMargin; // @synthesize edgeMargin=m_edgeMargin;
@property(nonatomic) double falseEdge; // @synthesize falseEdge=m_falseEdge;
- (_Bool)firstTouchQualifies:(const CDStruct_f5d79541 *)arg1;
- (id)initForOffscreenEdge:(unsigned long long)arg1;
- (_Bool)isHandlingLongPress;
@property(nonatomic) _Bool requiresSecondTouchInRange; // @synthesize requiresSecondTouchInRange=m_requiresSecondTouchInRange;
- (void)reset;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (_Bool)secondTouchQualifies:(const CDStruct_f5d79541 *)arg1;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property(nonatomic) _Bool shouldUseUIKitHeuristics; // @synthesize shouldUseUIKitHeuristics=m_shouldUseUIKitHeuristics;
- (void)setState:(int)arg1;
- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
