//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDRemoteBMWRemotingServerAdapter, NSOperationQueue, NSUUID;

@interface IDEtchSession : NSObject
{
    struct IDEtchSessionCppAdaptor *_adaptor;
    int _sessionState;
    id <IDEtchSessionHmiDelegate> _hmiDelegate;
    id <IDEtchSessionAudioDelegate> _audioDelegate;
    id <IDEtchSessionCdsDelegate> _cdsDelegate;
    id <IDEtchSessionPiaDelegate> _piaDelegate;
    NSOperationQueue *_delegateQueue;
    NSUUID *_sessionIdentifier;
    IDRemoteBMWRemotingServerAdapter *_remoteServerAdaptor;
}

+ (void)initialize;
@property(retain) IDRemoteBMWRemotingServerAdapter *remoteServerAdaptor; // @synthesize remoteServerAdaptor=_remoteServerAdaptor;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <IDEtchSessionPiaDelegate> piaDelegate; // @synthesize piaDelegate=_piaDelegate;
@property __weak id <IDEtchSessionCdsDelegate> cdsDelegate; // @synthesize cdsDelegate=_cdsDelegate;
@property __weak id <IDEtchSessionAudioDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
@property __weak id <IDEtchSessionHmiDelegate> hmiDelegate; // @synthesize hmiDelegate=_hmiDelegate;
@property int sessionState; // @synthesize sessionState=_sessionState;
- (void).cxx_destruct;
- (id)description;
- (id)stringFromRemotingWrapperState:(int)arg1;
- (void)processAsyncResultNone:(SmartPointer_e248625f)arg1 callName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleNilValueForParameter:(id)arg1 callName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSessionNotStartedForCall:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)etchVersionInfoWithError:(id *)arg1;
- (id)cdsVersionInfoWithError:(id *)arg1;
- (id)systemInfoWithError:(id *)arg1;
- (void)teardownEtchRuntime;
- (void)setupEtchRuntime;
- (void)destroyRemoteServer;
- (BOOL)stopRemoteServer;
- (BOOL)startRemoteServer;
- (BOOL)createRemoteServerWithUrl:(id)arg1;
- (void)stopSession;
- (BOOL)startSessionWithUrl:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)handlePlayerStateChanged:(int)arg1 audioConnectionType:(int)arg2 audioPlayerState:(int)arg3;
- (void)handleMultimediaButtonEvent:(int)arg1 audioButtonEvent:(int)arg2;
- (void)handleConnectionDenied:(int)arg1 connectionType:(int)arg2;
- (void)handleConnectionDeactivated:(int)arg1 connectionType:(int)arg2;
- (void)handleConnectionGranted:(int)arg1 connectionType:(int)arg2;
- (BOOL)isValidPlayerState:(int)arg1;
- (BOOL)isValidConnectionType:(int)arg1;
- (SmartPointer_d6a6d25b)avPlayerStateWithIDAudioPlayerState:(int)arg1;
- (SmartPointer_8066eb6b)avConnectionTypeWithIDAudioConnectionType:(int)arg1;
- (BOOL)audioService:(int)arg1 confirmPlayerState:(int)arg2 forConnectionOfType:(int)arg3 error:(id *)arg4;
- (void)audioService:(int)arg1 confirmPlayerState:(int)arg2 forConnectionOfType:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)audioService:(int)arg1 closeConnectionOfType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)audioService:(int)arg1 requestConnectionOfType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)registerAudioServiceWithApplicationIdentifier:(id)arg1 auxiliaryInput:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)updateCertificateRevocationList:(id)arg1 error:(id *)arg2;
- (BOOL)loginWithSignedChallenge:(id)arg1 error:(id *)arg2;
- (id)authChallengeForCertificate:(id)arg1 error:(id *)arg2;
- (void)handlePropertyChanged:(int)arg1 uniqueIdentifier:(id)arg2 propertyName:(id)arg3 propertyValue:(id)arg4;
- (BOOL)cdsService:(int)arg1 setProperty:(id)arg2 value:(id)arg3 requestIdentifier:(id)arg4 error:(id *)arg5;
- (BOOL)cdsService:(int)arg1 unbindProperty:(id)arg2 error:(id *)arg3;
- (BOOL)cdsService:(int)arg1 bindProperty:(id)arg2 refreshInterval:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)cdsService:(int)arg1 requestProperty:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;
- (void)cdsService:(int)arg1 setProperty:(id)arg2 value:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cdsService:(int)arg1 requestProperty:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cdsService:(int)arg1 unbindProperty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cdsService:(int)arg1 bindProperty:(id)arg2 refreshInterval:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)registerCdsServiceWithError:(id *)arg1;
- (id)etchExeptionError:(id)arg1 forCall:(id)arg2;
- (id)ivalidValueErrorForParameter:(id)arg1 callName:(id)arg2;
- (id)nilParameterErrorForParameter:(id)arg1 callName:(id)arg2;
- (id)wrongStateErrorForCall:(id)arg1;
- (void)handleHmiEvent:(int)arg1 uniqueIdentifier:(id)arg2 componentIdentifier:(int)arg3 eventIdentifier:(int)arg4 eventInfo:(id)arg5;
- (void)handleActionEvent:(int)arg1 uniqueIdentifier:(id)arg2 actionIdentifier:(int)arg3 actionInfo:(id)arg4;
- (void)hmiService:(int)arg1 hmiCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hmiService:(int)arg1 triggerHmiEvent:(unsigned int)arg2 parameterMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)hmiService:(int)arg1 setHmiResource:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hmiService:(int)arg1 updateProperty:(int)arg2 forComponent:(int)arg3 variantMap:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)hmiService:(int)arg1 updateDataModel:(int)arg2 variantData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)hmiService:(int)arg1 updateTable:(int)arg2 tableData:(id)arg3 rows:(struct _NSRange)arg4 columns:(struct _NSRange)arg5 totalRows:(unsigned int)arg6 totalColumns:(unsigned int)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)registerHmiServiceWithIdentifier:(id)arg1 name:(id)arg2 vendor:(id)arg3 versionInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)hmiService:(int)arg1 setHmiResource:(id)arg2 error:(id *)arg3;
- (BOOL)hmiService:(int)arg1 startRemoteHmiWitherror:(id *)arg2;
- (id)hmiService:(int)arg1 hmiCapabilitiesWitherror:(id *)arg2;
- (BOOL)hmiService:(int)arg1 confirmActionEvent:(int)arg2 error:(id *)arg3;
- (BOOL)hmiService:(int)arg1 checkAvailabilityOfResource:(id)arg2 error:(id *)arg3;
- (BOOL)hmiService:(int)arg1 addHmiEventHandlerWithError:(id *)arg2;
- (BOOL)hmiService:(int)arg1 addActionEventHandlerWithError:(id *)arg2;
- (int)registerHmiServiceWithIdentifier:(id)arg1 name:(id)arg2 vendor:(id)arg3 versionInfo:(id)arg4 error:(id *)arg5;
- (void)handlePiaEvent:(int)arg1 piaEvent:(int)arg2 payload:(id)arg3;
- (BOOL)piaService:(int)arg1 disposeWithError:(id *)arg2;
- (BOOL)piaService:(int)arg1 exportResult:(BOOL)arg2 error:(id *)arg3;
- (BOOL)piaService:(int)arg1 importData:(id)arg2 error:(id *)arg3;
- (BOOL)piaService:(int)arg1 requestWithData:(id)arg2 error:(id *)arg3;
- (int)registerPiaServiceWithIdentifier:(id)arg1 error:(id *)arg2;

@end

