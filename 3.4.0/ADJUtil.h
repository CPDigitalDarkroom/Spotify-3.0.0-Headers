//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADJUtil : NSObject
{
}

+ (id)queryString:(id)arg1;
+ (void)writeObject:(id)arg1 filename:(id)arg2 objectName:(id)arg3;
+ (id)readObject:(id)arg1 objectName:(id)arg2 class:(Class)arg3;
+ (id)getFullFilename:(id)arg1;
+ (id)buildJsonDict:(id)arg1;
+ (id)formatDate:(id)arg1;
+ (id)formatSeconds1970:(double)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (id)clientSdk;
+ (id)baseUrl;
+ (void)initialize;

@end

