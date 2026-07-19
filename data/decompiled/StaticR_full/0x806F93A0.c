/* Function at 0x806F93A0, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F93A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F93B8
    r29 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806F93C0
    if (!=) goto 0x0x806f944c;
    /* li r0, 0x27c */ // 0x806F93CC
    r4 = r29;
    /* li r5, 0 */ // 0x806F93D4
    /* mtctr r0 */ // 0x806F93D8
    r0 = *(0x310 + r4); // lhz @ 0x806F93DC
    if (!=) goto 0x0x806f9440;
    r0 = *(0x312 + r4); // lhz @ 0x806F93E8
    if (!=) goto 0x0x806f9440;
    r0 = *(0x314 + r4); // lhz @ 0x806F93F4
    if (!=) goto 0x0x806f9440;
    r0 = *(0x316 + r4); // lhz @ 0x806F9400
    if (!=) goto 0x0x806f9440;
    r0 = r5 + 4; // 0x806F940C
    /* slwi r31, r0, 1 */ // 0x806F9410
    r3 = r3 + r31; // 0x806F9414
    r3 = r3 + 0x310; // 0x806F9418
    FUN_805E3430(r3); // bl 0x805E3430
    *(0 + r30) = r3; // stw @ 0x806F9424
    if (>) goto 0x0x806f9438;
    r3 = r29 + r31; // 0x806F942C
    r3 = r3 + 0x310; // 0x806F9430
    /* b 0x806f9450 */ // 0x806F9434
    /* li r3, 0 */ // 0x806F9438
    /* b 0x806f9450 */ // 0x806F943C
    r4 = r4 + 2; // 0x806F9440
    r5 = r5 + 1; // 0x806F9444
    if (counter-- != 0) goto 0x0x806f93dc;
}