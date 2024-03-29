/*
 *
 *  ZDKCoreCreateRequestView.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 31/10/2014.  
 *
 *  Copyright (c) 2014 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <UIKit/UIKit.h>
#import "ZDKSpinnerDelegate.h"

@class ZDKUITextView;


/**
 * Request creation view.
 *
 *  @since 0.9.3.1
 */
@interface ZDKCreateRequestView : UIView <UIAppearanceContainer>

/**
 * Text view for request description.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) ZDKUITextView *textView;

/**
 * Text field for email input. Only shown if using anonymous and conversations disabled.
 *
 *  @since 1.4.0.1
 */
@property (nonatomic, strong) UITextField *emailField;

/**
 *  Button to allow user to attach images
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) UIButton *attachImageButton;

/**
 * Color for the text views placeholder text.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) UIColor *placeholderTextColor __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 * Color for the text entry text.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) UIColor *textEntryColor __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 * Color for the background color of the text view.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) UIColor *textEntryBackgroundColor __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 * Background color for the view.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) UIColor *viewBackgroundColor __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 * Font for the text entry view.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) UIFont *textEntryFont __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 *  For for the email filed
 *
 *  @since 1.4.0.1
 */
@property (nonatomic, strong) UIFont *emailFieldFont __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 *  Attachment button image.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) UIImage *attachmentButtonImage __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 *  Attachment button border color.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) UIColor *attachmentButtonBorderColor __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 *  Attachment button corner radius.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) NSNumber *attachmentButtonCornerRadius __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 *  Attachment button border width.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) NSNumber *attachmentButtonBorderWidth __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;

/**
 *  Attachment button background color.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) UIColor *attachmentButtonBackground __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;


/**
 *  Action sheet style.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, strong) NSNumber *attachmentActionSheetStyle __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;


/**
 * Loading spinner for the request creation view.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) id<ZDKSpinnerDelegate> spinner __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;


/**
 * Add @ annotation when setting, either @NO or @YES.
 *
 *  @since 0.9.3.1
 */
@property (nonatomic, strong) NSNumber *automaticallyHideNavBarOnLandscape  __deprecated_msg("As of version 1.6.0.1, please use ZDKTheme for UI customization") UI_APPEARANCE_SELECTOR;


/**
 *  Height of the textView frame
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, readonly, assign) NSInteger textViewHeight;


@end
