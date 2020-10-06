//
//  ZXGameWindowController.h
//  The Great Escape
//
//  Created by David Thomas on 03/08/2017.
//  Copyright © 2017-2018 David Thomas. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "ZXGameView.h"

@interface ZXGameWindowController : NSWindowController<ZXGameViewDelegate>
{
  IBOutlet ZXGameView *gameView;
}

- (void)setStartupGame:(NSURL *)saveGame;

@end

// vim: ts=8 sts=2 sw=2 et
