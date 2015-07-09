//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPopupManager, SPTUpsellPopupViewModel;

@interface SPTUpsellPopupController : NSObject
{
    id <SPTUpsellPopupControllerDataSource> _dataSource;
    id <SPTUpsellPopupControllerDelegate> _delegate;
    SPTUpsellPopupViewModel *_viewModel;
    SPTPopupManager *_popupManager;
}

@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) SPTUpsellPopupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTUpsellPopupControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTUpsellPopupControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)createDefaultButton;
- (id)createPopupDialogButtons;
- (id)createContentViewController;
- (void)configureStateTransitionHandlingForDialog:(id)arg1;
- (id)createPopupDialog;
- (void)presentPopup;
- (id)initWithViewModel:(id)arg1 popupManager:(id)arg2;

@end

