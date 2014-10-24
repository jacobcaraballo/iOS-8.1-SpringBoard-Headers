/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UITextView;

@interface SBSearchWikiMainContentCell : UITableViewCell
{
    UITextView *_descriptionTextView;
    UIImageView *_cardImageView;
    NSLayoutConstraint *_cardImageViewHeightConstraint;
}

- (void)awakeFromNib;
@property UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property NSLayoutConstraint *cardImageViewHeightConstraint; // @synthesize cardImageViewHeightConstraint=_cardImageViewHeightConstraint;
@property UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
