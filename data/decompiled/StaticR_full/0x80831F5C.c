/* Function at 0x80831F5C, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80831F5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80831F70
    r30 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x80831F78
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80831F7C
    if (!=) goto 0x0x80831f90;
    /* li r4, 0 */ // 0x80831F84
    FUN_80831E1C(r4); // bl 0x80831E1C
    /* b 0x80831fc0 */ // 0x80831F8C
    /* li r4, 0 */ // 0x80831F90
    FUN_80831E1C(r4, r4); // bl 0x80831E1C
    if (==) goto 0x0x80831fc0;
    if (==) goto 0x0x80831fc0;
    r0 = *(0xc + r30); // lha @ 0x80831FA8
    /* li r4, 4 */ // 0x80831FAC
    r3 = *(4 + r30); // lwz @ 0x80831FB0
    /* li r5, 0xc */ // 0x80831FB4
    /* clrlwi r6, r0, 0x10 */ // 0x80831FB8
    FUN_80827458(r4, r5); // bl 0x80827458
    r0 = *(0x14 + r1); // lwz @ 0x80831FC0
    r31 = *(0xc + r1); // lwz @ 0x80831FC4
    r30 = *(8 + r1); // lwz @ 0x80831FC8
    return;
}