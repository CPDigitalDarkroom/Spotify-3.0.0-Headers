//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MPObjectSelector, NSArray, NSHashTable, NSString;

@interface MPVariantAction : NSObject <NSCoding>
{
    _Bool _cacheOriginal;
    _Bool _swizzle;
    NSString *_name;
    MPObjectSelector *_path;
    SEL _selector;
    NSArray *_args;
    NSArray *_original;
    Class _swizzleClass;
    SEL _swizzleSelector;
    NSHashTable *_appliedTo;
}

+ (id)executeSelector:(SEL)arg1 withArgs:(id)arg2 onObjects:(id)arg3;
+ (id)executeSelector:(SEL)arg1 withArgs:(id)arg2 onPath:(id)arg3 fromRoot:(id)arg4 toLeaf:(id)arg5;
+ (id)actionWithJSONObject:(id)arg1;
+ (void)load;
@property(copy, nonatomic) NSHashTable *appliedTo; // @synthesize appliedTo=_appliedTo;
@property(nonatomic) SEL swizzleSelector; // @synthesize swizzleSelector=_swizzleSelector;
@property(nonatomic) Class swizzleClass; // @synthesize swizzleClass=_swizzleClass;
@property(nonatomic) _Bool swizzle; // @synthesize swizzle=_swizzle;
@property(nonatomic) _Bool cacheOriginal; // @synthesize cacheOriginal=_cacheOriginal;
@property(retain, nonatomic) NSArray *original; // @synthesize original=_original;
@property(retain, nonatomic) NSArray *args; // @synthesize args=_args;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) MPObjectSelector *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAction:(id)arg1;
- (id)description;
- (void)restoreCachedImage;
- (void)cacheOriginalImage:(id)arg1;
- (void)stop;
- (void)execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2 selector:(SEL)arg3 args:(id)arg4 cacheOriginal:(_Bool)arg5 original:(id)arg6 swizzle:(_Bool)arg7 swizzleClass:(Class)arg8 swizzleSelector:(SEL)arg9;
- (id)init;

@end

