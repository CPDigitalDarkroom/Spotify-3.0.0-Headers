//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubViewHandler.h"

@class NSString, SPTPodcastHubLocalContentProvider;

@interface SPTPodcastHubViewHandler : NSObject <SPTHubViewHandler>
{
    SPTPodcastHubLocalContentProvider *_contentProvider;
}

@property(nonatomic) __weak SPTPodcastHubLocalContentProvider *contentProvider; // @synthesize contentProvider=_contentProvider;
- (void).cxx_destruct;
- (_Bool)handleHubHeaderButtonPressWithTargetURL:(id)arg1;
- (struct UIEdgeInsets)insetsForHubBlockAtIndex:(unsigned long long)arg1;
- (id)metaDataPrefixViewForHubItemAtIndexPath:(struct SPTHubIndexPath)arg1 viewURI:(id)arg2;
- (id)prefixViewForHubItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (id)initWithContentProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

