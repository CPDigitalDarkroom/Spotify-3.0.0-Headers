//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SPTIAPReceipt : NSObject
{
    NSData *_receiptData;
}

+ (id)receiptDataForTransaction:(id)arg1;
+ (id)receiptFromTransaction:(id)arg1;
@property(retain, nonatomic) NSData *receiptData; // @synthesize receiptData=_receiptData;
- (void).cxx_destruct;
- (id)initWithReceiptData:(id)arg1;

@end
