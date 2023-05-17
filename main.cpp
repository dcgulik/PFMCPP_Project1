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
    a) AVOID state-checking actions, like "car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
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
//  Noun: car
//  action 1: the car accelerates
car.accelerate();
//  action 2: the car turns on the check engine light
car.checkEngineLightOn();
//  action 3: the car detects low windshield wiper fluid
car.lowWindshieldWiperFluid();
//  2)
//  Noun: person
//  action 1: the person walks
person.walk();
//  action 2: the person jumps
person.jump();
//  action 3: the person speaks
person.speak();
//  3)
//  Noun: audio Interface
//  action 1: the audio interface connects to the computer
audioInterface.connectToComputer();
//  action 2: the audio interface converts the incoming signal
audioInterface.convertSignal();
//  action 3: the audio interface sends the digital signal to the DAW
audioInterface.sendToDAW();
//  4) 
//  Noun: oven
//  action 1: the oven preheats
oven.preheat();
//  action 2: the oven notifies when preheated
oven.preheatNotify();
//  action 3: the oven notifies when a timer ends
oven.timerNotify();
//  5)
//  Noun: n64
//  action 1: the n64 powers on
n64.powerOn();
//  action 2: the n64 loads cartridge data
n64.loadcartridge();
//  action 3: the n64 resets
n64.reset();
//  6)
//  Noun: drumpad
//  action 1: the drumpad triggers a sample
drumpad.triggerSample();
//  action 2: the drumpad sends MIDI data
drumpad.sendMIDI();
//  action 3: the drumpad applies effects to drum sounds
drumpad.applyFX();
//  7)
//  Noun: roomba
//  action 1: the roomba vacuums
roomba.vacuum();
//  action 2: the roomba returns home
roomba.returnHome();
//  action 3: the roomba sends a status report
roomba.sendStatusReport();
//  8)
//  Noun: baby
//  action 1: the baby poops
baby.poop();
//  action 2: the baby fusses
baby.fuss();
//  action 3: the baby does something cute
baby.doSomethingCute();
//  9)
//  Noun: phone
//  action 1: the phone rings
phone.ring();
//  action 2: the phone plays back a voice mail
phone.playVoicemail();
//  action 3: the phone sends a reminder
phone.sendReminder();
//  10)
//  Noun: computer Display
//  action 1: the computer Display auto-detecs an input
computerDisplay.autoDetectInput();
//  action 2: the computer Display changes resolution
computerDisplay.changeResolution();
//  action 3: the computer Display auto sleeps
computerDisplay.autoSleep();
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
