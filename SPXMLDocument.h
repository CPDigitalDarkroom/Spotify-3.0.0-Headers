//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPXMLNode.h"

@interface SPXMLDocument : SPXMLNode
{
    struct _xmlDoc *_document;
}

@property(nonatomic) struct _xmlDoc *document; // @synthesize document=_document;
- (id)parent;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1 encoding:(unsigned int)arg2;

@end

