//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCRPCRequest.h"

@class FMCImage, FMCTextAlignment, NSMutableArray, NSString;

@interface FMCShow : FMCRPCRequest
{
}

@property(retain) NSMutableArray *customPresets;
@property(retain) NSMutableArray *softButtons;
@property(retain) FMCImage *secondaryGraphic;
@property(retain) FMCImage *graphic;
@property(retain) NSString *mediaTrack;
@property(retain) NSString *mediaClock;
@property(retain) NSString *statusBar;
@property(retain) FMCTextAlignment *alignment;
@property(retain) NSString *mainField4;
@property(retain) NSString *mainField3;
@property(retain) NSString *mainField2;
@property(retain) NSString *mainField1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

