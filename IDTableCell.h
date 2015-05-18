//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IDVariantData;

@interface IDTableCell : NSObject <NSCopying>
{
    BOOL _dirty;
    BOOL _visible;
    BOOL _placeholderImageIdDirty;
    unsigned int _type;
    int _placeholderImageId;
    IDVariantData *_data;
}

+ (id)tableCellWithImageData:(id)arg1 placeholderImageId:(int)arg2;
+ (id)tableCellWithImageData:(id)arg1;
+ (id)tableCellWithImageId:(int)arg1;
+ (id)tableCellWithTextId:(int)arg1;
+ (id)tableCellWithString:(id)arg1;
+ (id)tableCellWithInteger:(int)arg1;
@property(retain, nonatomic) IDVariantData *data; // @synthesize data=_data;
@property BOOL placeholderImageIdDirty; // @synthesize placeholderImageIdDirty=_placeholderImageIdDirty;
@property int placeholderImageId; // @synthesize placeholderImageId=_placeholderImageId;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property BOOL dirty; // @synthesize dirty=_dirty;
@property unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

