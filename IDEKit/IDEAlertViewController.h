/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class IDEAlert;

@interface IDEAlertViewController : IDEViewController
{
    IDEAlert *_alert;
}

+ (void)uninstallViewControllers;
+ (id)alertViewControllerForAlertIdentifier:(id)arg1;
+ (id)alertViewControllerForAlert:(id)arg1;
+ (void)initialize;
@property(retain) IDEAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;

@end

