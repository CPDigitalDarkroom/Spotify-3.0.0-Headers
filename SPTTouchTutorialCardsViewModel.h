//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTTouchTutorialCardsViewModel : NSObject
{
    NSArray *_cards;
}

@property(readonly, nonatomic) NSArray *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (id)entityURLForCardAtIndex:(int)arg1;
- (id)imageURLForCardAtIndex:(int)arg1;
- (id)titleForCardAtIndex:(int)arg1;
- (int)numberOfCards;
- (id)initWithCards:(id)arg1;

@end

