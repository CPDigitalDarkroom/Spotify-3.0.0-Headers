//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UILabel;

@interface SPTTermsAndConditionsInfoViewController : UIViewController
{
    NSString *_notice;
    UILabel *_noticeLabel;
}

@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
- (void).cxx_destruct;
- (void)okBarButtonItemPressed:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithNotice:(id)arg1;

@end
