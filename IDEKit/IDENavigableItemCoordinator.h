/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDelayedInvocation, DVTMapTable, DVTStackBacktrace, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface IDENavigableItemCoordinator : NSObject <DVTInvalidation>
{
    NSHashTable *_coordinatedItems;
    DVTMapTable *_documentsByNavItem;
    NSMapTable *_domainIdentifiersByNavItem;
    DVTMapTable *_rootItemsByRepresentedObject;
    DVTMapTable *_changeCountByNavItem;
    NSMutableDictionary *_filteringProxiesByKey;
    DVTDelayedInvocation *_delayedInvocation;
    NSMutableSet *_pendingGraphChangedItems;
    NSMutableSet *_pendingPropertyChangedItems;
    id <IDENavigableItemCoordinatorDelegate> _delegate;
    struct __navigableItemCoordinatorFlags {
        unsigned int _delegateRespondsToDocumentForNavigableItem:1;
        unsigned int _hasWarnedAboutRootItemsCount:1;
        unsigned int _reservedNavigableItemCoordinator:30;
    } _navigableItemCoordinatorFlags;
}

+ (void)initialize;
+ (id)navigableItemFilteringPerformanceMetric;
- (void).cxx_destruct;
- (void)unhibernate;
- (void)hibernate;
- (void)forgetEditorDocument:(id)arg1;
- (id)editorDocumentForNavigableItem:(id)arg1;
- (void)_editorDocumentWillClose:(id)arg1;
- (void)forgetNavigableItem:(id)arg1;
- (void)forgetNavigableItems:(id)arg1;
- (void)forgetItems:(id)arg1;
- (void)closeDocumentsForItems:(id)arg1;
- (void)_collectDescendants:(id)arg1 toForgetForItem:(id)arg2;
- (void)registerNavigableItem:(id)arg1;
- (id)filteredItemProxyForKey:(id)arg1;
- (void)setFilteredItemProxy:(id)arg1 forKey:(id)arg2;
- (id)_filteringProxiesByKey;
- (id)filteredItemProxyForItems:(id)arg1;
- (unsigned long long)changeCountForItem:(id)arg1;
- (void)_noteNavigableItemChangedChildItems:(id)arg1;
- (void)_incrementChangeCountForItem:(id)arg1;
- (void)_noteNavigableItem:(id)arg1 valueWillChangeForProperty:(id)arg2;
- (void)primitiveInvalidate;
- (void)delayedPostGraphAndPropertyChangeNotifications:(id)arg1;
- (void)processPendingChanges;
- (void)_postNotificationNamed:(id)arg1 forChangedItems:(id)arg2;
- (void)postDidForgetNotificationForItems:(id)arg1;
@property(retain, nonatomic) id <IDENavigableItemCoordinatorDelegate> delegate;
- (id)navigableItemFromArchivableRepresentation:(id)arg1 forWorkspace:(id)arg2 error:(id *)arg3;
- (id)_navigableItemFromArchivableRepresentation:(id)arg1 rootItem:(id)arg2 error:(id *)arg3;
- (id)_documentContentNavigableItemFromArchivableRepresentation:(id)arg1 documentItem:(id)arg2;
- (id)_childNavigableItemWithRepresentationIDs:(id)arg1 parentItem:(id)arg2 acceptPartialMatch:(BOOL)arg3;
- (id)rootNavigableItemInDomain:(id)arg1 forWorkspace:(id)arg2;
- (Class)domainProviderWithIdentifier:(id)arg1;
- (id)domainIdentifierForNavigableItem:(id)arg1;
- (id)_coordinatedItems;
- (id)_rootItemsByRepresentedObject;
- (id)_domainIdentifiersByNavItem;
- (id)_providersByDomain;
- (id)_navigableItemForFilePath:(id)arg1 inWorkspace:(id)arg2 withSeenFileReferences:(id)arg3 allowLeaf:(BOOL)arg4;
- (id)structureNavigableItemForDocumentURL:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
- (id)rootNavigableItemWithRepresentedObject:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

