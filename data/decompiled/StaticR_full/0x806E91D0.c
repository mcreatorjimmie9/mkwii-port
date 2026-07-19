/* Function at 0x806E91D0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806E91D0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x806E91D8
    /* lis r8, 0 */ // 0x806E91DC
    *(0x14 + r1) = r0; // stw @ 0x806E91E0
    /* li r0, 0 */ // 0x806E91E4
    r5 = r3;
    r10 = r3;
    *(8 + r1) = r0; // stw @ 0x806E91F0
    r4 = r4 + 0; // 0x806E91F4
    r8 = r8 + 0; // 0x806E91F8
    r0 = *(0x291c + r3); // lwz @ 0x806E9200
    /* li r7, 0 */ // 0x806E9204
    /* mulli r0, r0, 0x58 */ // 0x806E9208
    r6 = r3 + r0; // 0x806E920C
    /* li r3, 0xc */ // 0x806E9210
    r0 = *(0x58 + r6); // lbz @ 0x806E9214
    /* li r6, 0 */ // 0x806E9218
    *(8 + r1) = r0; // stb @ 0x806E921C
    FUN_805E3430(r3, r6); // bl 0x805E3430
}