# 7Segment-Interrupts

				  LAB 3
				Interrupts

Introduction

An interrupt is a function of an operating system that provides multi-process multi-tasking.
The interrupt is a signal that prompts the operating system to stop work on one process and start
other work(1).
An interrupt is a signal to the processor emitted by hardware or software indicating an event that
needs immediate attention.

Description

Like an alarm that uses in emergency action, normal state that happen (Seven segment count), counter
is count without any stopping when push button (emergency action) the interrupt activate and
hardware component send signal (IRQ request) to microprocessor to push all content on stack then
implement ISR code ISR code that make a buzzer on with led Blinking alarm. when finishing
implementation of ISR code pop all content form stack and continue main code.
