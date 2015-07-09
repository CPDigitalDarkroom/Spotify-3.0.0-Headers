//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDBasicButton.h"

@class IDModel, NSString;

@interface IDButton : IDBasicButton
{
    _Bool _textDirty;
    _Bool _textIdDirty;
    NSString *_text;
    long long _textId;
    IDModel *_textModel;
}

@property(nonatomic) _Bool textIdDirty; // @synthesize textIdDirty=_textIdDirty;
@property(nonatomic) _Bool textDirty; // @synthesize textDirty=_textDirty;
@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) long long textId; // @synthesize textId=_textId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 imageModel:(id)arg3 targetModel:(id)arg4 actionId:(long long)arg5 focusId:(long long)arg6;
- (id)initWithWidgetId:(long long)arg1 imageModel:(id)arg2 targetModel:(id)arg3 actionId:(long long)arg4 focusId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2 imageModel:(id)arg3 targetModel:(id)arg4 actionId:(long long)arg5 focusId:(long long)arg6;

@end

