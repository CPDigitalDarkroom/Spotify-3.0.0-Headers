//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPSidebarEdgeSwipeOverrider.h"

@class NSString, SPTActionButton, SPTInfoView, SPTModalMenuView, SPTProgressView, SPTStartPageMomentOverlayView, UICollectionView, UIImageView;

@interface SPTStartPageRootView : UIView <SPSidebarEdgeSwipeOverrider>
{
    _Bool _dropdownMenuOpen;
    UICollectionView *_collectionView;
    SPTInfoView *_infoView;
    SPTProgressView *_progressView;
    SPTStartPageMomentOverlayView *_overlayView;
    NSString *_backgroundImageName;
    id <SPTStartPageRootViewDelegate> _delegate;
    SPTModalMenuView *_menuView;
    SPTActionButton *_dropdownButton;
    UIImageView *_backgroundImageView;
}

@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic, getter=isDropdownMenuOpen) _Bool dropdownMenuOpen; // @synthesize dropdownMenuOpen=_dropdownMenuOpen;
@property(retain, nonatomic) SPTActionButton *dropdownButton; // @synthesize dropdownButton=_dropdownButton;
@property(retain, nonatomic) SPTModalMenuView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak id <SPTStartPageRootViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(readonly, nonatomic) SPTStartPageMomentOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)setDropdownMenuOpen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutDropdownButton;
@property(copy, nonatomic) NSString *dropdownButtonTitle;
- (void)layoutSubviews;
- (_Bool)shouldRevealOnlyOnEdgeSwipe:(id)arg1;
- (void)dropdownButtonTapped:(id)arg1;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

