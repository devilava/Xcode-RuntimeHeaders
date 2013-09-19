/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBXObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSImage, NSIndexPath, NSMenuItem, NSString, PBXKeyEquivalent, XCUserScriptGroup;

@interface XCUserScriptNode : PBXObject <NSCoding, NSCopying>
{
    XCUserScriptGroup *_parentNode;
    NSString *_name;
    NSString *_uuid;
    NSImage *_icon;
}

+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)scriptErrorValues;
+ (id)scriptInputValues;
+ (id)scriptWorkingDirectoryValues;
+ (id)scriptOutputValues;
+ (BOOL)isScriptRunningWithContext:(id)arg1;
+ (id)userScriptsFromArray:(id)arg1;
+ (id)userScriptNodeFromPropertyListRepresentation:(id)arg1;
+ (void)initialize;
+ (Class)userScriptClassWithName:(id)arg1;
+ (void)registerUserScriptClass:(Class)arg1 withName:(id)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
@property(copy) NSImage *icon; // @synthesize icon=_icon;
@property(copy) NSString *name; // @synthesize name=_name;
@property XCUserScriptGroup *parentNode; // @synthesize parentNode=_parentNode;
- (id)gidCommentForArchive;
- (id)fallbackClassNameForPListArchive;
- (id)debuggerChoices;
- (id)commandLine;
@property(readonly) SEL selector;
@property(readonly) NSMenuItem *menuItem;
- (int)debugger;
- (id)arguments;
- (id)command;
@property(copy) NSString *language;
@property(readonly) BOOL isSeparator;
@property(readonly) BOOL isLeaf;
- (id)editorTabIdentifier;
@property(copy) PBXKeyEquivalent *keyEquivalent;
- (BOOL)isNameEditable;
- (id)scriptURL;
- (id)scriptUTI;
- (BOOL)isFileScript;
- (id)scriptError;
- (id)scriptErrorAsString;
- (id)scriptInput;
- (id)scriptInputAsString;
- (id)scriptWorkingDirectory;
- (id)scriptWorkingDirectoryAsString;
- (id)scriptOutput;
- (id)scriptOutputAsString;
- (id)script;
@property(copy) NSString *uuid;
@property(readonly) NSIndexPath *indexPath;
@property(readonly) unsigned long long index;
@property(readonly) XCUserScriptNode *rootNode;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)propertyListRepresentationWithUUIDs:(BOOL)arg1;
@property(readonly) id propertyListRepresentationWithoutUUIDs;
@property(readonly) id propertyListRepresentation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)init;

@end
