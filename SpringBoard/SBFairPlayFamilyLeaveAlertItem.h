//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class FBApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem
{
    FBApplicationInfo *_appInfo;
}

@property(retain, nonatomic) FBApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)dismissOnLock;
- (id)initWithAppInfo:(id)arg1;

@end
