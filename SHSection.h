//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SHFooter;

@interface SHSection : NSObject
{
    NSString *_name;
    NSMutableArray *_rows;
    SHFooter *_footer;
}

@property(retain, nonatomic) SHFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end

