//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBHardwareButtonActionList, SBHardwareButtonService;
@protocol SBNotificationDestinationHomeButtonPressHandler;

@interface SBHomeHardwareButtonActions : NSObject
{
    _Bool _screenWasDimOnMenuDown;
    _Bool _dontUnlockOnButtonUp;
    _Bool _isGuidedAccessActive;
    SBHardwareButtonActionList *_buttonUpActions;
    SBHardwareButtonActionList *_buttonUpPostActions;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldStartAbsoluteTime;
    SBHardwareButtonService *_hardwareButtonService;
    _Bool _buttonDown;
    double _currentLongPressDuration;
    id <SBNotificationDestinationHomeButtonPressHandler> _bannerDestination;
    id <SBNotificationDestinationHomeButtonPressHandler> _notificationCenterDestination;
}

@property(nonatomic) __weak id <SBNotificationDestinationHomeButtonPressHandler> notificationCenterDestination; // @synthesize notificationCenterDestination=_notificationCenterDestination;
@property(nonatomic) __weak id <SBNotificationDestinationHomeButtonPressHandler> bannerDestination; // @synthesize bannerDestination=_bannerDestination;
@property(nonatomic) double currentLongPressDuration; // @synthesize currentLongPressDuration=_currentLongPressDuration;
@property(nonatomic, getter=isButtonDown) _Bool buttonDown; // @synthesize buttonDown=_buttonDown;
- (void).cxx_destruct;
- (void)_logMenuButtonHoldTime;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(CDUnknownBlockType)arg1;
- (void)performWhenMenuButtonIsUpUsingBlock:(CDUnknownBlockType)arg1;
- (void)_cancelPreheatingOfPlugin;
- (void)_preheatPluginForPresentationAfterInterval:(double)arg1;
- (void)performDoubleTapUpActions;
- (void)performLongPressCancelledActions;
- (void)performFinalButtonUpActions;
- (void)performTriplePressUpActions;
- (void)performDoublePressDownActions;
- (void)performLongPressActions;
- (void)performSinglePressUpActions;
- (_Bool)_shouldIgnorePressesDueToProxOrIdle:(id *)arg1;
- (_Bool)_performButtonPreflightActions;
- (void)performInitialButtonUpActions;
- (void)performInitialButtonDownActions;
- (void)guidedAccessWasDeactivated;
- (void)guidedAccessWasActivated;
- (id)init;

@end

