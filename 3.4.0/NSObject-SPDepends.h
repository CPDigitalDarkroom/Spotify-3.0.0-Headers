//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (SPDepends)
- (void)sp_removeDependencies;
- (void)sp_removeDependency:(id)arg1;
- (id)sp_addDependencyOn:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)sp_addDependencyOn:(id)arg1 changed:(CDUnknownBlockType)arg2;
- (id)sp_addDependency:(id)arg1 on:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)sp_addDependency:(id)arg1 on:(id)arg2 changed:(CDUnknownBlockType)arg3;
@end

