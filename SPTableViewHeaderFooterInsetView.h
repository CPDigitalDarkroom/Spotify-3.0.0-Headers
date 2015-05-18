//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "SPTThemableView.h"

@class NSString, UILabel;

@interface SPTableViewHeaderFooterInsetView : UITableViewHeaderFooterView <SPTThemableView>
{
    struct UIEdgeInsets _contentInset;
    BOOL _contentInsetChanged;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_headerLabel;
}

@property(nonatomic) BOOL contentInsetChanged; // @synthesize contentInsetChanged=_contentInsetChanged;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

