/* Function at 0x806F8D5C, size=156 bytes */
/* Stack frame: 0 bytes */

int FUN_806F8D5C(int r3, int r4, int r5, int r6, int r7)
{
    /* li r0, 0 */ // 0x806F8D5C
    *(0 + r5) = r0; // stw @ 0x806F8D60
    r7 = *(0x58 + r3); // lwz @ 0x806F8D64
    /* b 0x806f8de4 */ // 0x806F8D68
    /* slwi r0, r0, 1 */ // 0x806F8D6C
    r6 = r3 + r0; // 0x806F8D70
    r0 = *(0x310 + r6); // lhz @ 0x806F8D74
    if (!=) goto 0x0x806f8dbc;
    r0 = *(0x312 + r6); // lhz @ 0x806F8D80
    if (!=) goto 0x0x806f8dbc;
    r0 = *(0x314 + r6); // lhz @ 0x806F8D8C
    if (!=) goto 0x0x806f8dac;
    r0 = *(0x316 + r6); // lhz @ 0x806F8D98
    if (!=) goto 0x0x806f8dac;
    /* li r3, 0 */ // 0x806F8DA4
    return;
    r6 = *(0 + r5); // lwz @ 0x806F8DAC
    r7 = r7 + -1; // 0x806F8DB0
    r0 = r6 + 2; // 0x806F8DB4
    *(0 + r5) = r0; // stw @ 0x806F8DB8
    if (!=) goto 0x0x806f8dcc;
    /* li r3, 1 */ // 0x806F8DC4
    return;
    if (>=) goto 0x0x806f8dd8;
    /* li r3, 0 */ // 0x806F8DD0
    return;
    r6 = *(0 + r5); // lwz @ 0x806F8DD8
    r0 = r6 + 1; // 0x806F8DDC
    *(0 + r5) = r0; // stw @ 0x806F8DE0
    r0 = *(0 + r5); // lwz @ 0x806F8DE4
    if (<) goto 0x0x806f8d6c;
    /* li r3, 0 */ // 0x806F8DF0
    return;
}