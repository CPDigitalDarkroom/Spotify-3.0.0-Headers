//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFeedbackRemoteIdentifierStore : NSObject
{
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)removeAllIdentifiers;
- (_Bool)isIdentifierStored:(id)arg1;
- (void)storeIdentifier:(id)arg1;
- (id)storedIdentifiers;
- (id)initWithLocalSettings:(id)arg1;

@end

