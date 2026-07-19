/* Function at 0x8060FED0, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_8060FED0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8060FEDC
    *(0x1c + r1) = r31; // stw @ 0x8060FEE4
    r31 = r3;
    r3 = r3 + 0x108; // 0x8060FEEC
    *(0x18 + r1) = r30; // stw @ 0x8060FEF0
    *(8 + r1) = r0; // stb @ 0x8060FEF4
    FUN_806166A0(r3); // bl 0x806166A0
    if (==) goto 0x0x8060ff3c;
    r4 = *(0 + r31); // lwz @ 0x8060FF04
    r3 = r31;
    r4 = *(4 + r4); // lwz @ 0x8060FF0C
    r0 = *(4 + r4); // lwz @ 0x8060FF10
    r0 = r0 | 1; // 0x8060FF14
    *(4 + r4) = r0; // stw @ 0x8060FF18
    /* lfs f1, 0x124(r31) */ // 0x8060FF1C
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r31;
    /* li r4, 4 */ // 0x8060FF28
    /* li r5, 0 */ // 0x8060FF2C
    /* li r6, 1 */ // 0x8060FF30
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* b 0x8060ff58 */ // 0x8060FF38
    r3 = r31;
    FUN_8061E6D4(r5, r6, r3); // bl 0x8061E6D4
    r3 = *(0 + r31); // lwz @ 0x8060FF44
    r3 = *(4 + r3); // lwz @ 0x8060FF48
    r0 = *(4 + r3); // lwz @ 0x8060FF4C
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r0; // stw @ 0x8060FF54
    r4 = *(0 + r31); // lwz @ 0x8060FF58
    /* li r30, 0 */ // 0x8060FF5C
    r3 = *(4 + r4); // lwz @ 0x8060FF60
    r0 = *(4 + r3); // lwz @ 0x8060FF64
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8060FF68
    if (==) goto 0x0x8060fff0;
    r7 = *(4 + r4); // lwz @ 0x8060FF70
    r3 = r31;
    /* li r4, 4 */ // 0x8060FF78
    /* li r5, 0 */ // 0x8060FF7C
    r0 = *(4 + r7); // lwz @ 0x8060FF80
    /* li r6, 1 */ // 0x8060FF84
    r0 = r0 | 1; // 0x8060FF88
    *(4 + r7) = r0; // stw @ 0x8060FF8C
    FUN_8061E8C0(r5, r6); // bl 0x8061E8C0
    /* lfs f1, 0x124(r31) */ // 0x8060FF94
    r3 = r31;
    FUN_8061E6BC(r3); // bl 0x8061E6BC
    r3 = *(0x1c4 + r31); // lha @ 0x8060FFA0
    r0 = r3 + -1; // 0x8060FFA4
    *(0x1c4 + r31) = r0; // sth @ 0x8060FFA8
    /* extsh. r0, r0 */ // 0x8060FFAC
    if (>) goto 0x0x8060fff0;
    r3 = r31;
    FUN_8061E6D4(r3); // bl 0x8061E6D4
    /* li r0, 0 */ // 0x8060FFBC
    *(0x1c4 + r31) = r0; // sth @ 0x8060FFC0
    r6 = *(0 + r31); // lwz @ 0x8060FFC4
    r3 = r31;
    /* li r4, 4 */ // 0x8060FFCC
    /* li r5, 0 */ // 0x8060FFD0
    r7 = *(4 + r6); // lwz @ 0x8060FFD4
    /* li r6, 1 */ // 0x8060FFD8
    r0 = *(4 + r7); // lwz @ 0x8060FFDC
    /* clrlwi r0, r0, 1 */ // 0x8060FFE0
    *(4 + r7) = r0; // stw @ 0x8060FFE4
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    /* li r30, 1 */ // 0x8060FFEC
    r0 = *(8 + r1); // lbz @ 0x8060FFF0
    if (!=) goto 0x0x80610004;
    if (!=) goto 0x0x80610014;
    if (==) goto 0x0x80610028;
    if (!=) goto 0x0x80610028;
    r3 = r31;
    /* li r4, 4 */ // 0x80610018
    /* li r5, 0 */ // 0x8061001C
    /* li r6, 1 */ // 0x80610020
    FUN_8061E8CC(r3, r4, r5, r6); // bl 0x8061E8CC
    r0 = *(0x24 + r1); // lwz @ 0x80610028
    r31 = *(0x1c + r1); // lwz @ 0x8061002C
    r30 = *(0x18 + r1); // lwz @ 0x80610030
    return;
}