//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContextMenuContentViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTShareSheetProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTClientEventLogger, SPTPopoverController, SPTShareItemView, SPTShareViewModel, SPTViewLogger, UITableView;

@interface SPTShareVC : UIViewController <SPTImageLoaderDelegate, UITableViewDelegate, UITableViewDataSource, SPTShareSheetProtocol, SPTContextMenuContentViewController>
{
    id <SPTShareVCDelegate> delegate;
    SPTPopoverController *popover;
    id <SPTContextMenuContentViewControllerDelegate> contextMenuDelegate;
    id <SPTShareFeature> _shareFeature;
    SPTShareViewModel *_viewModel;
    id <SPTImageLoader> _imageLoader;
    SPTClientEventLogger *_logger;
    SPTViewLogger *_viewLogger;
    SPTShareItemView *_itemView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTShareItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTShareViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTContextMenuContentViewControllerDelegate> contextMenuDelegate; // @synthesize contextMenuDelegate;
@property(retain, nonatomic) SPTPopoverController *popover; // @synthesize popover;
@property(nonatomic) __weak id <SPTShareVCDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (void)close;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithShareFeature:(id)arg1 viewModel:(id)arg2 imageLoaderFactory:(id)arg3 logger:(id)arg4 viewLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
