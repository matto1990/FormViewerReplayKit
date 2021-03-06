//
//  FMRImageNode.h
//  Former
//
//  Created by Chris Osborn on 6/27/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

@interface FMRImageNode : FMRNode

@property (nonatomic, readonly) FMRImageParameter *imageParameter;
@property (nonatomic, readonly) FMRNumberParameter *scaleParameter;

@end
