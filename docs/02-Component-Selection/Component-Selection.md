
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
    | Solder-tab terminations — easy to wire for PCB or harness connections in simple builds.| Short listed life in some datasheets. For continuous high-load duty a more robust motor or gearbox may be required.|
        

2. HG37-120-AA-00

    ![](D.jpg)

    * $29.92/each
    * [Link to product](https://www.digikey.com/en/products/detail/nidec-components-corporation/HG37-120-AA-00/14553405?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mSe77BaK-WFdIAoTd1RI54J1lqSxFic8uShvaWAAsPBEAm5zt6otORoC6HsQAvD_BwE)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    | Integrated planetary gearbox (1:120) — delivers usable low speed and much higher output torque than raw motor. Good for compact, low-RPM actuators.                                            | Relatively high unit cost.      |
    | Moderate continuous torque (~392 mN·m) — suitable for small mechanical loads without extra gearbox.                               | Brushed DC motor (likely) — brush wear and EMI; not as long-lived as brushless options for heavy continuous-duty applications. |
    | Compact (Ø37 mm) — small footprint that fits into constrained mechanical designs. | No integrated encoder/feedback — add external encoder or sensor for closed-loop position/speed control. |

3. **Custom Electrical Option/Mechanical Option**
       A compact planetary gearbox + output rotary encoder + driver + mounting built around a small DC can motor. This option is intended where off-the-shelf torque/speed/feedback packages are unavailable or you want tighter control over form-factor, gear ratio, and sensor placement.

   | Pros                                      | Cons                                                             |
   | ----------------------------------------- | ---------------------------------------------------------------- |
   |Custom ratio & footprint — choose exact gear ratio, shaft length, and mounting pattern to fit your device.| Higher design & build complexity vs buying an off-the-shelf geared motor.|
   |Easier maintenance/repair — you can replace gears, bearings, encoder separately.|Prototype accuracy depends on manufacturing quality (3D printed gears/print tolerances introduce backlash).|
   |Integrated high-resolution feedback — encoder on output gives direct, backlash-compensated position readings.|Longer development time & potential higher unit cost for single pieces.|

**Choice and Rationale**
    The HG37-120-AA-00 DC motor was selected as the optimal choice because it provides a strong balance of torque, speed, and reliability for the project. Its integrated 120:1 planetary gearbox delivers the low-speed, high-torque output needed for precise motion without requiring additional mechanical components. This integration simplifies assembly, reduces design time, and ensures consistent performance. The motor’s documented specifications and build quality make it easier to model, test, and control compared to cheaper hobby motors. Although it costs slightly more than basic options like the PC280LG-301, the HG37-120-AA-00’s ease of integration, reliability, and predictable results make it the most practical and efficient solution for this embedded systems design project.
   
**Soil Moisture Sensor**

1. 13637

    ![](13637.jpg)

    * $7.95/each
    * [link to product](https://www.digikey.com/en/products/detail/sparkfun-electronics/13637/7400839?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mayriRdZcvui0HTdYMicDMSrmrPi3kqTxbDrLqTR_hUmT-cr0AV9jhoCaVgQAvD_BwE)

    | Pros                                      | Cons                                                             |
    | ----------------------------------------- | ---------------------------------------------------------------- |
    | Capacitive measurement — less corrosion-prone and longer-lasting than resistive probes.| Analog output only — requires ADC input on the microcontroller. |
    | Simple 3-wire interface — easy to connect to Arduino, ESP32, or other MCUs.| Not factory-calibrated — needs user calibration for absolute moisture values.|
    | Wide voltage range (3.3–5 V) — compatible with both 3.3 V and 5 V systems. | Sensitive to electrical noise — may need filtering or shielding in long-wire installations. |

2. SEN0114

    ![](SEN0114.jpg)    

    * $2.70/each
    * [Link to product](https://www.digikey.com/en/products/detail/dfrobot/SEN0114/6588525?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mbQSvFXrFn6uSSuxGg_qehQQK9Uty_P8yXZ4lFzpzHMJX-7nO5745RoCtCwQAvD_BwE)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    | Low-cost sensor — one of the most inexpensive soil moisture probes available.                                         | Prone to corrosion — exposed electrodes degrade quickly when left in wet soil for long periods.     |
    | Simple 3-wire analog interface — easily integrates with microcontrollers (Arduino, ESP32, etc.).                                | Requires calibration — analog output varies with soil type and salinity; no absolute moisture reference. |
    | Compatible with both 3.3 V and 5 V logic — flexible for most embedded platforms. | High current draw (~35 mA) compared to capacitive alternatives (less suitable for low-power systems). |

3. **Custom Electrical Option/Mechanical Option**
    Design a durable, low-power, accurate soil-moisture sensing module. Uses a capacitive sensing element, temperature compensation, waterproofing, and an optional digital output (I²C) for easy integration.

| Pros                                                                                   | Cons                                                                          |
| -------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------ |
| **Low corrosion** (capacitive) — longer lifetime than exposed resistive probes.        | **Higher complexity & cost** than cheap resistive probe.                             |
| **Low power** — can be battery operated for months/years.                              | **Probe coating affects sensitivity** — must choose coating carefully and calibrate. |
| **High accuracy & repeatability** with cap-to-digital IC and temperature compensation. | **Environmental factors (salinity, soil composition)** still require calibration.    |
| **Digital output & easy integration** (I²C/ADC) for embedded projects.                 | **Sealing & waterproofing complexity** — requires good mechanical design.            |
| **Customizable form factor & depth sensitivity** via probe geometry.                   | **Long-term drift possible** — periodic recalibration recommended.                   |

**Choice and Rationale**
    The **SEN0114 soil moisture sensor** was selected as the best option because it offers a reliable and easy-to-use design with analog output, making it simple to integrate into a microcontroller-based system. It provides stable readings compared to cheaper resistive sensors and is less prone to corrosion due to its corrosion-resistant coating. The SEN0114 also includes clear documentation and calibration support from DFRobot, ensuring consistent data collection for soil monitoring applications. While it is slightly more expensive than basic resistive sensors like the 13637, its improved durability, accuracy, and compatibility with embedded systems make it the most dependable and efficient choice for this project.


   **H Bridge**

1. INA125P

    ![](INA125P.png)

    * $10.08/each
    * [link to product](https://www.digikey.com/en/products/detail/texas-instruments/INA125P/254670?gclsrc=aw.ds&gad_source=4&gad_campaignid=20228387720&gbraid=0AAAAADrbLlhdskTRyyOweqI0wZs3p_N9a&gclid=CjwKCAjwmNLHBhA4EiwA3ts3maSekNz6cEfK83rlFOWYgj_-v-7Q3MSDubHQqxA6B9jR7x_icL5iBhoC0mcQAvD_BwE)

    | Pros                                      | Cons                                                             |
    | ----------------------------------------- | ---------------------------------------------------------------- |
    | Integrated precision voltage reference — simplifies powering bridge sensors and reduces external component count.| Requires proper PCB layout — noise pickup can degrade performance if wiring is unshielded. |
    | Wide supply range (2.7 V–36 V) — compatible with many analog and mixed-signal systems.                  | Through-hole PDIP form — larger footprint; may need breakout for compact embedded boards.  |
    | Adjustable gain (4 – 10,000) — flexible for various sensor outputs and ADC ranges. | Reference current limited to ~25 mA — cannot power large sensors or multiple bridges.|

2. HIP4082IPZ

    ![](HIP4082IPZ.jpg)

    * $2.70/each
    * [Link to product](https://www.digikey.com/en/products/detail/renesas-electronics-corporation/HIP4082IPZ/821447)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    |Four independent channels — flexible configuration for half-bridge or full H-bridge control.|Not a standalone motor driver — requires external power MOSFETs for current handling.|
    | High voltage tolerance (up to 80 V) — supports large DC motors or inductive loads.| Complex circuit design — needs bootstrap capacitors, MOSFET selection, and protection circuitry. |
    | High drive current (2.5 A) — enables fast switching of large MOSFET gates. |Requires proper PCB layout — sensitive to high dv/dt and EMI in high-current applications.|

3. **Custom Electrical Option/Mechanical Option**
       Build a robust, efficient, bidirectional motor driver (H-bridge) that supports PWM speed control, current limiting, and fast switching for motors up to chosen supply.
   
| Pros                                               | Cons        |
|-------------------------------------------------------------------| ---------------------------------------------------------------------------------------------------------------------------------- |
| **Fully customizable** — can tailor voltage/current capacity, switching speed, and thermal handling for specific motor requirements. | **Complex design** — requires careful timing and dead-time control to prevent MOSFET shoot-through.|
| **Potentially lower cost per unit** when built in quantity, since components can be sourced individually.                            | **More development time** — circuit design, testing, and PCB layout take significantly longer than using an integrated H-bridge IC. |
| **Higher current handling** — discrete MOSFETs can support higher power motors compared to small integrated drivers.                 | **Requires external logic** — needs a separate driver or microcontroller PWM logic to control switching safely.                     |
| **Easier repairability** — individual transistors and components can be replaced if damaged.                                         | **Thermal management challenges** — heat sinks or fans may be needed to maintain safe operating temperatures.                       |

**Choice and Rationale**
    The **HIP4082IPZ H-bridge driver** was selected as the optimal choice because it provides high efficiency, robustness, and flexibility for controlling DC motors in the project. It supports **high-voltage operation up to 80 V** and can deliver large peak currents, making it suitable for a wide range of motor sizes. The HIP4082IPZ also features built-in **high- and low-side MOSFET drivers**, allowing precise PWM control and reliable switching performance. Although it requires external MOSFETs and slightly more complex circuit design compared to all-in-one motor driver ICs, this modular approach offers greater customization and power-handling capability. Its strong balance of performance, control precision, and scalability makes it the most effective and future-proof solution for the project’s motor control needs.


