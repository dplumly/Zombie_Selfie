# Zombie_Selfie

To spice up the office around Halloween I decided to make a molded zombie arm that takes pictures of zombie lunch and posted them to the Twitter account @ZombieSelfie.  

The build used a molded silicone arm (happens to be mine and my hair is still growing back), a custom steel mount to clip to an office partition, and a vibration sensor hooked up to an Arduino. Once the arm is slapped a photo will be taken using an IR Led and passed to the Eye-Fi card in the camera. The photo is then put into a Dropbox folder and If This Then That (IFTTT) posts the photo to Twitter.

----------

![Schematic](https://github.com/dplumly/Zombie_Selfie/blob/master/img/zombie1_sm.jpg)
![Schematic](https://github.com/dplumly/Zombie_Selfie/blob/master/img/zombie3_sm.jpg)
----------

----------
<strong> Resources:</strong> 

Tested Mold Making: https://www.youtube.com/watch?v=bPS-W6YZFb4

Reading an IR remote with an Arduino: http://www.instructables.com/id/The-Easiest-Way-to-Use-Any-IR-Remote-with-Ardiuno/

IR Library: http://sebastian.setz.name/arduino/my-libraries/multi-camera-ir-control/

----------
<strong> Mold Supplies:</strong> 

Mold Star 20T Silicone:
http://www.reynoldsam.com/product/mold-star-20t/

Alja-Safe Lifecasting Starter Kit:
http://www.reynoldsam.com/product/lifecasting-starter-kit/


Silicone Pigments:
http://www.reynoldsam.com/product/silc-pig/


Silicone Caulking:
Find at Home Depot or a local store. Make sure it is type 1 silicone.
http://www.homedepot.com/p/GE-All-Purpose-Silicone-I-10-1-oz-Clear-Window-and-Door-Caulk-GE012A-24C/100091111

----------
<strong> Mounting Hardware:</strong>

20 Gauge Cold Rolled Steel Sheet

Pencil Rod

----------
<strong> Electronics:</strong> 

IR Led
http://www.amazon.com/pairs-Infrared-Diode-Emission-Receiver/dp/B00EFOQEUM/ref=sr_1_1?ie=UTF8&qid=1445882814&sr=8-1&keywords=ir+led

Arduino

Wires

1k Ohm Resistor

Led

Vibration Sensor
http://www.amazon.com/gp/product/B0087ZFMOY?psc=1&redirect=true&ref_=oh_aui_detailpage_o04_s00

<strong> Random:</strong> 

Foam Padding
http://www.amazon.com/gp/product/B004LOHW6G?psc=1&redirect=true&ref_=oh_aui_detailpage_o00_s00


Shirt from Goodwill

IFTTT Account

Canon 60D

Eye-fi SD Card

----------

<strong> The Mold:</strong> 
The first thing I did was mold the hand. This part took the most time. I made a custom box out of Foam Core so I could get more of my arm in the mold and not just the hand. You can just use the bucket provided with the Alja-Safe, but it’s just big enough for your hand.
After making the box and hot gluing it up I followed the directions of Alja-Safe and the pinkish goop to make the mold of my arm. After sticking my arm in the mold for about 12 minutes I removed my hand and there is a empty cavity where my hand was. Now it’s time to mix up the pigment and silicone. I put a little green and red in, but I wish I had added a little more of both, especially red. Only put a little of the pigment in. Don’t go crazy cause you can’t remove it. Mix part A with part B and pour into mold.


<strong> Buildup:</strong> 
After that sets remove the hand from the mold. Just break it all away as it is a throw away mold. You can do different buildup techniques like shown here. Just start cutting gashes into the arm mixing the silicone caulking with pigment and layer it on. 


<strong> Painting:</strong> 
Once that has dried overnight I made a silicone mixture of 10 parts Naptha or a substitute to one part silicone. Measure this by weight! I mixed pigment into the paint and shook it up well. With a brush I applied the first skin tone pigment layer onto the mold. Then I did a green tone and airbrushed on a dark green for veins. You can make it look any way you want.


<strong> Electronics:</strong> 
Now that we have the arm taken care of we can move on the the electronics. I used a vibration sensor and drilled a hole out into the arm to fit inside. The orientation of this sensor matters so play with it. You'll see by the LED when you turn it which way is high and low. You will want the LED to be low which means not lit.

The camera I have is a Canon 60D and the code posted works with this specific camera. In the IR Library you can find the code for your camera or decode it yourself. Here is the library I used for the IR control. (http://sebastian.setz.name/arduino/my-libraries/multi-camera-ir-control/) If your camera code isn’t in here you can use the IR decoders and emitters to get the IR code and plug it into the code as a digitalWrite that pin high.

For people to be able to review their images I hooked up a HDMI from the HDMI out of the camera to a monitor. I turned the sleep functions off on the camera and the monitor so the last image taken would always be displayed.


<strong> The Mount:</strong> 
I welded some steel sheeting to some pencil rod for my stand since it is designed to be mounted on a cubical wall. Your mount will depend on where you decide to put the setup. You could 3D print one, make one out of wood...


Final Build
![Schematic](https://github.com/dplumly/Zombie_Selfie/blob/master/img/use1.JPG)

----------
![Schematic](https://github.com/dplumly/Zombie_Selfie/blob/master/img/use2.JPG)

----------
![Schematic](https://github.com/dplumly/Zombie_Selfie/blob/master/img/use3.JPG)

----------

![Schematic](https://github.com/dplumly/Zombie_Selfie/blob/master/img/Zombie_Arm_bb.jpg)


