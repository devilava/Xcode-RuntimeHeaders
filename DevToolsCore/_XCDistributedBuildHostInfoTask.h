/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCPosixTask.h>

@class NSMutableData, NSTimer;

@interface _XCDistributedBuildHostInfoTask : XCPosixTask
{
    NSMutableData *_accumulatedData;
    NSTimer *_timeout;
}

- (void)outputComplete;
- (void)receivedStdoutObjectInBackground:(id)arg1;
- (void)timedOut:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchInfo:(id)arg1;

@end

