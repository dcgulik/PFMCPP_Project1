#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        Car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the Car is doing something.  its state is not being checked.  i.e.
            Car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Car
//  action 1: the Car accelerates
Car.accelerate();
//  action 2: the Car turns on the check engine light
Car.checkEngineLightOn();
//  action 3: the Car detects low windshield wiper fluid
Car.lowWindshieldWiperFluid();
//  2)
//  Noun: Person
//  action 1: the Person walks
Person.walk();
//  action 2: the Person jumps
Person.jump();
//  action 3: the Person speaks
Person.speak();
//  3)
//  Noun: Stereo
//  action 1: the Stereo selects an input
Stereo.selectInput();
//  action 2: the Stereo changes the output volume
Stereo.changeOutputVolume();
//  action 3: the Stereo engages the subwoofer
Stereo.engageSubwoofer();
//  4) 
//  Noun: Oven
//  action 1: the Oven preheats
Oven.preheat();
//  action 2: the Oven notifies when preheated
Oven.preheatNotify();
//  action 3: the Oven notifies when a timer ends
Oven.timerNotify();
//  5)
//  Noun: N64
//  action 1: the N64 powers on
N64.powerOn();
//  action 2: the N64 loads Cartridge data
N64.loadCartridge();
//  action 3: the N64 resets
N64.reset();
//  6)
//  Noun: Drumpad
//  action 1: the Drumpad triggers a sample
Drumpad.triggerSample();
//  action 2: the Drumpad sends MIDI data
Drumpad.sendMIDI();
//  action 3: the Drumpad applies effects to drum sounds
Drumpad.applyFX();
//  7)
//  Noun: Roomba
//  action 1: the Roomba vacuums
Roomba.vacuum();
//  action 2: the Roomba returns home
Roomba.returnHome();
//  action 3: the Roomba sends a status report
Roomba.sendStatusReport();
//  8)
//  Noun: Baby
//  action 1: the Baby poops
Baby.poop();
//  action 2: the Baby fusses
Baby.fuss();
//  action 3: the Baby does something cute
Baby.doSomethingCute();
//  9)
//  Noun: Phone
//  action 1: the Phone rings
Phone.ring();
//  action 2: the Phone plays back a voice mail
Phone.playVoicemail();
//  action 3: the phone sends a reminder
Phone.sendReminder();
//  10)
//  Noun: Computer Display
//  action 1: the Computer Display auto-detecs an input
ComputerDisplay.autoDetectInput();
//  action 2: the Computer Display changes resolution
ComputerDisplay.changeResolution();
//  action 3: the Computer Display auto sleeps
ComputerDisplay.autoSleep();
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
