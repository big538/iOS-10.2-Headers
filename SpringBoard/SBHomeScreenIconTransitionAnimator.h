//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIconAnimatorDelegate-Protocol.h"
#import "SBViewControllerInteractiveAnimatedTransitioning-Protocol.h"

@class NSString, SBFolderController, SBIconAnimationSettings, SBIconAnimator, SBTreeNodeViewController;
@protocol SBHomeScreenIconTransitionAnimatorDelegate, SBViewControllerContextTransitioning;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    unsigned long long _transitionToken;
    SBIconAnimationSettings *_currentSettings;
    unsigned long long _currentOperation;
    _Bool _receivedFirstInteractiveUpdate;
    _Bool _needsTransitionTokenIncrementOnNextUpdate;
    SBIconAnimator *_iconAnimator;
    SBFolderController *_folderController;
    SBTreeNodeViewController *_childViewController;
    unsigned long long _operation;
    double _initialDelay;
    id <SBHomeScreenIconTransitionAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SBHomeScreenIconTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(readonly, nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) SBTreeNodeViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(readonly, nonatomic) SBIconAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBIconAnimationSettings *currentSettings;
- (void)iconAnimatorWasInvalidated:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (_Bool)supportsRestarting;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)animateTransition:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)reverse;
- (void)restart;
- (void)cancel;
@property(readonly, nonatomic) unsigned long long currentOperation;
@property(readonly, nonatomic, getter=wasRestarted) _Bool restarted;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)initWithIconAnimator:(id)arg1 folderController:(id)arg2 childViewController:(id)arg3 operation:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

