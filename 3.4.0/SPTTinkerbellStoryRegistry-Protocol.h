//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTTinkerbellStory;

@protocol SPTTinkerbellStoryRegistry <NSObject>
- (SPTTinkerbellStory *)objectForKeyedSubscript:(NSString *)arg1;
- (SPTTinkerbellStory *)storyWithIdentifier:(NSString *)arg1;
- (void)unregisterStoryWithIdentifier:(NSString *)arg1;
- (void)unregisterStory:(SPTTinkerbellStory *)arg1;
- (_Bool)registerStory:(SPTTinkerbellStory *)arg1;
@end

