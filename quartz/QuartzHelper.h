/*
 Copyright (c) 2010, Sungjin Han <meinside@gmail.com>
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
  * Neither the name of meinside nor the names of its contributors may be
    used to endorse or promote products derived from this software without
    specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
 */
//
//  QuartzHelper.h
//  iPhoneLib,
//  Helper Functions and Classes for Ordinary Application Development on iPhone
//
//  Created by meinside on 09. 07. 12.
//
//  last update: 10.02.06.
//

#pragma once
#import <Foundation/Foundation.h>

//needs: CoreGraphics.framework

#import "Logging.h"

@interface QuartzHelper : NSObject {

}

+ (CGContextRef)currentContext;
+ (CGColorRef)createColorRefWithR:(CGFloat)r G:(CGFloat)g B:(CGFloat)b A:(CGFloat)a;
+ (void)setFontOfContext:(CGContextRef)context withFontName:(NSString*)fontName fontSize:(CGFloat)fontSize textEncoding:(CGTextEncoding)textEncoding;
+ (void)setFillColorOfContext:(CGContextRef)context withColor:(CGColorRef)color;
+ (void)setFillColorOfContext:(CGContextRef)context withR:(CGFloat)r G:(CGFloat)g B:(CGFloat)b A:(CGFloat)a;
+ (void)setStrokeColorOfContext:(CGContextRef)context withColor:(CGColorRef)color;
+ (void)setStrokeColorOfContext:(CGContextRef)context withR:(CGFloat)r G:(CGFloat)g B:(CGFloat)b A:(CGFloat)a;
+ (void)setCharacterSpacingOfContext:(CGContextRef)context withSpacing:(CGFloat)spacing;
+ (void)setTextDrawingModeOfContext:(CGContextRef)context withMode:(CGTextDrawingMode)mode;
+ (CGMutablePathRef)createLinePathWithPoints:(CGPoint*)points numberOfPoints:(NSInteger)count closePath:(BOOL)close;

+ (NSArray*)allFontNames;

@end
