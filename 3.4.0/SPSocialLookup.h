//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCore;

@interface SPSocialLookup : NSObject
{
    struct unique_ptr<SocialLookupObjC, std::__1::default_delete<SocialLookupObjC>> _socialLookupObjC;
    id <SPSocialLookupDelegate> _delegate;
    SPCore *_core;
}

@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak id <SPSocialLookupDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)start;
- (id)initWithCore:(id)arg1;

@end

