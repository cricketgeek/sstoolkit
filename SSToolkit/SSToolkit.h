//
//  SSToolkit.h
//  SSToolkit
//
//  Created by Sam Soffes on 3/19/09.
//  Copyright 2009-2010 Sam Soffes. All rights reserved.
//

// This setting of 1 is best if you copy the source into your project. 
// The build transforms the 1 to a 0 when building the framework and static lib.

#if 1

// Views
#import <SSToolkit/SSCollectionView.h>
#import <SSToolkit/SSCollectionViewItem.h>
#import <SSToolkit/SSGradientView.h>
#import <SSToolkit/SSHUDView.h>
#import <SSToolkit/SSIndicatorLabel.h>
#import <SSToolkit/SSLabel.h>
#import <SSToolkit/SSLineView.h>
#import <SSToolkit/SSLoadingView.h>
#import <SSToolkit/SSPieProgressView.h>
#import <SSToolkit/SSWebView.h>

// Controls
#import <SSToolkit/SSTextField.h>
#import <SSToolkit/SSTextView.h>
#import <SSToolkit/SSSwitch.h>

// View Controllers
#import <SSToolkit/SSCollectionViewController.h>
#import <SSToolkit/SSModalViewController.h>
#import <SSToolkit/SSNavigationController.h>
#import <SSToolkit/SSPickerViewController.h>
#import <SSToolkit/SSTableViewController.h>
#import <SSToolkit/SSViewController.h>

// Misc
#import <SSToolkit/SSDrawingMacros.h>
#import <SSToolkit/SSConcurrentOperation.h>

#else

// Views
#import "SSCollectionView.h"
#import "SSCollectionViewItem.h"
#import "SSGradientView.h"
#import "SSHUDView.h"
#import "SSIndicatorLabel.h"
#import "SSLabel.h"
#import "SSLineView.h"
#import "SSLoadingView.h"
#import "SSPieProgressView.h"
#import "SSWebView.h"

// Controls
#import "SSTextField.h"
#import "SSTextView.h"
#import "SSSwitch.h"

// View Controllers
#import "SSCollectionViewController.h"
#import "SSModalViewController.h"
#import "SSNavigationController.h"
#import "SSPickerViewController.h"
#import "SSTableViewController.h"
#import "SSViewController.h"

// Misc
#import "SSDrawingMacros.h"
#import "SSConcurrentOperation.h"

#endif
