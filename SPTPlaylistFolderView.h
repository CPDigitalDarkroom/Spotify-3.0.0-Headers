//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPSidebarScrollDisabler.h"

@class NSString;

@interface SPTPlaylistFolderView : UIView <SPSidebarScrollDisabler>
{
    BOOL _enableCellSwipingSupport;
}

@property(nonatomic) BOOL enableCellSwipingSupport; // @synthesize enableCellSwipingSupport=_enableCellSwipingSupport;
- (BOOL)shouldInterruptSidebarRevealGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

