//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBBulletinListSubsection : NSObject
{
    _Bool _showsInLockScreen;
    _Bool _showsMessagePreview;
    NSString *_subsectionID;
}

@property(nonatomic) _Bool showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) _Bool showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(readonly, copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
- (void).cxx_destruct;
- (id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2;

@end

