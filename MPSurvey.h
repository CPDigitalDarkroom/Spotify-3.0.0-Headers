//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MPSurvey : NSObject
{
    unsigned int _ID;
    NSString *_name;
    unsigned int _collectionID;
    NSArray *_questions;
}

+ (id)surveyWithJSONObject:(id)arg1;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(nonatomic) unsigned int collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithID:(unsigned int)arg1 name:(id)arg2 collectionID:(unsigned int)arg3 andQuestions:(id)arg4;

@end

