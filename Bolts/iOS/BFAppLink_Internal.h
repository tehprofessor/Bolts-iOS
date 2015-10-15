/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import <Bolts/BFAppLink.h>

extern NSString *const BFAppLinkDataParameterName;
extern NSString *const BFAppLinkTargetKeyName;
extern NSString *const BFAppLinkUserAgentKeyName;
extern NSString *const BFAppLinkExtrasKeyName;
extern NSString *const BFAppLinkRefererAppLink;
extern NSString *const BFAppLinkRefererAppName;
extern NSString *const BFAppLinkRefererUrl;
extern NSString *const BFAppLinkVersionKeyName;
extern NSString *const BFAppLinkVersion;

@interface BFAppLink (Internal)

+ (instancetype)appLinkWithSourceURL:(NSURL *)sourceURL
                             targets:(NSArray *)targets
                              webURL:(NSURL *)webURL
                    isBackToReferrer:(BOOL)isBackToReferrer;

/*! return if this AppLink is to go back to referrer. */
@property (nonatomic, assign, readonly, getter=isBackToReferrer) BOOL backToReferrer;

@end
