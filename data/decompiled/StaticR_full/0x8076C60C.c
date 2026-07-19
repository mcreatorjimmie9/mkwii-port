/* Function at 0x8076C60C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8076C60C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8076C614
    /* li r6, 0 */ // 0x8076C618
    *(0x24 + r1) = r0; // stw @ 0x8076C61C
    r4 = r4 + 0; // 0x8076C620
    *(0x1c + r1) = r31; // stw @ 0x8076C624
    /* lis r31, 0 */ // 0x8076C628
    *(0x18 + r1) = r30; // stw @ 0x8076C62C
    /* lis r30, 0 */ // 0x8076C630
    r5 = r30 + 0; // 0x8076C634
    *(0x14 + r1) = r29; // stw @ 0x8076C638
    *(0x10 + r1) = r28; // stw @ 0x8076C63C
    r28 = r3;
    *(0 + r3) = r4; // stw @ 0x8076C644
    /* li r4, 2 */ // 0x8076C648
    r3 = *(0 + r31); // lwz @ 0x8076C64C
    FUN_805CFD60(r4); // bl 0x805CFD60
    r29 = r3;
    r4 = r30 + 0; // 0x8076C658
    r5 = r4 + 0x14; // 0x8076C65C
    r3 = *(0 + r31); // lwz @ 0x8076C660
    /* li r4, 2 */ // 0x8076C664
    /* li r6, 0 */ // 0x8076C668
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    r30 = r3;
    /* li r3, 0x20 */ // 0x8076C674
    FUN_805E3430(r4, r6, r3); // bl 0x805E3430
}