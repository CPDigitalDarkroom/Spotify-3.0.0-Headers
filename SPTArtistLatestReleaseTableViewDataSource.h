//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTArtistArrayTableViewDataSource.h"

@interface SPTArtistLatestReleaseTableViewDataSource : SPTArtistArrayTableViewDataSource
{
    id <SPTAudioTouch> _audioTouch;
}

@property(nonatomic) __weak id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
- (void).cxx_destruct;
- (void)prepareCell:(id)arg1 withItem:(id)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableView:(id)arg1 imageLoader:(id)arg2 audioTouch:(id)arg3;

@end

