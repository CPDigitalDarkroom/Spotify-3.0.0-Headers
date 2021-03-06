//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (HTTPImages)
+ (id)spt_URL:(id)arg1 componentsFromBase:(id)arg2;
+ (id)spt_CDNURLForImageIDs:(id)arg1 size:(unsigned int)arg2 baseCDNURL:(id)arg3;
+ (id)spt_CDNURLForImageIDs:(id)arg1 size:(unsigned int)arg2;
+ (id)spt_imageIDsFromImageLink:(id)arg1;
+ (id)spt_HTTPURLForMosaicImageWithSpotifyLinks:(id)arg1 size:(unsigned int)arg2 baseCDNURL:(id)arg3;
+ (id)spt_HTTPURLForMosaicImageWithSpotifyLinks:(id)arg1 size:(unsigned int)arg2;
+ (id)spt_HTTPURLForImageWithSpotifyLink:(id)arg1 size:(unsigned int)arg2 baseCDNURL:(id)arg3;
+ (id)spt_HTTPURLForImageWithSpotifyLink:(id)arg1 size:(unsigned int)arg2;
+ (unsigned int)spt_optimalCDNImageSizeForSideInPoints:(float)arg1;
+ (unsigned int)spt_optimalCDNImageSizeForSideInPixels:(float)arg1;
+ (id)spt_availableSPTCDNImageSizes;
@end

