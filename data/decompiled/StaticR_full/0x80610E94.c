/* Function at 0x80610E94, size=372 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80610E94(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80610E9C
    /* lfs f0, 0(r4) */ // 0x80610EA4
    *(0xc + r1) = r31; // stw @ 0x80610EA8
    /* li r31, 0 */ // 0x80610EAC
    *(8 + r1) = r30; // stw @ 0x80610EB0
    r30 = r3;
    *(0x118 + r3) = r31; // sth @ 0x80610EB8
    r5 = *(0 + r3); // lwz @ 0x80610EBC
    r4 = *(4 + r5); // lwz @ 0x80610EC0
    r0 = *(4 + r4); // lwz @ 0x80610EC4
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80610ECC
    r4 = *(0 + r3); // lwz @ 0x80610ED0
    r4 = *(4 + r4); // lwz @ 0x80610ED4
    r0 = *(8 + r4); // lwz @ 0x80610ED8
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80610EE0
    *(0x102 + r3) = r31; // sth @ 0x80610EE4
    r4 = *(0 + r3); // lwz @ 0x80610EE8
    /* stfs f0, 0x1b0(r3) */ // 0x80610EEC
    r4 = *(4 + r4); // lwz @ 0x80610EF0
    r0 = *(4 + r4); // lwz @ 0x80610EF4
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80610EFC
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x1c4 + r30) = r31; // sth @ 0x80610F04
    r3 = r30;
    r6 = *(0 + r30); // lwz @ 0x80610F0C
    /* li r4, 4 */ // 0x80610F10
    /* li r5, 0 */ // 0x80610F14
    r7 = *(4 + r6); // lwz @ 0x80610F18
    /* li r6, 1 */ // 0x80610F1C
    r0 = *(4 + r7); // lwz @ 0x80610F20
    /* clrlwi r0, r0, 1 */ // 0x80610F24
    *(4 + r7) = r0; // stw @ 0x80610F28
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r30) = r31; // sth @ 0x80610F30
    /* lis r3, 0 */ // 0x80610F34
    r4 = *(0 + r30); // lwz @ 0x80610F38
    /* lfs f0, 0(r3) */ // 0x80610F3C
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80610F44
    r0 = *(8 + r4); // lwz @ 0x80610F48
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80610F50
    r0 = *(0x254 + r30); // lhz @ 0x80610F54
    *(0x14c + r30) = r31; // sth @ 0x80610F58
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x80610F60
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r30) = r31; // sth @ 0x80610F68
    *(0x150 + r30) = r31; // sth @ 0x80610F6C
    *(0x254 + r30) = r0; // sth @ 0x80610F70
    *(0xec + r30) = r31; // stw @ 0x80610F74
    /* stfs f0, 0xf0(r30) */ // 0x80610F78
    r4 = *(4 + r4); // lwz @ 0x80610F7C
    r0 = *(0xc + r4); // lwz @ 0x80610F80
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80610F88
    r4 = *(0 + r30); // lwz @ 0x80610F8C
    r4 = *(4 + r4); // lwz @ 0x80610F90
    r0 = *(0xc + r4); // lwz @ 0x80610F94
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80610F9C
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r30) = r31; // sth @ 0x80610FA4
    r3 = *(0 + r30); // lwz @ 0x80610FA8
    r3 = *(4 + r3); // lwz @ 0x80610FAC
    r0 = *(8 + r3); // lwz @ 0x80610FB0
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80610FB8
    r3 = *(0 + r30); // lwz @ 0x80610FBC
    r3 = *(4 + r3); // lwz @ 0x80610FC0
    r0 = *(0xc + r3); // lwz @ 0x80610FC4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80610FCC
    r3 = *(0 + r30); // lwz @ 0x80610FD0
    r3 = *(4 + r3); // lwz @ 0x80610FD4
    r0 = *(0xc + r3); // lwz @ 0x80610FD8
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x80610FDC
    if (==) goto 0x0x80610ff0;
    r3 = r30;
    FUN_8061EE94(r3); // bl 0x8061EE94
    FUN_806451A0(r3); // bl 0x806451A0
    r0 = *(0x14 + r1); // lwz @ 0x80610FF0
    r31 = *(0xc + r1); // lwz @ 0x80610FF4
    r30 = *(8 + r1); // lwz @ 0x80610FF8
    return;
}