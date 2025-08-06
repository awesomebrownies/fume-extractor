# Fume Extractor

A Travel packable fume-extractor for electronic prototyping inspired by Rogue One movie props. 

***Why?*** Many soldering iron fume extractors are low quality and merely push away fumes rather than properly filter them. The capsule design ensures that all air moves through a thick layer of **active carbon granules**, not some cheap foam. In addition, the HEPA filter will deal with any particulates that could irritate the lungs.

## Key Features

It provides **3 spares** of quick-swap carbon capsules with HEPA filters to provide **2 stage filtering**. The microcontroller has an external mount with warning lights when **failed filtering of Volatile Organic Compounds (VOCs)** is detected from a dedicated sensor. The vacuum tube is supported by a gooseneck arm for easily getting up close to fumes.

<img width="1003" height="1583" alt="Screenshot from 2025-08-06 09-17-03" src="https://github.com/user-attachments/assets/ccb42aa4-d5f8-4ca7-b1ab-99cabab465dd" />

## How to Assemble

There are two parts to this.
* Ordering BOM
* 3d Printing Parts (check CAD folder)
* Putting it all together

Let's skip over to putting it together.

### Wiring up the PWM fans to the Microcontroller (Rpi-Pico)

Refer to the wiring diagram below:

<img height="600" alt="Screenshot from 2025-07-29 23-48-41" src="https://github.com/user-attachments/assets/7da769f8-28db-4bcb-9665-79e158f3429a" />

### Putting together the print

The capsules are in a couple of pieces, and you'll need a screw and a nut for each of the parts.

* First, insert the fan inside, with the wires on the accessible side for hooking up to the microcontroller. Use the screws available inside of the package for the fans
* Then, put a mesh between the fan and the rest of the capsule on the next part. You'll need two M2 screws and nuts
* Finally, pour the bag of carbon granules inside, and insert the HEPA filter at the end. As before, you'll need two M2 screws and nuts

### Final Steps

* Flashing firmware

To flash the firmware, open up the Arduino IDE, and copy and paste the code from the repository to the pico

## Project Bill of Materials

**Total Cost: $149.68**

## Electronics – $62.70

| Component                 | Quantity | Price | Link                                                                                                              | Notes |
| ------------------------ | -------- | ----- | ----------------------------------------------------------------------------------------------------------------- | ----- |
| Air Quality Sensor        | 1        | $6.20 | [DigiKey](https://www.digikey.com/en/products/detail/sensirion-ag/SGP40-D-R4/12820418)                            |       |
| PWM Ventilation Fans      | 3        | $48.00| [Amazon](https://www.amazon.com/Noctua-NF-A4x10-5V-PWM-Premium/dp/B07DXS86G7)                                     |       |
| Raspberry Pi Pico         | 1        | $4.00 | [DigiKey](https://www.digikey.com/en/products/detail/raspberry-pi/SC0915/13684020)                                |       |
| Rotary Encoder w/ Switch  | 1        | $4.50 | [DigiKey](https://www.digikey.com/en/products/detail/alps-alpine/EC11E09244BS/21721622)                           |       |

## Fume Hood – $24.99

| Component          | Quantity | Price  | Link                                                                                                                 | Notes |
| ------------------ | -------- | ------ | -------------------------------------------------------------------------------------------------------------------- | ----- |
| 19" Gooseneck Arm   | 1        | $12.99 | [Amazon](https://www.amazon.com/Gator-Frameworks-Gooseneck-Microphones-GFW-MIC-GN19/dp/B01CUR5DU2)                  |       |
| Flexible Hose       | 1        | $12.00 | [Amazon](https://www.amazon.com/Flexible-Central-Vacuum-Installation-Hose/dp/B0CLH8M5JQ?source=ps-sl-shoppingads...) |       |

## Filtering Elements – $61.99

| Component                   | Quantity | Price  | Link                                                                                                               | Notes |
| --------------------------- | -------- | ------ | ------------------------------------------------------------------------------------------------------------------ | ----- |
| Vacuum Washable HEPA Filter | 3        | $15.99 | [Amazon](https://www.amazon.com/SunSare-CPA1725-RYH-Vacuum-Filter-3PCS/dp/B0DQ8STYNL)                              |       |
| Bag of Carbon Granules      | 1        | $46.00 | [Amazon](https://www.amazon.com/AC-Infinity-Australian-Replacement-Hydroponics/dp/B0CFCKFPHR?th=1)                |       |

## Mechanics – $0.00

| Component    | Quantity | Price | Link | Notes                  |
| ------------| -------- | ----- | ---- | ---------------------- |
| Springs      | 2        | -     | -    | Already purchased      |
| 3D Prints    | -        | -     | -    | Using printing legion  |
| Heatset M2 Inserts | 2  | -     | -    | Already purchased      |

## Cost Summary

| Section             | Cost     |
| ------------------- | -------- |
| Electronics         | $62.70   |
| Fume Hood           | $24.99   |
| Filtering Elements  | $61.99   |
| Mechanics           | $0.00    |
| **Total**           | **$149.68** |

