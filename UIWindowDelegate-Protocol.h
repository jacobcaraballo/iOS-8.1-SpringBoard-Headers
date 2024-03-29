/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol UIWindowDelegate <NSObject>

@optional
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(id)arg2;
- (id)rotatingContentViewForWindow:(id)arg1;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
@end

