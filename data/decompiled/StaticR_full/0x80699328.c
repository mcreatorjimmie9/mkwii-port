/* Function at 0x80699328, size=196 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 5 function(s) */

int FUN_80699328(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x80699334
    r25 = r4;
    r31 = *(0x3b + r1); // lbz @ 0x8069933C
    r24 = r3;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r10;
    /* li r4, 2 */ // 0x80699358
    *(0xa0 + r3) = r9; // stw @ 0x8069935C
    FUN_8069FEE8(r4); // bl 0x8069FEE8
    r3 = r24;
    r5 = r24 + 0xa8; // 0x80699368
    /* li r4, 0 */ // 0x8069936C
    FUN_8069FEF8(r3, r5, r4); // bl 0x8069FEF8
    r3 = r24;
    r5 = r24 + 0x2f0; // 0x80699378
    /* li r4, 1 */ // 0x8069937C
    FUN_8069FEF8(r4, r3, r5, r4); // bl 0x8069FEF8
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r30;
    r9 = r31;
    r3 = r24 + 0xa8; // 0x80699398
    /* li r4, 0 */ // 0x8069939C
    FUN_806997D4(r7, r8, r9, r3, r4); // bl 0x806997D4
    r5 = r25;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    r9 = r31;
    r3 = r24 + 0x2f0; // 0x806993B8
    /* li r4, 1 */ // 0x806993BC
    FUN_806997D4(r7, r8, r9, r3, r4); // bl 0x806997D4
    r12 = *(0 + r24); // lwz @ 0x806993C4
    r3 = r24;
    r12 = *(0x38 + r12); // lwz @ 0x806993CC
    /* mtctr r12 */ // 0x806993D0
    /* bctrl  */ // 0x806993D4
    r0 = *(0x34 + r1); // lwz @ 0x806993DC
    return;
}