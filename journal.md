---
title: "Fume Extractor"
author: "Evan Brown"
description: "Apocalyptic rig with a two hand adjustable fume hood w/ hot-swappable gas active carbon filtering canisters"
created_at: "2024-03-20"
---

## July 1st

I plan on this being a decorative project with a high level of functionality, modularity, and somethign easily packable. While looking around on the market, I've found little to no high quality fume extractors at an affordable price.

The decorative plan is to buy acrylic paints and cut outlines into paper as a stencil.

**3 hours:** research & model layout

## July 2nd

I'm planning to embed the 5v fan controller inside of the active carbon filter granule container. It needs to be at the end of the stage 2 filter to avoid clogging. I had to research how to do screw-in containers in onshape, so that's a new thing I've learned! This model is split into two parts, and I'll need to research more on the fan mounts to properly embed holes.

**2 hours:** modeling

![Screenshot from 2025-07-02 23-29-49](https://github.com/user-attachments/assets/5c66fff9-cc4f-4fe5-990b-d01533955d49)

## July 3rd

I spent a lot of time making planes and certain hard to get points and pieces to create all of the geometry. One of the difficulties was merging together all of the screw holes, and I had to refactor it later when I had messed up and created multiple parts for something that should only be one.

The overall outline shape is complete now. My plan is to have the top three cylinders as the active carbon backup containers when the volatile element sensor indicates required replacement. I've been brainstorming a spring mechanism for securing the vacuum hose to the extractor, and that's where I'll be heading next.

**6 hours:** modeling

![Screenshot from 2025-07-03 19-24-34](https://github.com/user-attachments/assets/c610370c-f4d0-4f69-8689-8ebe9033f34e)

## July 4th


Today I finished the 3d model. I'll be focusing on electronics going forward. The best approach I theorized for securing the vacuum hose was using springs for a friction fit that can be push released. You can see it in the image below.

<img width="2091" height="1458" alt="Screenshot from 2025-07-18 00-03-56" src="https://github.com/user-attachments/assets/0379c86a-bfe1-488e-8948-1ac373d4189f" />

**3 hours** modeling

## July 17th

The fan has wires for PWM and power. I've created holes within the cylinders for the wires to go out of, as well as screw holes to secure the fans.

<img width="2091" height="1458" alt="Screenshot from 2025-07-18 00-00-55" src="https://github.com/user-attachments/assets/2558aacf-0dec-413e-9637-417b8d730581" />

**1 hour:** modeling

## July 18th

Mostly spent on further material sourcing, the perfect filter showed itself to me. Exactly 25mm in diameter, this HEPA particulate filter is machine washable and the exact size needed. I have also found SSD1306 compatible OLED displays on digikey using the I2C interface, allowing for me to easily monitor the volatile organic compounds exiting and entering using the VOC sensor -SGP40-.

<img width="2448" height="1304" alt="Screenshot from 2025-07-18 14-06-25" src="https://github.com/user-attachments/assets/2d845e48-22af-4f7b-9200-b71a754bca97" />

I've gone over the maximum budget given for a 6 point project, therefore I'm going to be shelling out my own money for anything over the budget. I really want to see this project succeed!

**3 hours** sourcing materials

## July 18th *Night

The HEPA filter needed a good spot to be placed, I decided I would tackle two problems at once. It's very difficult to print a cylinder in one piece, and the top part of the cylinder would be a challenge. So I split it up into another piece, while also adding bolts to secure the HEPA filters in that place. This is the ideal position, since I can print block-off sheets on the un-used filters if need be, to preserve the carbon granules, while on the active canisters, it's the first stage, making the carbon granules (which need to be replaced unlike the machine washable HEPA filters) last longer.

<img width="2448" height="1304" alt="Screenshot from 2025-07-18 23-06-14" src="https://github.com/user-attachments/assets/90807838-609d-4711-bc86-6008ad410653" />

**1 hour** modeling

