//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCollectionViewCell.h"

@class UIButton, UIImageView;

@interface SPTRadioHorizontalCollectionViewCell : SPTCollectionViewCell
{
    UIButton *_deleteButton;
    UIImageView *_curPlayingImageView;
}

@property(retain, nonatomic) UIImageView *curPlayingImageView; // @synthesize curPlayingImageView=_curPlayingImageView;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
