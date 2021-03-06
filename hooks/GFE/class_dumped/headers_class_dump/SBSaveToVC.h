//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class GUBarButtonItem, NSDictionary, NSString, UITextField;

@interface SBSaveToVC : UIViewController <UITextFieldDelegate>
{
    NSString *_filePath;
    NSString *_extension;
    NSString *_originalName;
    int _openedFrom;
    NSDictionary *_params;
    UITextField *textFieldWithFileName;
    GUBarButtonItem *cancelButton;
    GUBarButtonItem *saveButton;
    id <SBSaveToVCDelegateProtocol> _delegate;
}

@property(nonatomic) id <SBSaveToVCDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GUBarButtonItem *saveButton; // @synthesize saveButton;
@property(retain, nonatomic) GUBarButtonItem *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) UITextField *textFieldWithFileName; // @synthesize textFieldWithFileName;
- (void)displayFileWriteErrMessage:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)reconfigureFilenameCell;
- (id)initWithParams:(id)arg1 openedFrom:(int)arg2;
- (void)dealloc;

@end

