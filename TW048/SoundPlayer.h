//
//  Sounds.h
//  TW048
//
//  Created by Georg Zänker on 22.03.14.
//  Copyright (c) 2014 Niklas Riekenbrauck & Georg Zänker. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum Soundtype:NSInteger {
    kFailure,
    kSuccess,
    kSwipe,
    kPop
} Soundtype;

@interface SoundPlayer: NSObject

- (void)playSoundOfType:(Soundtype)soundtype;

- (void)playBackgroundSound;
- (void)stopBackgroundSound;
- (BOOL)backgroundSoundOn;

+(NSString*)soundNameOfType:(Soundtype)type;

@end
