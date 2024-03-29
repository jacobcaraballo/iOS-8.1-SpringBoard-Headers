/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBReusableView-Protocol.h"

@protocol SBIconAccessoryView <SBReusableView>
+ (id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(_Bool)arg3 withPreparation:(id)arg4 animation:(void)arg5 completion:(id)arg6;
- (void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(_Bool)arg3;
- (_Bool)displayingAccessory;
- (void)setAccessoryBrightness:(double)arg1;
@end

