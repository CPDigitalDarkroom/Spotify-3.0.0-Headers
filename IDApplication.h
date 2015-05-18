//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDA4AProxyInfo, IDAppManifest, IDAudioService, IDCdsService, IDEtchSession, IDHmiService, IDPiaService, IDScheduler, IDVehicleInfo, NSOperationQueue, NSURL, NSUndoManager;

@interface IDApplication : NSObject
{
    BOOL _connected;
    IDHmiService *_hmiService;
    IDCdsService *_cdsService;
    IDAudioService *_audioService;
    id <IDApplicationDelegate> _delegate;
    id <IDApplicationDataSource> _dataSource;
    id <IDHmiProvider> _hmiProvider;
    IDVehicleInfo *_vehicleInfo;
    IDPiaService *_piaService;
    IDAppManifest *_manifest;
    NSOperationQueue *_appQueue;
    NSURL *_hmiURL;
    IDEtchSession *_etchSession;
    IDScheduler *_scheduler;
    NSOperationQueue *_delegateQueue;
    unsigned int _stopTaskIdentifier;
    IDA4AProxyInfo *_proxyInfo;
    NSUndoManager *_undoManager;
}

@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain) IDA4AProxyInfo *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
@property unsigned int stopTaskIdentifier; // @synthesize stopTaskIdentifier=_stopTaskIdentifier;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) IDScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain) IDEtchSession *etchSession; // @synthesize etchSession=_etchSession;
@property(readonly) NSURL *hmiURL; // @synthesize hmiURL=_hmiURL;
@property(readonly) NSOperationQueue *appQueue; // @synthesize appQueue=_appQueue;
@property(readonly) IDAppManifest *manifest; // @synthesize manifest=_manifest;
@property(retain) IDPiaService *piaService; // @synthesize piaService=_piaService;
@property(retain) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(readonly) id <IDHmiProvider> hmiProvider; // @synthesize hmiProvider=_hmiProvider;
@property(nonatomic) __weak id <IDApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IDApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDAudioService *audioService; // @synthesize audioService=_audioService;
@property(retain) IDCdsService *cdsService; // @synthesize cdsService=_cdsService;
@property(retain) IDHmiService *hmiService; // @synthesize hmiService=_hmiService;
@property(getter=isConnected) BOOL connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (BOOL)hasValidHmiResourceDatabaseCount;
- (BOOL)hasValidResourceHashes;
- (BOOL)shouldRegisterPiaService;
- (BOOL)shouldRegisterAudioService;
- (BOOL)shouldRegisterCdsService;
- (BOOL)isLastUserModeAllowed;
- (id)debugDescription;
- (id)description;
- (void)restoreMainHmiState;
- (void)hmiDidStop;
- (void)hmiDidStart;
- (void)applicationDidStop;
- (void)applicationDidFailToStartWithError:(id)arg1;
- (void)applicationDidStart;
- (void)applicationDidConnectToVehicle;
- (void)performLastUserModeWithView:(id)arg1;
- (void)internalStop;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onHmiRestoreEvent:(id)arg1;
- (void)undoSetupPiaService;
- (BOOL)setupPiaService:(id *)arg1;
- (void)undoSetupAudioService;
- (BOOL)setupAudioService:(id *)arg1;
- (void)undoStartHmi;
- (BOOL)startHmi:(id *)arg1;
- (void)undoSetupHmiService;
- (BOOL)setupHmiService:(id *)arg1;
- (void)undoSetupCdsService;
- (BOOL)setupCdsService:(id *)arg1;
- (void)undoLoginToHmi;
- (BOOL)loginToHmi:(id *)arg1;
- (void)undoStartEtchSession;
- (BOOL)startEtchSession:(id *)arg1;
- (void)undoPreflightCheck;
- (BOOL)performPreflightCheck:(id *)arg1;
- (id)internalStart;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)identifier;
- (id)vendor;
- (id)version;
- (id)name;
- (id)initWithHmiProvider:(id)arg1 hmiURL:(id)arg2 etchSession:(id)arg3;
- (id)initWithHmiProvider:(id)arg1 hmiURL:(id)arg2;
- (id)initWithHmiProvider:(id)arg1;
- (id)init;

@end

