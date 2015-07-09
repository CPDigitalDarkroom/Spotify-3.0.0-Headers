//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MPSurveyQuestion, NSLayoutConstraint, UIColor, UILabel;

@interface MPSurveyQuestionViewController : UIViewController
{
    id <MPSurveyQuestionViewControllerDelegate> _delegate;
    MPSurveyQuestion *_question;
    UIColor *_highlightColor;
    UILabel *_prompt;
    NSLayoutConstraint *_promptHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *promptHeight; // @synthesize promptHeight=_promptHeight;
@property(retain, nonatomic) UILabel *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) MPSurveyQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <MPSurveyQuestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

