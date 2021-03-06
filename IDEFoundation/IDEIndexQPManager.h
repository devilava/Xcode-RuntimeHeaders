/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEIndex, NSMutableArray, NSTimer;

@interface IDEIndexQPManager : NSObject
{
    IDEIndex *_index;
    struct dispatch_queue_s *_qp_queue;
    NSMutableArray *_masterBlocks;
    NSMutableArray *_recentQueryProviders;
    NSTimer *_purgeTimer;
}

+ (void)initialize;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)_logRecents;
- (void)_cancelPurgeTimer;
- (void)_purgeTimeout:(id)arg1;
- (void)_scheduleQPPurge;
- (void)_addQueryProviderToRecents:(id)arg1 highPriority:(BOOL)arg2;
- (void)purgeQPsUsingPCH:(id)arg1;
- (void)purgeAllQPs;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;
- (void)dealloc;
- (id)initWithIndex:(id)arg1;

@end

