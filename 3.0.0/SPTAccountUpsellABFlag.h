//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAccountABFlag.h"

@interface SPTAccountUpsellABFlag : SPTAccountABFlag
{
    BOOL _showPriceInHeader;
    BOOL _showPriceInContent;
}

@property(nonatomic) BOOL showPriceInContent; // @synthesize showPriceInContent=_showPriceInContent;
@property(nonatomic) BOOL showPriceInHeader; // @synthesize showPriceInHeader=_showPriceInHeader;
- (void)valueDidUpdate;

@end

