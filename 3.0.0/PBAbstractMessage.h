//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessage.h"

@class NSString;

@interface PBAbstractMessage : NSObject <PBMessage>
{
}

@property(readonly, copy) NSString *description;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (id)unknownFields;
- (id)defaultInstance;
- (void)writeToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (int)serializedSize;
- (BOOL)isInitialized;
- (id)data;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

