/* Function at 0x80611EC4, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80611EC4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80611ECC
    /* lis r8, 0 */ // 0x80611ED0
    *(0x34 + r1) = r0; // stw @ 0x80611ED4
    /* lis r7, 0 */ // 0x80611ED8
    /* lfs f1, 0(r8) */ // 0x80611EDC
    /* lis r9, 0 */ // 0x80611EE0
    *(0x2c + r1) = r31; // stw @ 0x80611EE4
    /* lis r31, 0x20e8 */ // 0x80611EE8
    /* lfs f0, 0(r6) */ // 0x80611EEC
    r6 = r31 + 0xdff; // 0x80611EF0
    *(0x28 + r1) = r30; // stw @ 0x80611EF4
    /* li r30, 0 */ // 0x80611EF8
    r7 = *(0 + r7); // lwz @ 0x80611EFC
    *(0x24 + r1) = r29; // stw @ 0x80611F04
    /* li r29, 0 */ // 0x80611F08
    *(0x20 + r1) = r28; // stw @ 0x80611F0C
    r28 = r3;
    *(8 + r1) = r30; // stw @ 0x80611F14
    r3 = *(0 + r9); // lwz @ 0x80611F18
    /* li r9, 0 */ // 0x80611F1C
    r5 = *(0 + r4); // lwz @ 0x80611F20
    r0 = *(4 + r4); // lwz @ 0x80611F24
    *(0x10 + r1) = r0; // stw @ 0x80611F28
    *(0xc + r1) = r5; // stw @ 0x80611F2C
    /* lfs f2, 0x10(r1) */ // 0x80611F34
    r0 = *(8 + r4); // lwz @ 0x80611F38
    /* fadds f0, f2, f0 */ // 0x80611F3C
    *(0x14 + r1) = r0; // stw @ 0x80611F40
    /* stfs f0, 0x10(r1) */ // 0x80611F44
    FUN_8081A3B4(); // bl 0x8081A3B4
    if (==) goto 0x0x80611f8c;
    r0 = *(8 + r1); // lwz @ 0x80611F54
    r4 = r31 + 0xfff; // 0x80611F58
    /* and. r0, r0, r4 */ // 0x80611F5C
    if (==) goto 0x0x80611f70;
    FUN_80842FAC(r4, r3); // bl 0x80842FAC
    /* b 0x80611f74 */ // 0x80611F6C
    r3 = r30;
    if (==) goto 0x0x80611f8c;
    /* lis r3, 0 */ // 0x80611F7C
    r3 = *(0 + r3); // lwz @ 0x80611F80
    r0 = *(4 + r3); // lhz @ 0x80611F84
    r29 = r0 rlwinm 0x18; // rlwinm
    r3 = r28;
    /* clrlwi r4, r29, 0x18 */ // 0x80611F90
    FUN_8061F1A0(r3); // bl 0x8061F1A0
    r0 = *(0x34 + r1); // lwz @ 0x80611F98
    r31 = *(0x2c + r1); // lwz @ 0x80611F9C
    r30 = *(0x28 + r1); // lwz @ 0x80611FA0
    r29 = *(0x24 + r1); // lwz @ 0x80611FA4
    r28 = *(0x20 + r1); // lwz @ 0x80611FA8
    return;
}