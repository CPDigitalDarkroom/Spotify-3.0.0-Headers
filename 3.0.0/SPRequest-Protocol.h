//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPRequest <NSObject>
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property(readonly, nonatomic, getter=isOutstanding) BOOL outstanding;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)cancel;
@end

