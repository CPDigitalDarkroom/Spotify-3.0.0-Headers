//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTLegacyPeopleChooserDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTClientEventLogger, SPTSendServiceChooserViewModel, SPTShareItemView, SPTViewLogger, UITableView;

@interface SPTSendServiceChooserVC : UIViewController <SPTImageLoaderDelegate, UITableViewDelegate, UITableViewDataSource, SPTLegacyPeopleChooserDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
    _Bool _isInboxEnabled;
    id <SPTShareSheetProtocol> _shareSheetVC;
    id <SPTShareFeature> _shareFeature;
    SPTSendServiceChooserViewModel *_viewModel;
    id <SPTImageLoader> _imageLoader;
    SPTClientEventLogger *_logger;
    SPTViewLogger *_viewLogger;
    SPTShareItemView *_itemView;
    UITableView *_tableView;
}

+ (_Bool)shouldHideSectionAtIndexPath:(id)arg1;
@property(nonatomic) _Bool isInboxEnabled; // @synthesize isInboxEnabled=_isInboxEnabled;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTShareItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTSendServiceChooserViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTShareSheetProtocol> shareSheetVC; // @synthesize shareSheetVC=_shareSheetVC;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)peopleChooser:(id)arg1 selectedUserWithFacebookId:(id)arg2;
- (void)peopleChooser:(id)arg1 selectedUsers:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)backButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithShareFeature:(id)arg1 viewModel:(id)arg2 imageLoaderFactory:(id)arg3 logger:(id)arg4 viewLogger:(id)arg5 isInboxEnabled:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

