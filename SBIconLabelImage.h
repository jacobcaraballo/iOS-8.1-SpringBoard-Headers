/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIImage.h"

#import "SBCountedMapValue-Protocol.h"

@class NSString, SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage <SBCountedMapValue>
{
    SBIconLabelImageParameters *_parameters;
    struct CGPoint _maxSizeOffset;
}

+ (id)_drawLabelImageForParameters:(id)arg1;
+ (id)_labelImageCountedMap;
+ (id)_parametersWithDefaultStyle:(id)arg1;
+ (struct CGRect)_rectWithDrawing:(_Bool)arg1 inRect:(struct CGRect)arg2 fromParameters:(id)arg3;
+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (void)checkinLabelImage:(id)arg1;
+ (id)checkoutLabelImageForParameters:(id)arg1;
+ (void)drawImageInRect:(struct CGRect)arg1 fromParameters:(id)arg2;
+ (struct CGRect)rectFromParameters:(id)arg1 constrainedToRect:(struct CGRect)arg2;
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 maxSizeOffset:(struct CGPoint)arg5;
- (id)countedMapKey;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
@property(readonly, nonatomic) struct CGPoint maxSizeOffset; // @synthesize maxSizeOffset=_maxSizeOffset;
@property(readonly, copy, nonatomic) SBIconLabelImageParameters *parameters; // @synthesize parameters=_parameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
