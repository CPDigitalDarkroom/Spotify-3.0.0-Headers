//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCRPCStruct.h"

@class NSMutableArray;

@interface FMCHMIPermissions : FMCRPCStruct
{
}

@property(retain) NSMutableArray *userDisallowed;
@property(retain) NSMutableArray *allowed;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

