/* Function at 0x8082B070, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082B070(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r12 = r7;
    r11 = r8;
    *(0x24 + r1) = r0; // stw @ 0x8082B080
    r10 = r9;
    /* li r0, 0 */ // 0x8082B088
    r8 = r12;
    *(0x1c + r1) = r31; // stw @ 0x8082B090
    r31 = r6;
    r7 = r31;
    r9 = r11;
    *(0x18 + r1) = r30; // stw @ 0x8082B0A0
    r30 = r5;
    r5 = r4;
    /* li r4, 0 */ // 0x8082B0AC
    *(8 + r1) = r0; // stw @ 0x8082B0B0
    r6 = r30;
    FUN_8082B0D4(r5, r4, r6); // bl 0x8082B0D4
    r0 = *(0x24 + r1); // lwz @ 0x8082B0BC
    r31 = *(0x1c + r1); // lwz @ 0x8082B0C0
    r30 = *(0x18 + r1); // lwz @ 0x8082B0C4
    return;
}