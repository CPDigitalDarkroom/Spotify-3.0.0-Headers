//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class MPVolumeView, NSString, UIImageView, UISlider;

@interface SPTGaiaVolumeView : UIView <SPTThemableView>
{
    BOOL _shouldShowRemoteVolumeSlider;
    BOOL _remoteVolumeEnabled;
    BOOL _airplayHidden;
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    id <SPTGaiaVolumeViewDelegate> _delegate;
    MPVolumeView *_internalVolumeSlider;
    UISlider *_remoteVolumeSlider;
    UIImageView *_volumeIconView;
}

@property(retain, nonatomic) UIImageView *volumeIconView; // @synthesize volumeIconView=_volumeIconView;
@property(retain, nonatomic) UISlider *remoteVolumeSlider; // @synthesize remoteVolumeSlider=_remoteVolumeSlider;
@property(retain, nonatomic) MPVolumeView *internalVolumeSlider; // @synthesize internalVolumeSlider=_internalVolumeSlider;
@property(nonatomic) BOOL airplayHidden; // @synthesize airplayHidden=_airplayHidden;
@property(nonatomic, getter=isRemoteVolumeEnabled) BOOL remoteVolumeEnabled; // @synthesize remoteVolumeEnabled=_remoteVolumeEnabled;
@property(nonatomic) BOOL shouldShowRemoteVolumeSlider; // @synthesize shouldShowRemoteVolumeSlider=_shouldShowRemoteVolumeSlider;
@property(retain, nonatomic) id <SPTGaiaVolumeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (void)createVolumeViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) float remoteVolume;
- (void)remoteVolumeSliderChanged:(id)arg1;
- (void)setupSliderAppearance;
- (void)applyThemeLayout;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

