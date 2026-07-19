/* Function at 0x80831A0C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80831A0C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x80831A14
    *(0x14 + r1) = r0; // stw @ 0x80831A18
    *(0xc + r1) = r31; // stw @ 0x80831A1C
    r31 = r3;
    FUN_808313BC(r4); // bl 0x808313BC
    r0 = *(0x6d + r31); // lbz @ 0x80831A28
    r3 = r31;
    if (>=) goto 0x0x80831a54;
    r0 = *(4 + r31); // lwz @ 0x80831A38
    /* lis r4, 0 */ // 0x80831A3C
    r4 = r4 + 0; // 0x80831A40
    /* mulli r0, r0, 0x74 */ // 0x80831A44
    r4 = r4 + r0; // 0x80831A48
    r4 = *(0x64 + r4); // lwz @ 0x80831A4C
    /* b 0x80831a6c */ // 0x80831A50
    r0 = *(4 + r31); // lwz @ 0x80831A54
    /* lis r4, 0 */ // 0x80831A58
    r4 = r4 + 0; // 0x80831A5C
    /* mulli r0, r0, 0x74 */ // 0x80831A60
    r4 = r4 + r0; // 0x80831A64
    r4 = *(0x60 + r4); // lwz @ 0x80831A68
    /* lis r5, 0 */ // 0x80831A6C
    /* lfs f1, 0(r5) */ // 0x80831A70
    FUN_8082DFAC(r5); // bl 0x8082DFAC
    r0 = *(0x14 + r1); // lwz @ 0x80831A78
    r31 = *(0xc + r1); // lwz @ 0x80831A7C
    return;
}