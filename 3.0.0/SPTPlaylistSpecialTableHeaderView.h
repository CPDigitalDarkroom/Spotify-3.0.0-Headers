//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class CALayer, NSString, SPTActionButton, SPTSearchBar, UITableView;

@interface SPTPlaylistSpecialTableHeaderView : UIView <SPTThemableView>
{
    BOOL _filterFieldActive;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTSearchBar *_filterField;
    SPTActionButton *_shuffleButton;
    CALayer *_lineLayer;
    id <SPTPlaylistSpecialTableHeaderViewDelegate> _delegate;
    UITableView *_tableView;
}

+ (id)headerViewWithDelegate:(id)arg1 forTableView:(id)arg2;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTPlaylistSpecialTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(readonly, nonatomic) SPTActionButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(nonatomic, getter=filterFieldIsActive) BOOL filterFieldActive; // @synthesize filterFieldActive=_filterFieldActive;
@property(retain, nonatomic) SPTSearchBar *filterField; // @synthesize filterField=_filterField;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGRect)setFilterFieldActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)shufflePlayButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
