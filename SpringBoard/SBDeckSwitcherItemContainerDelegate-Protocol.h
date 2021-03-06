//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDeckSwitcherItemContainer;

@protocol SBDeckSwitcherItemContainerDelegate <NSObject>
- (double)minimumVerticalTranslationForKillingOfContainer:(SBDeckSwitcherItemContainer *)arg1;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(SBDeckSwitcherItemContainer *)arg2;
- (struct CGRect)frameForPageViewOfContainer:(SBDeckSwitcherItemContainer *)arg1 fullyPresented:(_Bool)arg2;
- (void)selectedDisplayItemOfContainer:(SBDeckSwitcherItemContainer *)arg1;
- (_Bool)canSelectDisplayItemOfContainer:(SBDeckSwitcherItemContainer *)arg1 numberOfTaps:(long long)arg2;
- (void)killDisplayItemOfContainer:(SBDeckSwitcherItemContainer *)arg1 withVelocity:(double)arg2;
- (_Bool)shouldShowIconAndLabelOfContainer:(SBDeckSwitcherItemContainer *)arg1;
- (_Bool)isDisplayItemOfContainerRemovable:(SBDeckSwitcherItemContainer *)arg1;
@end

