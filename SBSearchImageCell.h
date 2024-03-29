/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBSearchStandardCell.h"

@class NSOperation, UIImageView;

@interface SBSearchImageCell : SBSearchStandardCell
{
    UIImageView *_titleImageView;
    NSOperation *_fetchImageOperation;
}

+ (id)placeHolderImageForDomain:(unsigned int)arg1 result:(id)arg2 size:(struct CGSize)arg3;
+ (_Bool)supportsSection:(id)arg1 result:(id)arg2;
- (id)constantConstraints;
- (void)dealloc;
@property(retain, nonatomic) NSOperation *fetchImageOperation; // @synthesize fetchImageOperation=_fetchImageOperation;
- (double)imageWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)leftTextMargin;
- (id)leftTextView;
- (id)leftView;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (id)variableConstraints;

@end

