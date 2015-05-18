//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FBAppBridgeTypeToJSONConverter : NSObject
{
    NSMutableArray *_createdPasteboardNames;
}

+ (id)appBridgeTypeFromJSON:(id)arg1;
@property(retain, nonatomic) NSMutableArray *createdPasteboardNames; // @synthesize createdPasteboardNames=_createdPasteboardNames;
- (id)jsonFromData:(id)arg1 tag:(id)arg2;
- (id)convertedArrayFromArray:(id)arg1 convertingToJSON:(BOOL)arg2;
- (id)convertedDictionaryFromDictionary:(id)arg1 convertingToJSON:(BOOL)arg2;
- (id)convertedObjectFromObject:(id)arg1 convertingToJSON:(BOOL)arg2;
- (id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1;
- (id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1;
- (void)dealloc;

@end

