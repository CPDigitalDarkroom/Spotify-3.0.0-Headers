//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarItem.h"

@class NSString;

@interface SPTabBarItem : UITabBarItem
{
    NSString *_imageName;
    unsigned int _icon;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 tag:(int)arg3 icon:(unsigned int)arg4 identifier:(id)arg5;

@end

