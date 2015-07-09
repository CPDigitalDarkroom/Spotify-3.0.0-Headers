//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class BITAttributedLabel, BITFeedbackMessage, NSDateFormatter, NSMutableArray, UILabel, UIView;

@interface BITFeedbackListViewCell : UITableViewCell
{
    BITFeedbackMessage *_message;
    unsigned int _style;
    unsigned int _backgroundStyle;
    BITAttributedLabel *_labelText;
    id <BITFeedbackListViewCellDelegate> _delegate;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    UILabel *_labelTitle;
    NSMutableArray *_attachmentViews;
    UIView *_accessoryBackgroundView;
}

+ (float)heightForTextInRowWithMessage:(id)arg1 tableViewWidth:(float)arg2;
+ (float)heightForRowWithMessage:(id)arg1 tableViewWidth:(float)arg2;
@property(retain, nonatomic) UIView *accessoryBackgroundView; // @synthesize accessoryBackgroundView=_accessoryBackgroundView;
@property(retain, nonatomic) NSMutableArray *attachmentViews; // @synthesize attachmentViews=_attachmentViews;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSDateFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak id <BITFeedbackListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BITAttributedLabel *labelText; // @synthesize labelText=_labelText;
@property(nonatomic) unsigned int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) BITFeedbackMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)imageButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)setAttachments:(id)arg1;
- (BOOL)isSameDayWithDate1:(id)arg1 date2:(id)arg2;
- (id)backgroundColor;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
