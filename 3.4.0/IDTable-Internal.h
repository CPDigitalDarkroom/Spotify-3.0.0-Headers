//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDTable.h"

@interface IDTable (Internal)
- (void)sendEmptyTable;
- (void)setNeedsFlush;
- (void)rowFocused:(id)arg1;
- (void)rowSelected:(id)arg1;
- (void)flushFromColumn:(long long)arg1 countOfColumns:(long long)arg2 fromRow:(long long)arg3 countOfRows:(long long)arg4;
- (void)flushColumns:(id)arg1 fromRow:(long long)arg2 countOfRows:(long long)arg3;
- (id)columnNumbersNeedsFlushForSpeed:(int)arg1 inRow:(long long)arg2;
@end

