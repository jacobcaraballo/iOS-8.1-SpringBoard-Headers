/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIImage.h"

@interface UIImage (SBGraphics)
+ (unsigned long long)sbg_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(int)arg3;
+ (id)sbg_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(id)arg5;
+ (id)sbg_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(id)arg5 encapsulation:(void)arg6;
- (struct CGImageSource *)_newSource;
- (struct CGImage *)_newThumbnailWithImageSource:(struct CGImageSource *)arg1 forMaxPixelDimension:(double)arg2;
- (struct CGImage *)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (id)_thumbnailFitToSize:(struct CGSize)arg1;
- (_Bool)isAnimated;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (id)sbg_memoryMappedImageWithPool:(id)arg1;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(struct CGSize)arg1;
- (_Bool)sbs_hasAlpha;
@end

