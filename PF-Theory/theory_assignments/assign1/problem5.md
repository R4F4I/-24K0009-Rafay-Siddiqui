# Problem 5 : Crop Management

A smart agricultural drone monitors a large farm to manage irrigation efficiently. The drone first checks the type of crop being monitored whether it's wheat, corn, or rice. For wheat, if the soil moisture is below 30%, and if it has not rained in the last 24 hours, the system will initiate irrigation. For corn, if the soil moisture is below 40% , the system will irrigate regardless of recent rainfall. For rice, if the soil moisture is below 25% , the system will irrigate unless it has rained in the last 24 hours. If the soil moisture is above these thresholds, no irrigation is applied. Design a solution to determine if irrigation should be initiated based on the crop type, soil moisture level, and rainfall status.

## Pseudocode

```pseudocode
input crop, soil_moisture, rainfall_time

switch(crop){
    case wheat:
        if soil_moisture < 30 && rainfall_time>24:
        perform_irrigation()
    case corn:
        if soil_moisture < 40:
        perform_irrigation()
    case rice:
        if soil_moisture < 25 && rainfall_time>24:
        perform_irrigation()
        
}

```

## IPO Chart

|input|process|output|
|-|-|-|
|crop, soil_moisture, rainfall_time|determine the conditions with respect to the chosen crop|perform irrigation if those conditions are met|

## Flowchart

![prob5](drawings\prob5.drawio.png)
