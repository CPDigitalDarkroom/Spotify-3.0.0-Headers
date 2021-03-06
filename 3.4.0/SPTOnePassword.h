//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, Reachability;

@interface SPTOnePassword : NSObject
{
    Reachability *_reachability;
    id <SPTOnePasswordDelegate> _delegate;
    NSString *_username;
    NSString *_password;
}

@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) id <SPTOnePasswordDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (void)getLoginDetailsForApplication:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)checkAvailable;
- (void)returnWithReachable:(_Bool)arg1;
- (void)networkReachabilityChanged;
- (void)checkWithFailsafeAndDelegate:(id)arg1;
- (void)cleanup;
- (void)dealloc;

@end

