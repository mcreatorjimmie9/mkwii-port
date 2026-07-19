/* Function at 0x807B2D44, size=120 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807B2D44(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807B2D54
    r31 = r31 + 0; // 0x807B2D58
    *(0xb8 + r1) = r30; // stw @ 0x807B2D5C
    r30 = r5;
    *(0xb4 + r1) = r29; // stw @ 0x807B2D64
    r29 = r4;
    *(0xb0 + r1) = r28; // stw @ 0x807B2D6C
    r28 = r3;
    r3 = *(0x1cc + r4); // lwz @ 0x807B2D74
    FUN_8061DFF8(); // bl 0x8061DFF8
    r4 = *(0x74 + r3); // lwz @ 0x807B2D7C
    r0 = *(0x78 + r3); // lwz @ 0x807B2D80
    *(0x48 + r1) = r0; // stw @ 0x807B2D84
    *(0x44 + r1) = r4; // stw @ 0x807B2D88
    r0 = *(0x7c + r3); // lwz @ 0x807B2D8C
    *(0x4c + r1) = r0; // stw @ 0x807B2D90
    r3 = *(0x1cc + r29); // lwz @ 0x807B2D94
    FUN_8061DC48(); // bl 0x8061DC48
    r4 = r3;
    /* lis r5, 0 */ // 0x807B2DA0
    r4 = r4 + 0xf0; // 0x807B2DA8
    r5 = r5 + 0; // 0x807B2DAC
    FUN_805A4428(r4, r5, r3, r4, r5); // bl 0x805A4428
    r3 = *(0x1cc + r29); // lwz @ 0x807B2DB4
    FUN_8061DA88(r3, r4, r5); // bl 0x8061DA88
}