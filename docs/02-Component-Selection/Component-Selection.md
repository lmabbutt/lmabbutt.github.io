
### Componenet Selection

**DC Motor**

1. PC280LG-301

    ![](MFG_PC280LG-301.jpg)

    * $7.27/each
    * [link to product](https://www.digikey.com/en/products/detail/johnson-motor/PC280LG-301/12719595?s=N4IgTCBcDaIAoGEwA4AMAZA4gWgMyoEYQBdAXyA)

    | Pros                                      | Cons                                                             |
    | ----------------------------------------- | ---------------------------------------------------------------- |
    | Compact, lightweight package — good for small actuators and tight space. (Ø ~25 mm, ~52 g).                         | Low output torque at shaft — needs gearbox for meaningful load/positioning (nominal torque ~4.6 mN·m). |
    | High free-running speed (9,300 RPM) — useful where high speed is desired or for small gearboxes.                    | Very high RPM at the motor shaft is often not useful directly for robotics/positioning; gearing/torque conversion required which adds complexity.                                        |
    | Relatively low nominal current (0.32 A) — low steady-state power draw for light loads. | Stall current ~1.8 A — motor driver must handle surge (and have current limiting); supply must support transient current.|
    | Affordable / widely available — low unit price through distributors (typical single-unit price in low dollars).| Brushed design — brush wear, brush noise/EMI, and maintenance over time; not as long-lived as brushless options in many applications.|
    | Solder-tab terminations — easy to wire for PCB or harness connections in simple builds.| No built-in encoder/feedback — if position/speed closed-loop control is required, you must add an external encoder or hall sensor.|
    | Solder-tab terminations — easy to wire for PCB or harness connections in simple builds.| Short listed life in some datasheets (typical life value shown) — you’ll want to check duty cycle; for continuous high-load duty a more robust motor or gearbox may be required. (datasheet lists a typical life figure; actual life depends on load/environment).|
        

3. HG37-120-AA-00

    ![](D.jpg)

    * $29.92/each
    * [Link to product](https://www.digikey.com/en/products/detail/nidec-components-corporation/HG37-120-AA-00/14553405?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mSe77BaK-WFdIAoTd1RI54J1lqSxFic8uShvaWAAsPBEAm5zt6otORoC6HsQAvD_BwE)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    | Outputs a square wave                                             | More expensive      |
    | Stable over operating temperature                                 | Slow shipping speed |
    | Direct interface with PSoC (no external circuitry required) range |

4. Custom Electrical Option/Mechanical Option

**Soil Moisture Sensor**

1. 13637

    ![](13637.jpg)

    * $7.95/each
    * [link to product](https://www.digikey.com/en/products/detail/sparkfun-electronics/13637/7400839?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mayriRdZcvui0HTdYMicDMSrmrPi3kqTxbDrLqTR_hUmT-cr0AV9jhoCaVgQAvD_BwE)

    | Pros                                      | Cons                                                             |
    | ----------------------------------------- | ---------------------------------------------------------------- |
    | Inexpensive                               | Requires external components and support circuitry for interface |
    | Compatible with PSoC                      | Needs special PCB layout.                                        |
    | Meets surface mount constraint of project |

2. SEN0114

    ![](SEN0114.jpg)

    * $2.70/each
    * [Link to product](https://www.digikey.com/en/products/detail/dfrobot/SEN0114/6588525?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mbQSvFXrFn6uSSuxGg_qehQQK9Uty_P8yXZ4lFzpzHMJX-7nO5745RoCtCwQAvD_BwE)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    | Outputs a square wave                                             | More expensive      |
    | Stable over operating temperature                                 | Slow shipping speed |
    | Direct interface with PSoC (no external circuitry required) range |

3. Custom Electrical Option/Mechanical Option

   **H Bridge**

1. INA125P

    ![](INA125P.png)

    * $10.08/each
    * [link to product](https://www.digikey.com/en/products/detail/texas-instruments/INA125P/254670?gclsrc=aw.ds&gad_source=4&gad_campaignid=20228387720&gbraid=0AAAAADrbLlhdskTRyyOweqI0wZs3p_N9a&gclid=CjwKCAjwmNLHBhA4EiwA3ts3maSekNz6cEfK83rlFOWYgj_-v-7Q3MSDubHQqxA6B9jR7x_icL5iBhoC0mcQAvD_BwE)

    | Pros                                      | Cons                                                             |
    | ----------------------------------------- | ---------------------------------------------------------------- |
    | Inexpensive                               | Requires external components and support circuitry for interface |
    | Compatible with PSoC                      | Needs special PCB layout.                                        |
    | Meets surface mount constraint of project |

2. HIP4082IPZ

    ![](HIP4082IPZ.jpg)

    * $2.70/each
    * [Link to product](https://www.digikey.com/en/products/detail/renesas-electronics-corporation/HIP4082IPZ/821447)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    | Outputs a square wave                                             | More expensive      |
    | Stable over operating temperature                                 | Slow shipping speed |
    | Direct interface with PSoC (no external circuitry required) range |

3. Custom Electrical Option/Mechanical Option

