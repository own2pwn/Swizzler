//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUFontSizeAwareViewController.h"

#import "UIPopoverControllerDelegate.h"

@class AppointmentWrapper, FileAttachmentView, GUAttachmentButton, UIPopoverController;

@interface KLEventViewController : GUFontSizeAwareViewController <UIPopoverControllerDelegate>
{
    AppointmentWrapper *appWrapper;
    GUAttachmentButton *_attachmentButton;
    UIPopoverController *currentPopover;
    FileAttachmentView *_fileAttachmentView;
    id <CalendarEventViewControllerDelegate> _delegate;
    int _currentOrientation;
    BOOL showAttachmentsFromPopover;
}

@property(nonatomic) BOOL showAttachmentsFromPopover; // @synthesize showAttachmentsFromPopover;
@property(nonatomic) id <CalendarEventViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FileAttachmentView *fileAttachmentView; // @synthesize fileAttachmentView=_fileAttachmentView;
@property(retain, nonatomic) UIPopoverController *currentPopover; // @synthesize currentPopover;
@property(retain, nonatomic) GUAttachmentButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) AppointmentWrapper *appWrapper; // @synthesize appWrapper;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)closePopover;
- (void)dealloc;
- (void)showPopover;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didRotate;
- (void)updateRotation:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)addAttachmentButton:(id)arg1;
- (void)actionShowAttachments:(id)arg1;
- (id)init;

@end

