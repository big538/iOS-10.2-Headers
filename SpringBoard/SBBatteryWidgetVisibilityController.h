//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBBatteryWidgetVisibilityController : NSObject
{
}

+ (id)sharedInstance;
- (void)_makeVisible;
- (_Bool)_isVisible;
- (_Bool)_isAlwaysVisible;
- (void)_setVisibleIfNecessary:(_Bool)arg1;
- (void)_setHasContent:(_Bool)arg1;
- (_Bool)_containsExternalBattery;
- (void)_connectedDevicesDidChange;
- (id)init;

@end

