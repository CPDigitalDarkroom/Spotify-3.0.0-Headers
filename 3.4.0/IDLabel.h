//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDWidget.h"

@class IDModel, NSString;

@interface IDLabel : IDWidget
{
    _Bool _waitingAnimation;
    _Bool _positionDirty;
    _Bool _textDirty;
    _Bool _textIdDirty;
    _Bool _clearWhileSending;
    _Bool _waitingAnimationDirty;
    NSString *_text;
    long long _textId;
    IDModel *_textModel;
    struct CGPoint _position;
}

@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) _Bool waitingAnimationDirty; // @synthesize waitingAnimationDirty=_waitingAnimationDirty;
@property(nonatomic) _Bool clearWhileSending; // @synthesize clearWhileSending=_clearWhileSending;
@property(nonatomic) _Bool textIdDirty; // @synthesize textIdDirty=_textIdDirty;
@property(nonatomic) _Bool textDirty; // @synthesize textDirty=_textDirty;
@property(nonatomic) _Bool positionDirty; // @synthesize positionDirty=_positionDirty;
@property(nonatomic) _Bool waitingAnimation; // @synthesize waitingAnimation=_waitingAnimation;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) long long textId; // @synthesize textId=_textId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)setText:(id)arg1 clearWhileSending:(_Bool)arg2;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(long long)arg1;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2;

@end
