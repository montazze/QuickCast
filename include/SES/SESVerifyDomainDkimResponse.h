/*
 * Copyright 2010-2013 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "SESResponse.h"



/**
 * Verify Domain Dkim Result
 */

@interface SESVerifyDomainDkimResponse:SESResponse

{
    NSMutableArray *dkimTokens;
}



-(void)setException:(AmazonServiceException *)theException;


/**
 * Default constructor for a new  object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * A set of DNS records (tokens) that must be published in the domain
 * name's DNS for DKIM verification to complete, and which must remain
 * published in order for DKIM signing to succeed. The tokens are CNAME
 * DNS records pointing to DKIM public keys hosted by Amazon SES.
 */
@property (nonatomic, retain) NSMutableArray *dkimTokens;



/**
 * Returns a value from the dkimTokens array for the specified index
 */
-(NSString *)dkimTokensObjectAtIndex:(int)index;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
