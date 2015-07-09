//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SPTLayoutConstraintBuilder : NSObject
{
    NSMutableArray *_storedConstraints;
}

@property(retain, nonatomic) NSMutableArray *storedConstraints; // @synthesize storedConstraints=_storedConstraints;
- (void).cxx_destruct;
- (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
- (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
- (id)visualFormats:(id)arg1 forViews:(id)arg2 metrics:(id)arg3;
- (void)addConstraintsFromArray:(id)arg1;
@property(readonly, nonatomic) NSArray *constraints;
- (id)init;
- (id)the:(int)arg1 of:(id)arg2 shouldBe:(int)arg3 constant:(float)arg4 times:(float)arg5;
- (id)the:(int)arg1 of:(id)arg2 shouldBe:(int)arg3 constant:(float)arg4;
- (id)the:(int)arg1 of:(id)arg2 shouldBe:(int)arg3 the:(int)arg4 of:(id)arg5;
- (id)the:(int)arg1 of:(id)arg2 shouldBe:(int)arg3 the:(int)arg4 of:(id)arg5 times:(float)arg6 plus:(float)arg7;
- (id)view:(id)arg1 centerOn:(id)arg2;
- (id)view:(id)arg1 centerVerticallyOn:(id)arg2;
- (id)view:(id)arg1 centerVerticallyOn:(id)arg2 offset:(float)arg3;
- (id)view:(id)arg1 centerHorizontallyOn:(id)arg2;
- (id)view:(id)arg1 centerHorizontallyOn:(id)arg2 offset:(float)arg3;
- (id)view:(id)arg1 rightEdgeShouldBe:(int)arg2 rightEdgeOf:(id)arg3 plus:(float)arg4;
- (id)view:(id)arg1 leftAndRightEdgeShouldBeEqualLeftAndRightEdgeOf:(id)arg2;
- (id)view:(id)arg1 leftEdgeShouldBe:(int)arg2 leftEdgeOf:(id)arg3 plus:(float)arg4;
- (id)view:(id)arg1 bottomEdgeShouldBe:(int)arg2 bottomEdgeOf:(id)arg3 plus:(float)arg4;
- (id)view:(id)arg1 topEdgeShouldBe:(int)arg2 topEdgeOf:(id)arg3 plus:(float)arg4;
- (id)view:(id)arg1 rightOf:(id)arg2 offset:(float)arg3;
- (id)view:(id)arg1 leftOf:(id)arg2 offset:(float)arg3;
- (id)view:(id)arg1 below:(id)arg2 relation:(int)arg3 offset:(float)arg4;
- (id)view:(id)arg1 below:(id)arg2 offset:(float)arg3;
- (id)view:(id)arg1 above:(id)arg2 relation:(int)arg3 offset:(float)arg4;
- (id)view:(id)arg1 above:(id)arg2 offset:(float)arg3;
- (id)view:(id)arg1 heightShouldBe:(int)arg2 itsWidthTimes:(float)arg3 plus:(float)arg4;
- (id)view:(id)arg1 heightShouldBe:(int)arg2 heightOf:(id)arg3;
- (id)view:(id)arg1 heightShouldBe:(int)arg2 heightOf:(id)arg3 times:(float)arg4 plus:(float)arg5;
- (id)view:(id)arg1 heightShouldBe:(int)arg2 to:(float)arg3;
- (id)view:(id)arg1 widthShouldBe:(int)arg2 itsHeightTimes:(float)arg3 plus:(float)arg4;
- (id)view:(id)arg1 widthShouldBe:(int)arg2 widthOf:(id)arg3;
- (id)view:(id)arg1 widthShouldBe:(int)arg2 widthOf:(id)arg3 times:(float)arg4 plus:(float)arg5;
- (id)view:(id)arg1 widthShouldBe:(int)arg2 to:(float)arg3;
- (id)view:(id)arg1 size:(struct CGSize)arg2;
- (id)theAttribute:(int)arg1 ofView:(id)arg2 shouldHaveTheRelation:(int)arg3 toTheConstant:(float)arg4;
- (id)theAttribute:(int)arg1 ofView:(id)arg2 shouldHaveTheRelation:(int)arg3 toTheAttribute:(int)arg4 ofView:(id)arg5;
- (id)theAttribute:(int)arg1 ofView:(id)arg2 shouldHaveTheRelation:(int)arg3 toTheAttribute:(int)arg4 ofView:(id)arg5 times:(float)arg6 plus:(float)arg7;
- (id)view:(id)arg1 inside:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3 relation:(int)arg4;
- (id)view:(id)arg1 inside:(id)arg2 inset:(float)arg3 relation:(int)arg4;

@end
