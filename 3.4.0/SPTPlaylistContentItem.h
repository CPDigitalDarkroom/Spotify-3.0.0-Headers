//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTTrackContextContentItem.h"

#import "SPTExternalContentItem.h"

@class NSArray, NSString, SPPlaylist, SPSession;

@interface SPTPlaylistContentItem : SPTTrackContextContentItem <SPTExternalContentItem>
{
    SPPlaylist *_playlist;
    SPSession *_session;
}

@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldPlayParent;
@property(readonly, copy, nonatomic) NSString *URI;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)generateImageWithSize:(struct CGSize)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1 playlistContext:(id)arg2 withParent:(id)arg3 imageLoaderFactory:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) unsigned long long childStructureHint;
@property(readonly, copy, nonatomic) NSArray *children;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *headers;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool isItemContainer;
@property(readonly, nonatomic) id <SPTExternalContentItem> parent;
@property(readonly, nonatomic) _Bool playable;
@property(readonly) Class superclass;

@end

