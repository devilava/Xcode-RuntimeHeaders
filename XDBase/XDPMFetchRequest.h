/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString, XDPMEntity, XDPMFetchedProperty;

@interface XDPMFetchRequest : NSObject <NSCoding>
{
    NSString *_name;
    XDPMEntity *_entity;
    NSString *_predicateString;
    XDPMFetchedProperty *_fetchedProperty;
    NSMutableDictionary *_initializationPendingKeys;
}

- (id)undoManager;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (void)setFetchedProperty:(id)arg1;
- (id)fetchedProperty;
- (void)setPredicateString:(id)arg1;
- (id)predicateString;
- (void)setEntity:(id)arg1;
- (id)entity;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

