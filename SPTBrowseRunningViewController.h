//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseStickyHeaderViewController.h"

#import "SPTBrowseHeaderActionProtocol.h"
#import "SPTCeramicViewControllerDelegate.h"

@class NSString, SPTBrowseGenreHeaderViewController, SPTCeramicViewController;

@interface SPTBrowseRunningViewController : SPTBrowseStickyHeaderViewController <SPTBrowseHeaderActionProtocol, SPTCeramicViewControllerDelegate>
{
}

- (void)headerViewController:(id)arg1 didSelectMainControl:(id)arg2 withValue:(int)arg3;
- (void)ceramicViewController:(id)arg1 didUpdateContentOffset:(struct CGPoint)arg2;
- (id)URI;
- (void)setupHeader;
- (void)setupContentViewController;

// Remaining properties
@property(retain, nonatomic) SPTCeramicViewController *contentViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) SPTBrowseGenreHeaderViewController *headerViewController;
@property(readonly) Class superclass;

@end

