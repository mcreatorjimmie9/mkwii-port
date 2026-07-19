/* Function at 0x80842034, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80842034(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x8084204C
    r28 = r3;
    r0 = *(0x18 + r3); // lwz @ 0x80842054
    if (==) goto 0x0x808420a0;
    r30 = r28;
    /* li r29, 0 */ // 0x80842064
    /* lis r31, 0 */ // 0x80842068
    /* b 0x80842094 */ // 0x8084206C
    r4 = *(0xc + r30); // lwz @ 0x80842070
    r3 = *(0 + r31); // lwz @ 0x80842074
    r0 = *(4 + r4); // lwz @ 0x80842078
    /* mulli r0, r0, 0x24 */ // 0x8084207C
    r3 = r3 + r0; // 0x80842080
    r3 = r3 + 0x48; // 0x80842084
    FUN_80820FFC(r3); // bl 0x80820FFC
    r30 = r30 + 4; // 0x8084208C
    r29 = r29 + 1; // 0x80842090
    r0 = *(8 + r28); // lwz @ 0x80842094
    if (<) goto 0x0x80842070;
    /* li r0, 0 */ // 0x808420A0
    /* li r3, 0x14 */ // 0x808420A4
    *(4 + r28) = r3; // stw @ 0x808420A8
    *(8 + r28) = r0; // stw @ 0x808420AC
    *(0x29 + r28) = r0; // stb @ 0x808420B0
    *(0x18 + r28) = r0; // stw @ 0x808420B4
    *(0xc + r28) = r0; // stw @ 0x808420B8
    *(0x10 + r28) = r0; // stw @ 0x808420BC
    *(0x14 + r28) = r0; // stw @ 0x808420C0
    *(0x1c + r28) = r0; // stb @ 0x808420C4
    *(0x20 + r28) = r0; // stw @ 0x808420C8
    *(0x24 + r28) = r0; // stw @ 0x808420CC
    r31 = *(0x1c + r1); // lwz @ 0x808420D0
    r30 = *(0x18 + r1); // lwz @ 0x808420D4
    r29 = *(0x14 + r1); // lwz @ 0x808420D8
    r28 = *(0x10 + r1); // lwz @ 0x808420DC
    r0 = *(0x24 + r1); // lwz @ 0x808420E0
    return;
}