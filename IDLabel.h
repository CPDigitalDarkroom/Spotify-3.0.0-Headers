//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDWidget.h"

@class IDModel, NSString;

@interface IDLabel : IDWidget
{
    BOOL _waitingAnimation;
    BOOL _positionDirty;
    BOOL _textDirty;
    BOOL _textIdDirty;
    BOOL _clearWhileSending;
    BOOL _waitingAnimationDirty;
    NSString *_text;
    int _textId;
    IDModel *_textModel;
    struct CGPoint _position;
}

@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) BOOL waitingAnimationDirty; // @synthesize waitingAnimationDirty=_waitingAnimationDirty;
@property(nonatomic) BOOL clearWhileSending; // @synthesize clearWhileSending=_clearWhileSending;
@property(nonatomic) BOOL textIdDirty; // @synthesize textIdDirty=_textIdDirty;
@property(nonatomic) BOOL textDirty; // @synthesize textDirty=_textDirty;
@property(nonatomic) BOOL positionDirty; // @synthesize positionDirty=_positionDirty;
@property(nonatomic) BOOL waitingAnimation; // @synthesize waitingAnimation=_waitingAnimation;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) int textId; // @synthesize textId=_textId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)setText:(id)arg1 clearWhileSending:(BOOL)arg2;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(int)arg1;
- (id)initWithWidgetId:(int)arg1 model:(id)arg2;
- (id)initWithWidgetId:(int)arg1 textModel:(id)arg2;

@end

