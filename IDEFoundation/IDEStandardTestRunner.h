/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDETestRunner.h>

@interface IDEStandardTestRunner : IDETestRunner
{
    id <IDEBuildableProduct> _buildableProduct;
}

@property(retain) id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
- (void).cxx_destruct;
- (id)testBundlePathForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)testRunIdentifiersForBuildParameters:(id)arg1 runDestination:(id)arg2;
- (id)architectureForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)launchNameForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)workingDirectoryForWorkspace:(id)arg1;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4 error:(id *)arg5;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)defaultTestEnvironmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (id)initWithBuildableProduct:(id)arg1;
- (id)init;

@end
