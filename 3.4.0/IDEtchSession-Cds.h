//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEtchSession.h"

@interface IDEtchSession (Cds)
- (void)handlePropertyChanged:(long long)arg1 uniqueIdentifier:(id)arg2 propertyName:(id)arg3 propertyValue:(id)arg4;
- (_Bool)cdsService:(long long)arg1 setProperty:(id)arg2 value:(id)arg3 requestIdentifier:(id)arg4 error:(id *)arg5;
- (_Bool)cdsService:(long long)arg1 unbindProperty:(id)arg2 error:(id *)arg3;
- (_Bool)cdsService:(long long)arg1 bindProperty:(id)arg2 refreshInterval:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)cdsService:(long long)arg1 requestProperty:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;
- (void)cdsService:(long long)arg1 setProperty:(id)arg2 value:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cdsService:(long long)arg1 requestProperty:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cdsService:(long long)arg1 unbindProperty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cdsService:(long long)arg1 bindProperty:(id)arg2 refreshInterval:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)registerCdsServiceWithError:(id *)arg1;
@end

