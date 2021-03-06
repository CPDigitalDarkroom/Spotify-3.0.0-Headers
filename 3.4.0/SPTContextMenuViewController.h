//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContextMenuViewDataSource.h"
#import "SPTContextMenuViewDelegate.h"
#import "SPTImageLoaderDelegate.h"

@class NSArray, NSString, NSURL, SPTContextMenuView, UIView<SPTContextMenuHeader>;

@interface SPTContextMenuViewController : UIViewController <SPTContextMenuViewDataSource, SPTContextMenuViewDelegate, SPTImageLoaderDelegate>
{
    NSURL *_trackURL;
    id <SPTContextMenuViewControllerDelegate> _delegate;
    UIView<SPTContextMenuHeader> *_headerView;
    double _contextMenuHeaderPreferredHeight;
    double _lastHeaderHeight;
    NSURL *_contextMenuHeaderImageURL;
    NSArray *_contextMenuActions;
    id <SPTContextMenuViewInteractionTarget> _interactionTarget;
    id <SPTImageLoader> _imageLoader;
    NSURL *_entityURL;
}

@property(retain, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTContextMenuViewInteractionTarget> interactionTarget; // @synthesize interactionTarget=_interactionTarget;
@property(retain, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(retain, nonatomic) NSURL *contextMenuHeaderImageURL; // @synthesize contextMenuHeaderImageURL=_contextMenuHeaderImageURL;
@property(nonatomic) double lastHeaderHeight; // @synthesize lastHeaderHeight=_lastHeaderHeight;
@property(nonatomic) double contextMenuHeaderPreferredHeight; // @synthesize contextMenuHeaderPreferredHeight=_contextMenuHeaderPreferredHeight;
@property(retain, nonatomic) UIView<SPTContextMenuHeader> *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <SPTContextMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
- (void).cxx_destruct;
- (void)updateHeaderViewAnimated:(_Bool)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (long long)interfaceOrientationForContextMenuView:(id)arg1;
- (void)dismissContextMenuView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)contextMenuView:(id)arg1 actionForRow:(unsigned long long)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(id)arg1;
@property(nonatomic) unsigned long long contextMenuSubtitleStyle;
- (void)presentWhenReadyInViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)applyThemeLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(unsigned long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 tasks:(id)arg7 entityURL:(id)arg8 imageLoader:(id)arg9;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 tasks:(id)arg6 entityURL:(id)arg7 imageLoader:(id)arg8;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(unsigned long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 actions:(id)arg7 entityURL:(id)arg8 imageLoader:(id)arg9;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 actions:(id)arg6 entityURL:(id)arg7 imageLoader:(id)arg8;
- (id)initWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(unsigned long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 entityURL:(id)arg7 imageLoader:(id)arg8;
- (id)initWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTContextMenuView *view; // @dynamic view;

@end

