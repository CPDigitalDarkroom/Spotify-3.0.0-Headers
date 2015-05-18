//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTProductStateObserver.h"

@class NSString, SPTSocialManager;

@interface SPTFacebookPostOpenGraphManager : NSObject <SPTProductStateObserver>
{
    id <SPTProductState> _productState;
    SPTSocialManager *_socialManager;
}

+ (id)facebookPostOpenGraphManagerWithProductState:(id)arg1 socialManager:(id)arg2;
@property(nonatomic) __weak SPTSocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)postOpenGraphDefault;
- (id)initWithProductState:(id)arg1 socialManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

