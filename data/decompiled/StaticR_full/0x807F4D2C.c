/* Function at 0x807F4D2C, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807F4D2C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807F4D44
    /* lis r30, 0 */ // 0x807F4D48
    r30 = r30 + 0; // 0x807F4D4C
    *(0x14 + r1) = r29; // stw @ 0x807F4D50
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x807F4D58
    r28 = r4;
    if (==) goto 0x0x807f4d78;
    if (==) goto 0x0x807f4db4;
    if (==) goto 0x0x807f4db4;
    /* b 0x807f4e14 */ // 0x807F4D74
    r3 = r28;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807F4D80
    /* clrlwi r0, r3, 0x18 */ // 0x807F4D84
    *(0xc + r30) = r0; // stw @ 0x807F4D88
    r3 = *(0 + r4); // lwz @ 0x807F4D8C
    r0 = *(0xb70 + r3); // lwz @ 0x807F4D90
    if (!=) goto 0x0x807f4da8;
    r0 = *(8 + r30); // lwz @ 0x807F4D9C
    *(0xe0 + r31) = r0; // stw @ 0x807F4DA0
    /* b 0x807f4e14 */ // 0x807F4DA4
    r0 = *(4 + r30); // lwz @ 0x807F4DA8
    *(0xe0 + r31) = r0; // stw @ 0x807F4DAC
    /* b 0x807f4e14 */ // 0x807F4DB0
    r0 = *(0xb0 + r3); // lwz @ 0x807F4DB4
    if (==) goto 0x0x807f4df4;
    /* li r0, 2 */ // 0x807F4DC0
    *(0xb0 + r3) = r0; // stw @ 0x807F4DC4
    r4 = *(8 + r3); // lwz @ 0x807F4DC8
    /* lis r3, 0 */ // 0x807F4DCC
    /* lis r5, 0 */ // 0x807F4DD0
    /* lfs f1, 0(r3) */ // 0x807F4DD4
    r3 = *(0x28 + r4); // lwz @ 0x807F4DD8
    /* li r4, 1 */ // 0x807F4DDC
    /* lfs f2, 0(r5) */ // 0x807F4DE0
    /* li r5, 1 */ // 0x807F4DE4
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* li r0, 0xb4 */ // 0x807F4DEC
    *(0xbc + r31) = r0; // stw @ 0x807F4DF0
    r0 = *(0xe4 + r31); // lbz @ 0x807F4DF4
    if (==) goto 0x0x807f4e14;
    r3 = r28;
    /* li r4, 0 */ // 0x807F4E04
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x807F4E0C
    *(0xe4 + r31) = r0; // stb @ 0x807F4E10
    r31 = *(0x1c + r1); // lwz @ 0x807F4E14
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807F4E1C
    r29 = *(0x14 + r1); // lwz @ 0x807F4E20
    r28 = *(0x10 + r1); // lwz @ 0x807F4E24
    r0 = *(0x24 + r1); // lwz @ 0x807F4E28
    return;
}