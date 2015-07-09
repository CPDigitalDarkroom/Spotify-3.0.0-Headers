//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface XAXMFormData : NSObject
{
    _Bool _isAttachment;
    NSString *_name;
    NSData *_data;
    NSString *_fileName;
    NSString *_mimeType;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (id)formData:(id)arg1 name:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4;
+ (id)formData:(id)arg1 name:(id)arg2;
@property(readonly) _Bool isAttachment; // @synthesize isAttachment=_isAttachment;
@property(readonly, copy, nonatomic, getter=mimeType) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic, getter=fileName) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic, getter=data) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic, getter=name) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 name:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4;

@end
