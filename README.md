# DriveModSwappingClass
Drive mod Swapping for arduino autonomus car project 

This is a basic configuration class which can be used to autonomus car projects. Reason for me to creating that class increase readability. I have witnessed that all parts of codes were put into one main class
and due to that problem they couldn't comprehend which codes do what. Instead of writing all controller codes in main arduino sketch, electrical engineers directly use that library to create controller profile. So those which do not want struggle to write code and want directly test their hardware, are able to easily check controller state or change these profiles in one line code. 

Instead of assaign number for two drive mods I preferred using an enum.

function decleared to swap controller mode has 3 overloaded version.
One does not take any parameter and it inverses current mod,
and others takes int value and enum value to directly update Kumandamod variable

There are two type of Constructor 
one is default,
other takes enum to initiates profile mod

this functions can be bind to arbitrary controller keys
according to events and "if" statements And electrical engineers can use their opencv code or listen controller key to steering/throttle
