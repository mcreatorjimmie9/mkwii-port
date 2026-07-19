/* Function at 0x805A1A2C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805A1A2C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805A1A3C
    *(0x18 + r1) = r30; // stw @ 0x805A1A40
    /* li r30, 0 */ // 0x805A1A44
    *(0x14 + r1) = r29; // stw @ 0x805A1A48
    r29 = r3;
    /* b 0x805a1a68 */ // 0x805A1A50
    r3 = r29;
    /* clrlwi r4, r30, 0x10 */ // 0x805A1A58
    FUN_805A5850(r3); // bl 0x805A5850
    *(0x18 + r3) = r31; // sth @ 0x805A1A60
    r30 = r30 + 1; // 0x805A1A64
    r4 = *(0x20 + r29); // lwz @ 0x805A1A68
    /* clrlwi r3, r30, 0x10 */ // 0x805A1A6C
    if (!=) goto 0x0x805a1a80;
    /* li r0, 0 */ // 0x805A1A78
    /* b 0x805a1a84 */ // 0x805A1A7C
    r0 = *(4 + r4); // lhz @ 0x805A1A80
    if (<) goto 0x0x805a1a54;
    r0 = *(0x24 + r1); // lwz @ 0x805A1A8C
    r31 = *(0x1c + r1); // lwz @ 0x805A1A90
    r30 = *(0x18 + r1); // lwz @ 0x805A1A94
    r29 = *(0x14 + r1); // lwz @ 0x805A1A98
    return;
}