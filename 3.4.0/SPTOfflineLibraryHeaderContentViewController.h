//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTEntityHeaderContentController.h"

@class NSString, SPTImageBlurView, SPTTheme, UIImage, UIImageView, UILabel;

@interface SPTOfflineLibraryHeaderContentViewController : UIViewController <SPTEntityHeaderContentController>
{
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
    UILabel *_collapsedTitleLabel;
    SPTImageBlurView *_blurredBackgroundImageView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTImageBlurView *blurredBackgroundImageView; // @synthesize blurredBackgroundImageView=_blurredBackgroundImageView;
@property(retain, nonatomic) UILabel *collapsedTitleLabel; // @synthesize collapsedTitleLabel=_collapsedTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)updateCollapsedTitleLabelFrame;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *collapsedTitle;
@property(copy, nonatomic) NSString *title;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
