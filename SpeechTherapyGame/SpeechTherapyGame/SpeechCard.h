//
//  SpeechCard.h
//  SpeechTherapyGame
//
//  Created by Hai Le on 1/27/16.
//  Copyright © 2016 SUTD. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SpeechCard : SKSpriteNode {
    BOOL _enlarged;
}

@property (nonatomic, assign) CGPoint startPosition;
@property (nonatomic, assign) CGPoint endPosition;

- (void)enlarge;

@end
