/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SKEDocument;

@interface SKEMediaHelper : NSObject
{
    SKEDocument *_document;
}

+ (void)unobserveContentsOfMaterialProperty:(id)arg1;
+ (void)observeContentsOfMaterialProperty:(id)arg1;
+ (id)contentsOfMaterialProperty:(id)arg1;
+ (void)setContents:(id)arg1 ofMaterialProperty:(id)arg2;
+ (id)missingMediaImage;
@property(readonly) SKEDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)sanitizeMaterials;
- (id)imageMediaResources;
- (id)init;
- (id)initWithDocument:(id)arg1;

@end

