//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTFeature.h"

@class NSArray, NSString, NSURL, SPTLegacyPeopleChooserVC, SPTLegacyShareComposerVC, SPTLegacyShareHandler, SPTLegacyShareSheet, SPTPostComposerVC, SPTSendRecipientChooserVC, SPTSendServiceChooserVC, SPTShareData, SPTShareEntityData, SPTShareVC, SPUser, UIView, UIViewController<SPTShareSheetProtocol>;

@protocol SPTShareFeature <SPTFeature>
- (void)presentShareSheetInPopoverOnIPad:(UIViewController<SPTShareSheetProtocol> *)arg1 withPresentingView:(UIView *)arg2 rect:(struct CGRect)arg3 arrowDirections:(unsigned int)arg4;
- (void)presentShareSheetModallyOnIPhone:(UIViewController<SPTShareSheetProtocol> *)arg1;
- (SPTLegacyShareHandler *)provideLegacyShareHandlerWithType:(unsigned int)arg1 itemURL:(NSURL *)arg2 recipientUser:(SPUser *)arg3 facebookId:(NSString *)arg4;
- (SPTLegacyShareComposerVC *)provideLegacyShareComposerVCWithEntityData:(SPTShareEntityData *)arg1 facebookId:(NSString *)arg2;
- (SPTLegacyShareComposerVC *)provideLegacyShareComposerVCWithEntityData:(SPTShareEntityData *)arg1 user:(SPUser *)arg2;
- (SPTLegacyPeopleChooserVC *)provideLegacyPeopleChooserVC;
- (SPTLegacyShareSheet *)provideLegacyShareSheetWithURL:(NSURL *)arg1 description:(NSString *)arg2 imageLink:(NSURL *)arg3 itemTypeString:(NSString *)arg4 shareLinks:(NSArray *)arg5 moreControls:(id <UITableViewDataSource>)arg6;
- (SPTSendRecipientChooserVC *)provideSendRecipientChooserVCWithShareData:(SPTShareData *)arg1;
- (SPTSendServiceChooserVC *)provideSendServiceChooserVCWithShareData:(SPTShareData *)arg1;
- (SPTPostComposerVC *)providePostComposerVCWithShareData:(SPTShareData *)arg1;
- (SPTShareVC *)provideShareVCWithItemURI:(NSURL *)arg1 itemName:(NSString *)arg2 creatorName:(NSString *)arg3 sourceName:(NSString *)arg4 imageURL:(NSURL *)arg5 itemType:(unsigned int)arg6;
- (BOOL)isMoreButtonEnabled;
- (BOOL)isNewSendToFlowEnabled;
- (BOOL)isNewShareEnabled;
@end
