/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UITextField.h"

@class _UILegibilitySettings, _UILegibilityView;

@interface SBFolderTitleTextField : UITextField
{
    _Bool _showingEditUI;
    _UILegibilityView *_legibilityView;
    _Bool _allowsEditing;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)_clearButtonImage;
+ (id)_editBackgroundImage;
+ (void)warmupIfNecessary;
- (id)_backgroundImage;
- (id)_clearButtonImage;
- (double)_legibilityStrength;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1;
- (void)_updateLegibility;
- (void)_updateLegibilityView;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)dealloc;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
@property(nonatomic) double fontSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void)setShowsEditUI:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end

