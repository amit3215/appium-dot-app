//
//  AppiumGlobals.h
//  Appium
//
//  Created by Dan Cuellar on 4/5/13.
//  Copyright (c) 2013 Appium. All rights reserved.
//

#define APPIUM_DEBUG_LEVEL 0
#define APPIUM_ABSTRACT_CLASS_ERROR @throw [NSException exceptionWithName:NSInternalInconsistencyException reason:[NSString stringWithFormat:@"You must override %@ in a subclass", NSStringFromSelector(_cmd)] userInfo:nil];