//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTShowcaseDynamicRegistry.h"

@class NSMutableDictionary, NSString;

@interface SPTShowcaseDynamicRegistryImplementation : NSObject <SPTShowcaseDynamicRegistry>
{
    NSMutableDictionary *_registry;
}

@property(retain, nonatomic) NSMutableDictionary *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)registerDynamicShowcaseProvider:(id)arg1 withIdentifier:(id)arg2;
- (id)providerForIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

