//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTTouchTutorialStateManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)dismissTutorial;
- (void)completeTutorial;
- (_Bool)shouldShowTutorial;
- (void)setState:(unsigned long long)arg1;
- (id)initWithLocalSettings:(id)arg1;

@end
