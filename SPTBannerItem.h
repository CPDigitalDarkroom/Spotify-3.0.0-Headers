//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTBannerItem : NSObject
{
    int _style;
    unsigned int _priority;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
    NSString *_localizedActionButtonTitle;
    double _presentationDuration;
}

+ (id)spt_account_bannerItemForPaymentStateIssue:(int)arg1;
@property(readonly, copy, nonatomic) NSString *localizedActionButtonTitle; // @synthesize localizedActionButtonTitle=_localizedActionButtonTitle;
@property(readonly, copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) double presentationDuration; // @synthesize presentationDuration=_presentationDuration;
@property(readonly, nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 localizedActionButtonTitle:(id)arg3 style:(int)arg4 priority:(unsigned int)arg5 presentationDuration:(double)arg6;

@end

