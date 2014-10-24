/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class NSArray, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface SBStarkLockOutView : UIView
{
    UILabel *_titleLabel;
    double _titleAscender;
    double _titleDescender;
    UIImageView *_imageView;
    struct CGSize _imageSize;
    UILabel *_messageLabel;
    double _messageAscender;
    double _messageDescender;
    UIButton *_backToOEMButton;
    UITapGestureRecognizer *_backToOEMGestureRecognizer;
    NSArray *_baselineSeparations;
}

- (void)_backToOEM;
- (id)_messageFontOfSize:(double)arg1;
- (void)_sizeMessageToFitInFrame:(struct CGRect)arg1;
- (void)_sizeTitleToFitInFrame:(struct CGRect)arg1;
- (id)_titleFontOfSize:(double)arg1;
@property(readonly, retain, nonatomic) UIButton *backToOEMButton; // @synthesize backToOEMButton=_backToOEMButton;
- (void)dealloc;
@property(readonly, retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 image:(id)arg3 message:(id)arg4 baselineSeparations:(id)arg5;
- (void)layoutSubviews;
@property(readonly, retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

