//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEtchSession, IDVehicleInfo, IDVersionInfo, NSOperationQueue, NSURL;

@interface IDVehicleInformationRetriever : NSObject
{
    id <IDVehicleInformationRetrieverDelegate> _delegate;
    NSURL *_url;
    IDVehicleInfo *_vehicleInfo;
    IDVersionInfo *_cdsVersionInfo;
    IDVersionInfo *_etchVersionInfo;
    IDEtchSession *_etchSession;
    NSOperationQueue *_retrievalQueue;
    double _waitTimeBeforeRetrieval;
}

@property double waitTimeBeforeRetrieval; // @synthesize waitTimeBeforeRetrieval=_waitTimeBeforeRetrieval;
@property(readonly) NSOperationQueue *retrievalQueue; // @synthesize retrievalQueue=_retrievalQueue;
@property(retain) IDEtchSession *etchSession; // @synthesize etchSession=_etchSession;
@property(retain) IDVersionInfo *etchVersionInfo; // @synthesize etchVersionInfo=_etchVersionInfo;
@property(retain) IDVersionInfo *cdsVersionInfo; // @synthesize cdsVersionInfo=_cdsVersionInfo;
@property(retain) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) __weak id <IDVehicleInformationRetrieverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (id)fetchEtchVersion:(id *)arg1;
- (id)fetchCdsVersion:(id *)arg1;
- (id)fetchSystemInfoDict:(id *)arg1;
- (void)disconnectFromHmi;
- (BOOL)connectToHmi:(id *)arg1;
- (void)retrieveVehicleProperties;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

@end
