//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDGauge.h"

@interface IDIntegerGauge : IDGauge
{
    id <IDIntegerGaugeDelegate> _delegate;
    int _value;
}

@property(nonatomic) int value; // @synthesize value=_value;
@property(nonatomic) __weak id <IDIntegerGaugeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onGaugeChangeAction:(id)arg1;
- (void)onGaugeAction:(id)arg1;

@end

