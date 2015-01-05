//
//  CALayer+RUMask.h
//  Resplendent
//
//  Created by Benjamin Maer on 10/14/12.
//  Copyright (c) 2012 Resplendent G.P.. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <CoreGraphics/CoreGraphics.h>





@interface CALayer (RUMask)

- (UIBezierPath*)applyMaskWithRoundedCorners:(UIRectCorner)corners radius:(CGFloat)radius;

@end
