//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"
#import "UITextViewDelegate.h"

@class NSString, SPTTheme, UITextView;

@interface SPTArtistBiograhyView : UIView <UITextViewDelegate, SPTThemableView>
{
    id <SPTArtistBiograhyViewDelegate> _delegate;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSString *_biographyHTMLString;
    UITextView *_textView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *biographyHTMLString; // @synthesize biographyHTMLString=_biographyHTMLString;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <SPTArtistBiograhyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)applyThemeLayout;
@property(readonly, nonatomic) float textHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
