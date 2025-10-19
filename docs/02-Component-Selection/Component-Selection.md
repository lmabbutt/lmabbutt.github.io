
### Componenet Selection

**DC Motor**

1. PC280LG-301

    ![](MFG_PC280LG-301.jpg)

    * $7.27/each
    * [link to product](https://www.digikey.com/en/products/detail/johnson-motor/PC280LG-301/12719595?s=N4IgTCBcDaIAoGEwA4AMAZA4gWgMyoEYQBdAXyA)

    | Pros                                      | Cons                                                             |
    | ----------------------------------------- | ---------------------------------------------------------------- |
    | Inexpensive                               | Requires external components and support circuitry for interface |
    | Compatible with PSoC                      | Needs special PCB layout.                                        |
    | Meets surface mount constraint of project |

1. CTX936TR-ND surface mount oscillator

    ![](D.jpg)

    * $29.92/each
    * [Link to product](https://www.digikey.com/en/products/detail/nidec-components-corporation/HG37-120-AA-00/14553405?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLljBQunprEOtznelsRLs-J4uH&gclid=CjwKCAjwmNLHBhA4EiwA3ts3mSe77BaK-WFdIAoTd1RI54J1lqSxFic8uShvaWAAsPBEAm5zt6otORoC6HsQAvD_BwE)

    | Pros                                                              | Cons                |
    | ----------------------------------------------------------------- | ------------------- |
    | Outputs a square wave                                             | More expensive      |
    | Stable over operating temperature                                 | Slow shipping speed |
    | Direct interface with PSoC (no external circuitry required) range |

**Choice:** Option 2: CTX936TR-ND surface mount oscillator

**Rationale:** A clock oscillator is easier to work with because it requires no external circuitry in order to interface with the PSoC. This is particularly important because we are not sure of the electrical characteristics of the PCB, which could affect the oscillation of a crystal. While the shipping speed is slow, according to the website if we order this week it will arrive within 3 weeks.
