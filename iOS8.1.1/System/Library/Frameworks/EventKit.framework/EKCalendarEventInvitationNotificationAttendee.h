/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKIdentityProtocol.h>

@class NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {

	BOOL _statusChanged;
	BOOL _commentChanged;
	int _participantStatus;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSURL* _url;
	NSString* _comment;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL statusChanged;                   //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,readonly) BOOL commentChanged;                  //@synthesize commentChanged=_commentChanged - In the implementation block
@property (nonatomic,readonly) int participantStatus;                //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) NSString * comment;                   //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)participantStatus;
-(BOOL)commentChanged;
-(BOOL)statusChanged;
-(id)initWithAttendee:(id)arg1 ;
-(void)dealloc;
-(NSURL *)url;
-(NSString *)name;
-(NSString *)emailAddress;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)comment;
@end

