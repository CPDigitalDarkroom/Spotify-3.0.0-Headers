//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTArtistArrayTableViewDataSource.h"

@interface SPTArtistAlbumsTableViewDataSource : SPTArtistArrayTableViewDataSource
{
    CDUnknownBlockType _accessoryAction;
    id <SPTAudioTouch> _audioTouch;
    id <SPTProductState> _productState;
}

@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(copy, nonatomic) CDUnknownBlockType accessoryAction; // @synthesize accessoryAction=_accessoryAction;
- (void).cxx_destruct;
- (void)prepareCell:(id)arg1 withItem:(id)arg2 index:(long long)arg3;
- (void)prepareCell:(id)arg1 withItem:(id)arg2 index:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (id)initWithTableView:(id)arg1 imageLoader:(id)arg2 presentAsCollectionView:(_Bool)arg3 audioTouch:(id)arg4 productState:(id)arg5;

@end

