/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBNotificationCell.h"

@class SBNotificationSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell
{
    SBNotificationSeparatorView *_separator;
    _Bool _showsSeparator;
    _Bool _missed;
}

+ (struct CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1;
+ (id)defaultColorForRelevanceDate;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, getter=isMissed) _Bool missed; // @synthesize missed=_missed;
- (void)prepareForReuse;
- (void)setEventDateLabel:(id)arg1;
- (void)setRelevanceDateLabel:(id)arg1;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsSeparator; // @synthesize showsSeparator=_showsSeparator;

@end

