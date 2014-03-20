//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRulerMarker.h"

@interface PBXRulerMarker : NSRulerMarker
{
    double _imageOffset;
    BOOL _isValid;
}

- (long long)supportedTypes;
- (unsigned long long)supportedModifiers;
- (BOOL)trackMouse:(id)arg1 adding:(BOOL)arg2;
- (id)delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)didDoubleClickWithModifierFlags:(unsigned long long)arg1;
- (void)didSingleClickWithModifierFlags:(unsigned long long)arg1;
- (void)didMove;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)initWithRulerView:(id)arg1 markerLocation:(double)arg2 image:(id)arg3 imageOrigin:(struct CGPoint)arg4;
- (id)initWithRulerView:(id)arg1 location:(double)arg2 representedObject:(id)arg3;

@end
