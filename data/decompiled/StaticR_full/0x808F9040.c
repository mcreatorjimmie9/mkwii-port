/* Function at 0x808F9040, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F9040(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F904C
    r31 = r3;
    r4 = *(0x24 + r3); // lha @ 0x808F9054
    r0 = *(0x26 + r3); // lbz @ 0x808F9058
    if (<) goto 0x0x808f906c;
    /* li r3, -1 */ // 0x808F9064
    /* b 0x808f90dc */ // 0x808F9068
    /* lis r3, 0 */ // 0x808F906C
    r4 = *(0x27 + r31); // lbz @ 0x808F9070
    r3 = *(0 + r3); // lwz @ 0x808F9074
    FUN_808F6C30(r3, r3); // bl 0x808F6C30
    if (!=) goto 0x0x808f908c;
    /* li r3, -1 */ // 0x808F9084
    /* b 0x808f90dc */ // 0x808F9088
    r0 = *(0x26 + r31); // lbz @ 0x808F908C
    if (!=) goto 0x0x808f90a0;
    r3 = *(0x18 + r31); // lwz @ 0x808F9098
    /* b 0x808f90dc */ // 0x808F909C
    /* li r5, 0 */ // 0x808F90A0
    /* li r4, 1 */ // 0x808F90A4
    /* mtctr r0 */ // 0x808F90A8
    if (<=) goto 0x0x808f90d8;
    r0 = *(0x20 + r31); // lwz @ 0x808F90B4
    r3 = r4 << r5; // slw
    /* andc. r0, r3, r0 */ // 0x808F90BC
    if (==) goto 0x0x808f90d0;
    r0 = *(0x18 + r31); // lwz @ 0x808F90C4
    r3 = r0 + r5; // 0x808F90C8
    /* b 0x808f90dc */ // 0x808F90CC
    r5 = r5 + 1; // 0x808F90D0
    if (counter-- != 0) goto 0x0x808f90b4;
    /* li r3, -1 */ // 0x808F90D8
    r0 = *(0x14 + r1); // lwz @ 0x808F90DC
    r31 = *(0xc + r1); // lwz @ 0x808F90E0
    return;
}