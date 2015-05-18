//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTProductStateObserver.h"

@class NSString;

@interface SPTStartPageProductState : NSObject <SPTProductStateObserver>
{
    BOOL _shuffleEnabled;
    id <SPTStartPageProductStateDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isShuffleEnabled) BOOL shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(nonatomic) __weak id <SPTStartPageProductStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (BOOL)checkShuffleStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

