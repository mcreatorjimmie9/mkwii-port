/* Function at 0x806E15A4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_806E15A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x806E15AC
    r0 = *(0x15f7 + r3); // lbz @ 0x806E15B0
    if (!=) goto 0x0x806e15d0;
    /* lis r5, 0 */ // 0x806E15BC
    /* li r4, 0 */ // 0x806E15C0
    /* lfs f1, 0(r5) */ // 0x806E15C4
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* b 0x806e15ec */ // 0x806E15CC
    /* li r4, 0 */ // 0x806E15D0
    r3 = r3 + 0x3a8; // 0x806E15D4
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806E15DC
    /* li r4, 1 */ // 0x806E15E0
    /* lfs f1, 0(r5) */ // 0x806E15E4
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806E15EC
    return;
}