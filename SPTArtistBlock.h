//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicBlock.h"

@class NSArray, NSString, NSURL;

@interface SPTArtistBlock : NSObject <SPTCeramicBlock>
{
    NSString *_title;
    int _renderType;
    NSArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) int renderType; // @synthesize renderType=_renderType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithRenderTitle:(id)arg1 renderType:(int)arg2 items:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSURL *footerActionURL;
@property(readonly, copy, nonatomic) NSString *footerTitle;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

