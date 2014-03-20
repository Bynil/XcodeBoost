//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTOperation.h"

@class DVTDispatchLock, IDESchemeActionRecord;

@interface IDESchemeActionResultOperation : DVTOperation
{
    BOOL _isObservingIsExecuting;
    BOOL _didCalculateResult;
    DVTOperation *_trackingOperation;
    IDESchemeActionRecord *_schemeActionRecord;
    CDUnknownBlockType _actionCallbackBlock;
    CDUnknownBlockType _schemeActionResultComputationBlock;
    DVTDispatchLock *_lock;
}

+ (id)schemeActionResultOperationWithSchemeActionRecord:(id)arg1 trackingExecutionOfOperation:(id)arg2 actionCallbackBlock:(CDUnknownBlockType)arg3 schemeActionResultComputationBlock:(CDUnknownBlockType)arg4;
@property BOOL didCalculateResult; // @synthesize didCalculateResult=_didCalculateResult;
@property(retain) DVTDispatchLock *lock; // @synthesize lock=_lock;
@property BOOL isObservingIsExecuting; // @synthesize isObservingIsExecuting=_isObservingIsExecuting;
@property(copy) CDUnknownBlockType schemeActionResultComputationBlock; // @synthesize schemeActionResultComputationBlock=_schemeActionResultComputationBlock;
@property(copy) CDUnknownBlockType actionCallbackBlock; // @synthesize actionCallbackBlock=_actionCallbackBlock;
@property(retain) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
@property(retain) DVTOperation *trackingOperation; // @synthesize trackingOperation=_trackingOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end
