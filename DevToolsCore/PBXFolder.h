/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXContainer.h>

@class NSMutableArray;

@interface PBXFolder : PBXContainer
{
    NSMutableArray *_acceptedPathExtensionsCache;
    NSMutableArray *_childrenWithAcceptedPathExtensionsCache;
    BOOL _needsToValidateChildren;
}

+ (id)_invisibleChildrenFilterExpression;
+ (id)folderForFileReference:(id)arg1;
+ (id)folderForPath:(id)arg1;
+ (id)folderForPath:(id)arg1 withResolvedPath:(id)arg2;
- (void)invalidateAbsolutePathCache;
- (id)rootGroupChildrenWithPathExtensions:(id)arg1;
- (id)children;
- (void)validateChildren;
- (id)rootGroup;
- (void)dealloc;
- (id)init;

@end
