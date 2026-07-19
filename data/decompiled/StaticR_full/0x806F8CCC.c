/* Function at 0x806F8CCC, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F8CCC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806F8CD8
    r31 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806F8CE0
    if (!=) goto 0x0x806f8d44;
    FUN_806F8D5C(r5); // bl 0x806F8D5C
    if (==) goto 0x0x806f8d44;
    r4 = *(8 + r1); // lwz @ 0x806F8CFC
    /* li r0, 0x3f */ // 0x806F8D00
    /* li r5, 0 */ // 0x806F8D04
    /* slwi r3, r4, 1 */ // 0x806F8D08
    r3 = r31 + r3; // 0x806F8D0C
    /* mtctr r0 */ // 0x806F8D10
    r0 = *(0x310 + r3); // lhz @ 0x806F8D14
    if (!=) goto 0x0x806f8d38;
    r3 = r4 + r5; // 0x806F8D20
    r0 = r3 + 1; // 0x806F8D24
    /* slwi r0, r0, 1 */ // 0x806F8D28
    r3 = r31 + r0; // 0x806F8D2C
    r3 = r3 + 0x310; // 0x806F8D30
    /* b 0x806f8d48 */ // 0x806F8D34
    r3 = r3 + 2; // 0x806F8D38
    r5 = r5 + 1; // 0x806F8D3C
    if (counter-- != 0) goto 0x0x806f8d14;
    /* li r3, 0 */ // 0x806F8D44
    r0 = *(0x24 + r1); // lwz @ 0x806F8D48
    r31 = *(0x1c + r1); // lwz @ 0x806F8D4C
    return;
}